
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef scalar_t__ uint8_t ;
typedef int mimetype ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_19__ {scalar_t__* data; } ;
struct TYPE_18__ {int error_recognition; } ;
struct TYPE_14__ {int size; int flags; int stream_index; scalar_t__* data; TYPE_5__* buf; } ;
struct TYPE_17__ {int metadata; TYPE_1__* codecpar; int disposition; TYPE_11__ attached_pic; int index; } ;
struct TYPE_16__ {scalar_t__ id; int str; } ;
struct TYPE_15__ {int codec_id; int width; int height; int codec_type; } ;
typedef TYPE_2__ CodecMime ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVBufferRef ;


 int AVERROR (int ) ;
 int AVERROR_INVALIDDATA ;
 int AVMEDIA_TYPE_VIDEO ;
 scalar_t__ AV_CODEC_ID_NONE ;
 int AV_CODEC_ID_PNG ;
 int AV_DICT_DONT_STRDUP_VAL ;
 int AV_DISPOSITION_ATTACHED_PIC ;
 int AV_EF_EXPLODE ;
 scalar_t__ AV_INPUT_BUFFER_PADDING_SIZE ;
 int AV_LOG_ERROR ;
 int AV_PKT_FLAG_KEY ;
 scalar_t__ AV_RB64 (scalar_t__*) ;
 int EIO ;
 int ENOMEM ;
 int FFMIN (int,int) ;
 unsigned int FF_ARRAY_ELEMS (scalar_t__**) ;
 scalar_t__ PNGSIG ;
 int RETURN_ERROR (int) ;
 int av_assert0 (int) ;
 TYPE_5__* av_buffer_alloc (scalar_t__) ;
 int av_buffer_unref (TYPE_5__**) ;
 int av_dict_set (int *,char*,scalar_t__*,int ) ;
 int av_freep (scalar_t__**) ;
 int av_init_packet (TYPE_11__*) ;
 int av_log (TYPE_4__*,int ,char*,...) ;
 scalar_t__* av_malloc (int) ;
 TYPE_3__* avformat_new_stream (TYPE_4__*,int *) ;
 void* avio_rb32 (int *) ;
 int avio_read (int *,scalar_t__*,int) ;
 int avio_skip (int *,int) ;
 TYPE_2__* ff_id3v2_mime_tags ;
 scalar_t__** ff_id3v2_picture_types ;
 int ffio_init_context (int *,scalar_t__*,int,int ,int *,int *,int *,int *) ;
 int memset (scalar_t__*,int ,scalar_t__) ;
 int strncmp (int ,scalar_t__*,int) ;

int ff_flac_parse_picture(AVFormatContext *s, uint8_t *buf, int buf_size)
{
    const CodecMime *mime = ff_id3v2_mime_tags;
    enum AVCodecID id = AV_CODEC_ID_NONE;
    AVBufferRef *data = ((void*)0);
    uint8_t mimetype[64], *desc = ((void*)0);
    AVIOContext pb0, *pb = &pb0;
    AVStream *st;
    int width, height, ret = 0;
    int len;
    unsigned int type;

    ffio_init_context(pb, buf, buf_size, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));


    type = avio_rb32(pb);
    if (type >= FF_ARRAY_ELEMS(ff_id3v2_picture_types)) {
        av_log(s, AV_LOG_ERROR, "Invalid picture type: %d.\n", type);
        if (s->error_recognition & AV_EF_EXPLODE) {
            RETURN_ERROR(AVERROR_INVALIDDATA);
        }
        type = 0;
    }


    len = avio_rb32(pb);
    if (len <= 0 || len >= 64 ||
        avio_read(pb, mimetype, FFMIN(len, sizeof(mimetype) - 1)) != len) {
        av_log(s, AV_LOG_ERROR, "Could not read mimetype from an attached "
               "picture.\n");
        if (s->error_recognition & AV_EF_EXPLODE)
            ret = AVERROR_INVALIDDATA;
        goto fail;
    }
    av_assert0(len < sizeof(mimetype));
    mimetype[len] = 0;

    while (mime->id != AV_CODEC_ID_NONE) {
        if (!strncmp(mime->str, mimetype, sizeof(mimetype))) {
            id = mime->id;
            break;
        }
        mime++;
    }
    if (id == AV_CODEC_ID_NONE) {
        av_log(s, AV_LOG_ERROR, "Unknown attached picture mimetype: %s.\n",
               mimetype);
        if (s->error_recognition & AV_EF_EXPLODE)
            ret = AVERROR_INVALIDDATA;
        goto fail;
    }


    len = avio_rb32(pb);
    if (len > 0) {
        if (!(desc = av_malloc(len + 1))) {
            RETURN_ERROR(AVERROR(ENOMEM));
        }

        if (avio_read(pb, desc, len) != len) {
            av_log(s, AV_LOG_ERROR, "Error reading attached picture description.\n");
            if (s->error_recognition & AV_EF_EXPLODE)
                ret = AVERROR(EIO);
            goto fail;
        }
        desc[len] = 0;
    }


    width = avio_rb32(pb);
    height = avio_rb32(pb);
    avio_skip(pb, 8);


    len = avio_rb32(pb);
    if (len <= 0) {
        av_log(s, AV_LOG_ERROR, "Invalid attached picture size: %d.\n", len);
        if (s->error_recognition & AV_EF_EXPLODE)
            ret = AVERROR_INVALIDDATA;
        goto fail;
    }
    if (!(data = av_buffer_alloc(len + AV_INPUT_BUFFER_PADDING_SIZE))) {
        RETURN_ERROR(AVERROR(ENOMEM));
    }
    memset(data->data + len, 0, AV_INPUT_BUFFER_PADDING_SIZE);
    if (avio_read(pb, data->data, len) != len) {
        av_log(s, AV_LOG_ERROR, "Error reading attached picture data.\n");
        if (s->error_recognition & AV_EF_EXPLODE)
            ret = AVERROR(EIO);
        goto fail;
    }

    if (AV_RB64(data->data) == PNGSIG)
        id = AV_CODEC_ID_PNG;

    st = avformat_new_stream(s, ((void*)0));
    if (!st) {
        RETURN_ERROR(AVERROR(ENOMEM));
    }

    av_init_packet(&st->attached_pic);
    st->attached_pic.buf = data;
    st->attached_pic.data = data->data;
    st->attached_pic.size = len;
    st->attached_pic.stream_index = st->index;
    st->attached_pic.flags |= AV_PKT_FLAG_KEY;

    st->disposition |= AV_DISPOSITION_ATTACHED_PIC;
    st->codecpar->codec_type = AVMEDIA_TYPE_VIDEO;
    st->codecpar->codec_id = id;
    st->codecpar->width = width;
    st->codecpar->height = height;
    av_dict_set(&st->metadata, "comment", ff_id3v2_picture_types[type], 0);
    if (desc)
        av_dict_set(&st->metadata, "title", desc, AV_DICT_DONT_STRDUP_VAL);

    return 0;

fail:
    av_buffer_unref(&data);
    av_freep(&desc);

    return ret;
}

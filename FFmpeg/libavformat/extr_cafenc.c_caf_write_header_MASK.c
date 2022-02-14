
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_28__ {int codec_id; int frame_size; int channels; int block_align; int extradata_size; char* extradata; scalar_t__ channel_layout; int sample_rate; } ;
struct TYPE_27__ {int value; int key; } ;
struct TYPE_26__ {int nb_streams; int metadata; TYPE_2__* priv_data; TYPE_1__** streams; TYPE_3__* pb; } ;
struct TYPE_25__ {int seekable; } ;
struct TYPE_24__ {int data; } ;
struct TYPE_23__ {TYPE_6__* codecpar; } ;
typedef TYPE_2__ CAFContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;
typedef TYPE_6__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,char*,TYPE_5__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,unsigned int) ;
 int FUNC_14 (TYPE_3__*,char*,int) ;
 int FUNC_15 (int) ;
 int VAR_12 ;
 unsigned int FUNC_16 (int ,int) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_3__*,char*) ;
 int FUNC_20 (int,int,int) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(AVFormatContext *VAR_13)
{
    AVIOContext *VAR_14 = VAR_13->pb;
    AVCodecParameters *VAR_15 = VAR_13->streams[0]->codecpar;
    CAFContext *VAR_16 = VAR_13->priv_data;
    AVDictionaryEntry *VAR_17 = ((void*)0);
    unsigned int VAR_18 = FUNC_16(VAR_12, VAR_15->codec_id);
    int64_t VAR_19 = 0;
    int VAR_20 = VAR_15->frame_size;

    if (VAR_13->nb_streams != 1) {
        FUNC_5(VAR_13, VAR_10, "CAF files have exactly one stream\n");
        return FUNC_0(VAR_11);
    }

    switch (VAR_15->codec_id) {
    case 128:
        FUNC_5(VAR_13, VAR_10, "muxing codec currently unsupported\n");
        return VAR_1;
    }

    if (VAR_15->codec_id == VAR_6 && VAR_15->channels > 2) {
        FUNC_5(VAR_13, VAR_10, "Only mono and stereo are supported for Opus\n");
        return VAR_0;
    }

    if (!VAR_18) {
        FUNC_5(VAR_13, VAR_10, "unsupported codec\n");
        return VAR_0;
    }

    if (!VAR_15->block_align && !(VAR_14->seekable & VAR_2)) {
        FUNC_5(VAR_13, VAR_10, "Muxing variable packet size not supported on non seekable output\n");
        return VAR_0;
    }

    if (VAR_15->codec_id != VAR_5 || VAR_20 != 576)
        VAR_20 = FUNC_20(VAR_15->codec_id, VAR_15->channels, VAR_15->block_align);

    FUNC_19(VAR_14, "caff");
    FUNC_10(VAR_14, 1);
    FUNC_10(VAR_14, 0);

    FUNC_19(VAR_14, "desc");
    FUNC_12(VAR_14, 32);
    FUNC_12(VAR_14, FUNC_3(VAR_15->sample_rate));
    FUNC_13(VAR_14, VAR_18);
    FUNC_11(VAR_14, FUNC_15(VAR_15->codec_id));
    FUNC_11(VAR_14, VAR_15->block_align);
    FUNC_11(VAR_14, VAR_20);
    FUNC_11(VAR_14, VAR_15->channels);
    FUNC_11(VAR_14, FUNC_4(VAR_15->codec_id));

    if (VAR_15->channel_layout) {
        FUNC_19(VAR_14, "chan");
        FUNC_12(VAR_14, 12);
        FUNC_17(VAR_14, VAR_15->channel_layout);
    }

    if (VAR_15->codec_id == VAR_3) {
        FUNC_19(VAR_14, "kuki");
        FUNC_12(VAR_14, 12 + VAR_15->extradata_size);
        FUNC_14(VAR_14, "\0\0\0\14frmaalac", 12);
        FUNC_14(VAR_14, VAR_15->extradata, VAR_15->extradata_size);
    } else if (VAR_15->codec_id == VAR_4) {
        FUNC_19(VAR_14, "kuki");
        FUNC_12(VAR_14, 29);
        FUNC_14(VAR_14, "\0\0\0\14frmasamr", 12);
        FUNC_11(VAR_14, 0x11);
        FUNC_14(VAR_14, "samrFFMP", 8);
        FUNC_9(VAR_14, 0);

        FUNC_10(VAR_14, 0x81FF);
        FUNC_9(VAR_14, 0x00);
        FUNC_9(VAR_14, 0x01);
    } else if (VAR_15->codec_id == VAR_7 || VAR_15->codec_id == VAR_8) {
        FUNC_19(VAR_14, "kuki");
        FUNC_12(VAR_14, VAR_15->extradata_size);
        FUNC_14(VAR_14, VAR_15->extradata, VAR_15->extradata_size);
    }

    FUNC_18(VAR_13);
    if (FUNC_1(VAR_13->metadata)) {
        FUNC_19(VAR_14, "info");
        while ((VAR_17 = FUNC_2(VAR_13->metadata, "", VAR_17, VAR_9))) {
            VAR_19 += FUNC_21(VAR_17->key) + FUNC_21(VAR_17->value) + 2;
        }
        FUNC_12(VAR_14, VAR_19 + 4);
        FUNC_11(VAR_14, FUNC_1(VAR_13->metadata));
        VAR_17 = ((void*)0);
        while ((VAR_17 = FUNC_2(VAR_13->metadata, "", VAR_17, VAR_9))) {
            FUNC_7(VAR_14, VAR_17->key);
            FUNC_7(VAR_14, VAR_17->value);
        }
    }

    FUNC_19(VAR_14, "data");
    VAR_16->data = FUNC_8(VAR_14);
    FUNC_12(VAR_14, -1);
    FUNC_11(VAR_14, 0);

    FUNC_6(VAR_14);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef int ff_asf_guid ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_18__ {scalar_t__ codec_id; int codec_type; unsigned int codec_tag; int bits_per_coded_sample; scalar_t__ extradata_size; scalar_t__ extradata; void* height; void* width; } ;
struct TYPE_13__ {scalar_t__ preroll; int flags; int play_time; scalar_t__ file_size; } ;
struct TYPE_17__ {scalar_t__* asfid2avid; TYPE_4__* streams; TYPE_1__ hdr; } ;
struct TYPE_16__ {int ds_span; int ds_packet_size; int ds_chunk_size; int palette_changed; int * palette; } ;
struct TYPE_15__ {scalar_t__ nb_streams; int * pb; TYPE_5__* priv_data; } ;
struct TYPE_14__ {int id; int request_probe; void* need_parsing; TYPE_7__* codecpar; scalar_t__ duration; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFStream ;
typedef TYPE_5__ ASFContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 unsigned int FUNC_3 (char,char,char,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*,int,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_17 (int ,unsigned int) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (TYPE_3__*,int *,TYPE_7__*,int,int ) ;
 int FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (int *,int) ;
 int FUNC_22 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_23(AVFormatContext *VAR_24, int64_t VAR_25)
{
    ASFContext *VAR_26 = VAR_24->priv_data;
    AVIOContext *VAR_27 = VAR_24->pb;
    AVStream *VAR_28;
    ASFStream *VAR_29;
    ff_asf_guid VAR_30;
    enum AVMediaType VAR_31;
    int VAR_32, VAR_33;
    unsigned int VAR_34;
    int64_t VAR_35, VAR_36, VAR_37;
    int VAR_38, VAR_39 = 0;

    if (VAR_24->nb_streams == VAR_0) {
        FUNC_6(VAR_24, VAR_14, "too many streams\n");
        return FUNC_0(VAR_15);
    }

    VAR_35 = FUNC_15(VAR_27);

    VAR_28 = FUNC_8(VAR_24, ((void*)0));
    if (!VAR_28)
        return FUNC_0(VAR_16);
    FUNC_16(VAR_28, 32, 1, 1000);
    VAR_37 = VAR_26->hdr.preroll;

    if (!(VAR_26->hdr.flags & 0x01)) {
        int64_t VAR_40 = FUNC_13(VAR_27);
        if (VAR_40 <= 0 || (int64_t)VAR_26->hdr.file_size <= 0 ||
            20*FUNC_1(VAR_40 - (int64_t)VAR_26->hdr.file_size) < FUNC_2(VAR_40, VAR_26->hdr.file_size))
            VAR_28->duration = VAR_26->hdr.play_time /
                       (10000000 / 1000) - VAR_37;
    }
    FUNC_18(VAR_27, &VAR_30);

    VAR_38 = 0;
    if (!FUNC_20(&VAR_30, &VAR_17)) {
        VAR_31 = VAR_1;
    } else if (!FUNC_20(&VAR_30, &VAR_22)) {
        VAR_31 = VAR_4;
    } else if (!FUNC_20(&VAR_30, &VAR_21)) {
        VAR_31 = VAR_4;
        VAR_28->codecpar->codec_id = VAR_11;
    } else if (!FUNC_20(&VAR_30, &VAR_18)) {
        VAR_31 = VAR_2;
    } else if (!FUNC_20(&VAR_30, &VAR_20)) {
        VAR_38 = 1;
        VAR_31 = VAR_3;
    } else {
        return -1;
    }
    FUNC_18(VAR_27, &VAR_30);
    FUNC_14(VAR_27, 8);
    VAR_32 = FUNC_12(VAR_27);
    FUNC_12(VAR_27);
    VAR_28->id = FUNC_11(VAR_27) & 0x7f;

    VAR_26->asfid2avid[VAR_28->id] = VAR_24->nb_streams - 1;
    VAR_29 = &VAR_26->streams[VAR_28->id];

    FUNC_12(VAR_27);

    if (VAR_38) {
        FUNC_18(VAR_27, &VAR_30);
        if (!FUNC_20(&VAR_30, &VAR_19)) {
            VAR_31 = VAR_1;
            VAR_39 = 1;
            FUNC_18(VAR_27, &VAR_30);
            FUNC_12(VAR_27);
            FUNC_12(VAR_27);
            FUNC_12(VAR_27);
            FUNC_18(VAR_27, &VAR_30);
            FUNC_12(VAR_27);
        }
    }

    VAR_28->codecpar->codec_type = VAR_31;
    if (VAR_31 == VAR_1) {
        int VAR_41 = FUNC_19(VAR_24, VAR_27, VAR_28->codecpar, VAR_32, 0);
        if (VAR_41 < 0)
            return VAR_41;
        if (VAR_39) {


            VAR_28->request_probe = 1;
            VAR_28->codecpar->codec_tag = 0;
        }
        if (VAR_28->codecpar->codec_id == VAR_9)
            VAR_28->need_parsing = VAR_8;
        else
            VAR_28->need_parsing = VAR_6;

        VAR_36 = FUNC_15(VAR_27);
        if (VAR_25 >= (VAR_36 + 8 - VAR_35 + 24)) {
            VAR_29->ds_span = FUNC_9(VAR_27);
            VAR_29->ds_packet_size = FUNC_11(VAR_27);
            VAR_29->ds_chunk_size = FUNC_11(VAR_27);
            FUNC_11(VAR_27);
            FUNC_9(VAR_27);
        }
        if (VAR_29->ds_span > 1) {
            if (!VAR_29->ds_chunk_size ||
                (VAR_29->ds_packet_size / VAR_29->ds_chunk_size <= 1) ||
                VAR_29->ds_packet_size % VAR_29->ds_chunk_size)
                VAR_29->ds_span = 0;
        }
    } else if (VAR_31 == VAR_4 &&
               VAR_25 - (FUNC_15(VAR_27) - VAR_35 + 24) >= 51) {
        FUNC_12(VAR_27);
        FUNC_12(VAR_27);
        FUNC_9(VAR_27);
        FUNC_11(VAR_27);
        VAR_33 = FUNC_12(VAR_27);
        VAR_28->codecpar->width = FUNC_12(VAR_27);
        VAR_28->codecpar->height = FUNC_12(VAR_27);

        FUNC_11(VAR_27);
        VAR_28->codecpar->bits_per_coded_sample = FUNC_11(VAR_27);
        VAR_34 = FUNC_12(VAR_27);
        FUNC_14(VAR_27, 20);
        if (VAR_33 > 40) {
            VAR_28->codecpar->extradata_size = FUNC_21(VAR_27, VAR_33 - 40);
            VAR_28->codecpar->extradata = FUNC_7(VAR_28->codecpar->extradata_size +
                                                   VAR_13);
            if (!VAR_28->codecpar->extradata)
                return FUNC_0(VAR_16);
            FUNC_10(VAR_27, VAR_28->codecpar->extradata, VAR_28->codecpar->extradata_size);
        }




        if (VAR_28->codecpar->extradata_size && (VAR_28->codecpar->bits_per_coded_sample <= 8)) {





            FUNC_22(VAR_29->palette, VAR_28->codecpar->extradata,
                   FUNC_2(VAR_28->codecpar->extradata_size, VAR_5));

            VAR_29->palette_changed = 1;
        }

        VAR_28->codecpar->codec_tag = VAR_34;
        VAR_28->codecpar->codec_id = FUNC_17(VAR_23, VAR_34);
        if (VAR_34 == FUNC_3('D', 'V', 'R', ' ')) {
            VAR_28->need_parsing = VAR_6;



            VAR_28->codecpar->width =
                VAR_28->codecpar->height = 0;
            FUNC_5(&VAR_28->codecpar->extradata);
            VAR_28->codecpar->extradata_size = 0;
        }
        if (VAR_28->codecpar->codec_id == VAR_10)
            VAR_28->need_parsing = VAR_7;
        if (VAR_28->codecpar->codec_id == VAR_12)
            VAR_28->need_parsing = VAR_7;
    }
    VAR_36 = FUNC_15(VAR_27);
    FUNC_14(VAR_27, VAR_25 - (VAR_36 - VAR_35 + 24));

    return 0;
}

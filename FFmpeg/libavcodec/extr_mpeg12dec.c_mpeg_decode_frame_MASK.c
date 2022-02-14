
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_20__ {int extradata_size; int err_recognition; int const* extradata; int codec_tag; TYPE_4__* priv_data; } ;
struct TYPE_19__ {int data; } ;
struct TYPE_18__ {int size; int * data; } ;
struct TYPE_16__ {scalar_t__ low_delay; scalar_t__ codec_tag; int timecode_frame_start; int * current_picture_ptr; int parse_context; TYPE_2__* avctx; TYPE_1__* next_picture_ptr; } ;
struct TYPE_17__ {scalar_t__ mpeg_enc_ctx_allocated; int extradata_decoded; scalar_t__ slice_count; TYPE_3__ mpeg_enc_ctx; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int f; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ Mpeg1Context ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrameSideData ;
typedef int AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_7__*,int *,int*,int const*,int) ;
 scalar_t__ FUNC_9 (int *,int,int const**,int*) ;
 int FUNC_10 (int *,int const*,int,int *) ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_6, void *VAR_7,
                             int *VAR_8, AVPacket *VAR_9)
{
    const uint8_t *VAR_10 = VAR_9->data;
    int VAR_11;
    int VAR_12 = VAR_9->size;
    Mpeg1Context *VAR_13 = VAR_6->priv_data;
    AVFrame *VAR_14 = VAR_7;
    MpegEncContext *VAR_15 = &VAR_13->mpeg_enc_ctx;

    if (VAR_12 == 0 || (VAR_12 == 4 && FUNC_1(VAR_10) == VAR_5)) {

        if (VAR_15->low_delay == 0 && VAR_15->next_picture_ptr) {
            int VAR_16 = FUNC_4(VAR_14, VAR_15->next_picture_ptr->f);
            if (VAR_16 < 0)
                return VAR_16;

            VAR_15->next_picture_ptr = ((void*)0);

            *VAR_8 = 1;
        }
        return VAR_12;
    }

    if (VAR_15->avctx->flags & VAR_0) {
        int VAR_17 = FUNC_10(&VAR_15->parse_context, VAR_10,
                                           VAR_12, ((void*)0));

        if (FUNC_9(&VAR_15->parse_context, VAR_17,
                             (const uint8_t **) &VAR_10, &VAR_12) < 0)
            return VAR_12;
    }

    VAR_15->codec_tag = FUNC_7(VAR_6->codec_tag);
    if (VAR_13->mpeg_enc_ctx_allocated == 0 && ( VAR_15->codec_tag == FUNC_2("VCR2")
                                           || VAR_15->codec_tag == FUNC_2("BW10")
                                          ))
        FUNC_12(VAR_6);

    VAR_13->slice_count = 0;

    if (VAR_6->extradata && !VAR_13->extradata_decoded) {
        VAR_11 = FUNC_8(VAR_6, VAR_14, VAR_8,
                            VAR_6->extradata, VAR_6->extradata_size);
        if (*VAR_8) {
            FUNC_6(VAR_6, VAR_3, "picture in extradata\n");
            FUNC_5(VAR_14);
            *VAR_8 = 0;
        }
        VAR_13->extradata_decoded = 1;
        if (VAR_11 < 0 && (VAR_6->err_recognition & VAR_1)) {
            VAR_15->current_picture_ptr = ((void*)0);
            return VAR_11;
        }
    }

    VAR_11 = FUNC_8(VAR_6, VAR_14, VAR_8, VAR_10, VAR_12);
    if (VAR_11<0 || *VAR_8) {
        VAR_15->current_picture_ptr = ((void*)0);

        if (VAR_15->timecode_frame_start != -1 && *VAR_8) {
            AVFrameSideData *VAR_18 = FUNC_3(VAR_14,
                                                             VAR_2,
                                                             sizeof(int64_t));
            if (!VAR_18)
                return FUNC_0(VAR_4);
            FUNC_11(VAR_18->data, &VAR_15->timecode_frame_start, sizeof(int64_t));

            VAR_15->timecode_frame_start = -1;
        }
    }

    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vpx_enc_frame_flags_t ;
struct vpx_image {int range; int * stride; int * planes; } ;
typedef int int64_t ;
struct TYPE_16__ {int sz; int buf; } ;
struct TYPE_17__ {TYPE_1__ twopass_stats; int deadline; int encoder_alpha; scalar_t__ is_alpha; int encoder; struct vpx_image rawimg_alpha; struct vpx_image rawimg; } ;
typedef TYPE_2__ VPxContext ;
struct TYPE_20__ {scalar_t__ codec_id; int flags; int stats_out; int ticks_per_frame; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int value; } ;
struct TYPE_18__ {int color_range; scalar_t__ pict_type; int height; int width; scalar_t__ metadata; int pts; int * linesize; int * data; } ;
typedef int AVPacket ;
typedef int AVFrameSideData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef TYPE_5__ AVCodecContext ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_2 (int ,unsigned int,int ,int ) ;
 TYPE_4__* FUNC_3 (scalar_t__,char*,int *,int ) ;
 int * FUNC_4 (TYPE_3__ const*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,char*,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*,int ,int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (TYPE_5__*,int ,int ,int const*) ;
 int FUNC_12 (TYPE_5__*,int ,int ,int const*) ;
 int FUNC_13 (int *,struct vpx_image*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_15, AVPacket *VAR_16,
                      const AVFrame *VAR_17, int *VAR_18)
{
    VPxContext *VAR_19 = VAR_15->priv_data;
    struct vpx_image *VAR_20 = ((void*)0);
    struct vpx_image *VAR_21 = ((void*)0);
    int64_t VAR_22 = 0;
    int VAR_23, VAR_24;
    vpx_enc_frame_flags_t VAR_25 = 0;

    if (VAR_17) {
        const AVFrameSideData *VAR_26 = FUNC_4(VAR_17, VAR_3);
        VAR_20 = &VAR_19->rawimg;
        VAR_20->planes[VAR_14] = VAR_17->data[0];
        VAR_20->planes[VAR_12] = VAR_17->data[1];
        VAR_20->planes[VAR_13] = VAR_17->data[2];
        VAR_20->stride[VAR_14] = VAR_17->linesize[0];
        VAR_20->stride[VAR_12] = VAR_17->linesize[1];
        VAR_20->stride[VAR_13] = VAR_17->linesize[2];
        if (VAR_19->is_alpha) {
            VAR_21 = &VAR_19->rawimg_alpha;
            VAR_23 = FUNC_9(VAR_15, VAR_17->width, VAR_17->height);
            if (VAR_23 < 0)
                return VAR_23;
            VAR_21->planes[VAR_14] = VAR_17->data[3];
            VAR_21->stride[VAR_14] = VAR_17->linesize[3];
        }
        VAR_22 = VAR_17->pts;
        if (VAR_17->pict_type == VAR_5)
            VAR_25 |= VAR_11;
        if (VAR_6 && VAR_15->codec_id == VAR_2 && VAR_17->metadata) {
            AVDictionaryEntry* VAR_27 = FUNC_3(VAR_17->metadata, "vp8-flags", ((void*)0), 0);
            if (VAR_27) {
                VAR_25 |= FUNC_10(VAR_27->value, ((void*)0), 10);
            }
        }

        if (VAR_26) {
            if (VAR_15->codec_id == VAR_2) {
                FUNC_11(VAR_15, VAR_17->width, VAR_17->height, VAR_26);
            } else {
                FUNC_12(VAR_15, VAR_17->width, VAR_17->height, VAR_26);
            }
        }
    }

    VAR_23 = FUNC_13(&VAR_19->encoder, VAR_20, VAR_22,
                           VAR_15->ticks_per_frame, VAR_25, VAR_19->deadline);
    if (VAR_23 != VAR_8) {
        FUNC_7(VAR_15, "Error encoding frame");
        return VAR_0;
    }

    if (VAR_19->is_alpha) {
        VAR_23 = FUNC_13(&VAR_19->encoder_alpha, VAR_21, VAR_22,
                               VAR_15->ticks_per_frame, VAR_25, VAR_19->deadline);
        if (VAR_23 != VAR_8) {
            FUNC_7(VAR_15, "Error encoding alpha frame");
            return VAR_0;
        }
    }

    VAR_24 = FUNC_8(VAR_15, VAR_16);

    if (!VAR_17 && VAR_15->flags & VAR_1) {
        unsigned int VAR_28 = FUNC_1(VAR_19->twopass_stats.sz);

        VAR_15->stats_out = FUNC_6(VAR_28);
        if (!VAR_15->stats_out) {
            FUNC_5(VAR_15, VAR_4, "Stat buffer alloc (%d bytes) failed\n",
                   VAR_28);
            return FUNC_0(VAR_7);
        }
        FUNC_2(VAR_15->stats_out, VAR_28, VAR_19->twopass_stats.buf,
                         VAR_19->twopass_stats.sz);
    }

    *VAR_18 = !!VAR_24;
    return 0;
}

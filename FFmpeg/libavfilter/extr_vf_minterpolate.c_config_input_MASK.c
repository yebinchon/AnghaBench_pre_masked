
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int h; int w; int format; TYPE_1__* dst; } ;
struct TYPE_14__ {int * get_cost; } ;
struct TYPE_13__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_12__ {void* blocks; } ;
struct TYPE_11__ {int log2_mb_size; int mb_size; int b_width; int b_height; int b_count; scalar_t__ mi_mode; scalar_t__ me_mode; scalar_t__ me_method; scalar_t__ scd_method; void* pixel_refs; void* pixel_weights; void* pixel_mvs; TYPE_3__* frames; int search_param; int sad; void** mv_table; void* int_blocks; int nb_planes; int log2_chroma_w; int log2_chroma_h; TYPE_5__ me_ctx; } ;
struct TYPE_10__ {TYPE_2__* priv; } ;
typedef int PixelWeights ;
typedef int PixelRefs ;
typedef int PixelMVS ;
typedef TYPE_2__ MIContext ;
typedef TYPE_3__ Frame ;
typedef int Block ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVMotionEstContext ;
typedef TYPE_6__ AVFilterLink ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void**) ;
 void* FUNC_3 (int const,int) ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,int,int ,int const,int const,int ,int,int ,int) ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_10)
{
    MIContext *VAR_11 = VAR_10->dst->priv;
    AVMotionEstContext *VAR_12 = &VAR_11->me_ctx;
    const AVPixFmtDescriptor *VAR_13 = FUNC_5(VAR_10->format);
    const int VAR_14 = VAR_10->h;
    const int VAR_15 = VAR_10->w;
    int VAR_16, VAR_17 = 0;

    VAR_11->log2_chroma_h = VAR_13->log2_chroma_h;
    VAR_11->log2_chroma_w = VAR_13->log2_chroma_w;

    VAR_11->nb_planes = FUNC_4(VAR_10->format);

    VAR_11->log2_mb_size = FUNC_1(VAR_11->mb_size);
    VAR_11->mb_size = 1 << VAR_11->log2_mb_size;

    VAR_11->b_width = VAR_15 >> VAR_11->log2_mb_size;
    VAR_11->b_height = VAR_14 >> VAR_11->log2_mb_size;
    VAR_11->b_count = VAR_11->b_width * VAR_11->b_height;

    for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
        Frame *VAR_18 = &VAR_11->frames[VAR_16];
        VAR_18->blocks = FUNC_3(VAR_11->b_count, sizeof(Block));
        if (!VAR_18->blocks)
            return FUNC_0(VAR_2);
    }

    if (VAR_11->mi_mode == VAR_5) {
        VAR_11->pixel_mvs = FUNC_3(VAR_15 * VAR_14, sizeof(PixelMVS));
        VAR_11->pixel_weights = FUNC_3(VAR_15 * VAR_14, sizeof(PixelWeights));
        VAR_11->pixel_refs = FUNC_3(VAR_15 * VAR_14, sizeof(PixelRefs));
        if (!VAR_11->pixel_mvs || !VAR_11->pixel_weights || !VAR_11->pixel_refs) {
            VAR_17 = FUNC_0(VAR_2);
            goto fail;
        }

        if (VAR_11->me_mode == VAR_4)
            if (!(VAR_11->int_blocks = FUNC_3(VAR_11->b_count, sizeof(Block))))
                return FUNC_0(VAR_2);

        if (VAR_11->me_method == VAR_0) {
            for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
                VAR_11->mv_table[VAR_16] = FUNC_3(VAR_11->b_count, sizeof(*VAR_11->mv_table[0]));
                if (!VAR_11->mv_table[VAR_16])
                    return FUNC_0(VAR_2);
            }
        }
    }

    if (VAR_11->scd_method == VAR_7) {
        VAR_11->sad = FUNC_7(8);
        if (!VAR_11->sad)
            return FUNC_0(VAR_1);
    }

    FUNC_6(VAR_12, VAR_11->mb_size, VAR_11->search_param, VAR_15, VAR_14, 0, (VAR_11->b_width - 1) << VAR_11->log2_mb_size, 0, (VAR_11->b_height - 1) << VAR_11->log2_mb_size);

    if (VAR_11->me_mode == VAR_3)
        VAR_12->get_cost = &VAR_8;
    else if (VAR_11->me_mode == VAR_4)
        VAR_12->get_cost = &VAR_9;

    return 0;
fail:
    for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
        FUNC_2(&VAR_11->frames[VAR_16].blocks);
    FUNC_2(&VAR_11->pixel_mvs);
    FUNC_2(&VAR_11->pixel_weights);
    FUNC_2(&VAR_11->pixel_refs);
    return VAR_17;
}

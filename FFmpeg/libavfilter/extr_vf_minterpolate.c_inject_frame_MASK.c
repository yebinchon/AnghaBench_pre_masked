
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_24__ {TYPE_2__* priv; } ;
struct TYPE_23__ {TYPE_7__* dst; } ;
struct TYPE_22__ {int * data; int * linesize; } ;
struct TYPE_21__ {scalar_t__** mvs; int sbad; } ;
struct TYPE_20__ {TYPE_5__* avf; int blocks; } ;
struct TYPE_17__ {int data_ref; int data_cur; int linesize; } ;
struct TYPE_19__ {scalar_t__ mi_mode; scalar_t__ me_method; int b_count; scalar_t__ me_mode; int b_height; int b_width; scalar_t__ mc_mode; int log2_mb_size; TYPE_1__* clusters; TYPE_4__* int_blocks; scalar_t__ vsbmc; TYPE_13__ me_ctx; TYPE_3__* frames; void** mv_table; } ;
struct TYPE_18__ {int nb; scalar_t__* sum; } ;
typedef TYPE_2__ MIContext ;
typedef TYPE_3__ Frame ;
typedef TYPE_4__ Block ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_13__*,int,int,scalar_t__,scalar_t__) ;
 void* FUNC_4 (void*,void*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_7, AVFrame *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_7->dst;
    MIContext *VAR_10 = VAR_9->priv;
    Frame VAR_11;
    int VAR_12, VAR_13, VAR_14;

    FUNC_0(&VAR_10->frames[0].avf);
    VAR_11 = VAR_10->frames[0];
    FUNC_5(&VAR_10->frames[0], &VAR_10->frames[1], sizeof(VAR_10->frames[0]) * (VAR_6 - 1));
    VAR_10->frames[VAR_6 - 1] = VAR_11;
    VAR_10->frames[VAR_6 - 1].avf = VAR_8;

    if (VAR_10->mi_mode == VAR_4) {

        if (VAR_10->me_method == VAR_0) {
            VAR_10->mv_table[2] = FUNC_4(VAR_10->mv_table[2], VAR_10->mv_table[1], sizeof(*VAR_10->mv_table[1]) * VAR_10->b_count);
            VAR_10->mv_table[1] = FUNC_4(VAR_10->mv_table[1], VAR_10->mv_table[0], sizeof(*VAR_10->mv_table[0]) * VAR_10->b_count);
        }

        if (VAR_10->me_mode == VAR_2) {

            if (VAR_10->frames[1].avf) {
                for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
                    VAR_10->me_ctx.linesize = VAR_10->frames[2].avf->linesize[0];
                    VAR_10->me_ctx.data_cur = VAR_10->frames[2].avf->data[0];
                    VAR_10->me_ctx.data_ref = VAR_10->frames[VAR_14 ? 3 : 1].avf->data[0];

                    for (VAR_13 = 0; VAR_13 < VAR_10->b_height; VAR_13++)
                        for (VAR_12 = 0; VAR_12 < VAR_10->b_width; VAR_12++)
                            FUNC_6(VAR_10, VAR_10->frames[2].blocks, VAR_12, VAR_13, VAR_14);
                }
            }

        } else if (VAR_10->me_mode == VAR_3) {
            Block *VAR_15;
            int VAR_16, VAR_17;

            if (!VAR_10->frames[0].avf)
                return 0;

            VAR_10->me_ctx.linesize = VAR_10->frames[0].avf->linesize[0];
            VAR_10->me_ctx.data_cur = VAR_10->frames[1].avf->data[0];
            VAR_10->me_ctx.data_ref = VAR_10->frames[2].avf->data[0];

            FUNC_1(VAR_10);

            if (VAR_10->mc_mode == VAR_1) {

                for (VAR_13 = 0; VAR_13 < VAR_10->b_height; VAR_13++)
                    for (VAR_12 = 0; VAR_12 < VAR_10->b_width; VAR_12++) {
                        int VAR_18 = VAR_12 << VAR_10->log2_mb_size;
                        int VAR_19 = VAR_13 << VAR_10->log2_mb_size;
                        VAR_15 = &VAR_10->int_blocks[VAR_12 + VAR_13 * VAR_10->b_width];

                        VAR_15->sbad = FUNC_3(&VAR_10->me_ctx, VAR_18, VAR_19, VAR_18 + VAR_15->mvs[0][0], VAR_19 + VAR_15->mvs[0][1]);
                    }
            }

            if (VAR_10->vsbmc) {

                for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
                    VAR_10->clusters[VAR_16].sum[0] = 0;
                    VAR_10->clusters[VAR_16].sum[1] = 0;
                    VAR_10->clusters[VAR_16].nb = 0;
                }

                for (VAR_13 = 0; VAR_13 < VAR_10->b_height; VAR_13++)
                    for (VAR_12 = 0; VAR_12 < VAR_10->b_width; VAR_12++) {
                        VAR_15 = &VAR_10->int_blocks[VAR_12 + VAR_13 * VAR_10->b_width];

                        VAR_10->clusters[0].sum[0] += VAR_15->mvs[0][0];
                        VAR_10->clusters[0].sum[1] += VAR_15->mvs[0][1];
                    }

                VAR_10->clusters[0].nb = VAR_10->b_count;

                if ((VAR_17 = FUNC_2(VAR_10)))
                    return VAR_17;
            }
        }
    }

    return 0;
}

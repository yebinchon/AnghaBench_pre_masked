
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_25__ {int is_disabled; TYPE_5__** outputs; TYPE_2__* priv; } ;
struct TYPE_24__ {int w; int h; int format; TYPE_6__* dst; } ;
struct TYPE_23__ {scalar_t__ pict_type; int * linesize; scalar_t__* data; int height; int width; } ;
struct TYPE_22__ {TYPE_1__* comp; } ;
struct TYPE_21__ {int non_b_qp_alloc_size; int hsub; int vsub; scalar_t__ qp; int * non_b_qp_table; int use_bframe_qp; scalar_t__ log2_count; int qscale_type; } ;
struct TYPE_20__ {int depth; } ;
typedef TYPE_2__ SPPContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__**) ;
 int * FUNC_6 (TYPE_4__*,int*,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__,int ,int const,int const) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int **,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_13 (TYPE_5__*,int const,int const) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,scalar_t__,int ,int ,int const,int const,int const*,int,int,int const) ;
 int FUNC_15 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_16(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    SPPContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    AVFrame *VAR_7 = VAR_3;
    int VAR_8 = 0;
    const int8_t *VAR_9 = ((void*)0);
    const AVPixFmtDescriptor *VAR_10 = FUNC_9(VAR_2->format);
    const int VAR_11 = VAR_10->comp[0].depth;





    if (!VAR_5->qp) {
        VAR_9 = FUNC_6(VAR_3, &VAR_8, &VAR_5->qscale_type);

        if (VAR_9 && !VAR_5->use_bframe_qp && VAR_3->pict_type != VAR_0) {
            int VAR_12, VAR_13;



            if (!VAR_8) {
                VAR_12 = FUNC_1(VAR_2->w, 4);
                VAR_13 = 1;
            } else {
                VAR_12 = VAR_8;
                VAR_13 = FUNC_1(VAR_2->h, 4);
            }

            if (VAR_12 * VAR_13 > VAR_5->non_b_qp_alloc_size) {
                int VAR_14 = FUNC_10(&VAR_5->non_b_qp_table, VAR_12, VAR_13);
                if (VAR_14 < 0) {
                    VAR_5->non_b_qp_alloc_size = 0;
                    return VAR_14;
                }
                VAR_5->non_b_qp_alloc_size = VAR_12 * VAR_13;
            }

            FUNC_3(VAR_12 * VAR_13 <= VAR_5->non_b_qp_alloc_size);
            FUNC_15(VAR_5->non_b_qp_table, VAR_9, VAR_12 * VAR_13);
        }
    }

    if (VAR_5->log2_count && !VAR_4->is_disabled) {
        if (!VAR_5->use_bframe_qp && VAR_5->non_b_qp_table)
            VAR_9 = VAR_5->non_b_qp_table;

        if (VAR_9 || VAR_5->qp) {
            const int VAR_15 = FUNC_1(VAR_2->w, VAR_5->hsub);
            const int VAR_16 = FUNC_1(VAR_2->h, VAR_5->vsub);



            if (!FUNC_7(VAR_3) || (VAR_2->w & 7) || (VAR_2->h & 7)) {
                const int VAR_17 = FUNC_2(VAR_2->w, 8);
                const int VAR_18 = FUNC_2(VAR_2->h, 8);

                VAR_7 = FUNC_13(VAR_6, VAR_17, VAR_18);
                if (!VAR_7) {
                    FUNC_5(&VAR_3);
                    return FUNC_0(VAR_1);
                }
                FUNC_4(VAR_7, VAR_3);
                VAR_7->width = VAR_3->width;
                VAR_7->height = VAR_3->height;
            }

            FUNC_14(VAR_5, VAR_7->data[0], VAR_3->data[0], VAR_7->linesize[0], VAR_3->linesize[0], VAR_2->w, VAR_2->h, VAR_9, VAR_8, 1, VAR_11);

            if (VAR_7->data[2]) {
                FUNC_14(VAR_5, VAR_7->data[1], VAR_3->data[1], VAR_7->linesize[1], VAR_3->linesize[1], VAR_15, VAR_16, VAR_9, VAR_8, 0, VAR_11);
                FUNC_14(VAR_5, VAR_7->data[2], VAR_3->data[2], VAR_7->linesize[2], VAR_3->linesize[2], VAR_15, VAR_16, VAR_9, VAR_8, 0, VAR_11);
            }
            FUNC_11();
        }
    }

    if (VAR_3 != VAR_7) {
        if (VAR_3->data[3])
            FUNC_8(VAR_7->data[3], VAR_7->linesize[3],
                                VAR_3 ->data[3], VAR_3 ->linesize[3],
                                VAR_2->w, VAR_2->h);
        FUNC_5(&VAR_3);
    }
    return FUNC_12(VAR_6, VAR_7);
}

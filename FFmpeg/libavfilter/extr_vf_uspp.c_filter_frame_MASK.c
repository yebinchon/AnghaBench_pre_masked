
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int non_b_qp_alloc_size; scalar_t__ qp; int * non_b_qp_table; int use_bframe_qp; scalar_t__ log2_count; int qscale_type; } ;
typedef TYPE_1__ USPPContext ;
struct TYPE_20__ {int is_disabled; TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_19__ {int w; int h; TYPE_4__* dst; } ;
struct TYPE_18__ {scalar_t__ pict_type; int * linesize; int * data; int height; int width; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**) ;
 int * FUNC_6 (TYPE_2__*,int*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ,int ,int,int) ;
 int FUNC_9 (int **,int,int) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_3__*,int const,int const) ;
 int FUNC_12 (TYPE_1__*,int *,int *,int *,int *,int,int,int *,int) ;
 int FUNC_13 (int *,int *,int) ;

__attribute__((used)) static int FUNC_14(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    USPPContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    AVFrame *VAR_7 = VAR_3;

    int VAR_8 = 0;
    uint8_t *VAR_9 = ((void*)0);





    if (!VAR_5->qp) {
        VAR_9 = FUNC_6(VAR_3, &VAR_8, &VAR_5->qscale_type);

        if (VAR_9 && !VAR_5->use_bframe_qp && VAR_3->pict_type != VAR_0) {
            int VAR_10, VAR_11;



            if (!VAR_8) {
                VAR_10 = FUNC_1(VAR_2->w, 4);
                VAR_11 = 1;
            } else {
                VAR_10 = VAR_8;
                VAR_11 = FUNC_1(VAR_2->h, 4);
            }

            if (VAR_10 * VAR_11 > VAR_5->non_b_qp_alloc_size) {
                int VAR_12 = FUNC_9(&VAR_5->non_b_qp_table, VAR_10, VAR_11);
                if (VAR_12 < 0) {
                    VAR_5->non_b_qp_alloc_size = 0;
                    return VAR_12;
                }
                VAR_5->non_b_qp_alloc_size = VAR_10 * VAR_11;
            }

            FUNC_3(VAR_10 * VAR_11 <= VAR_5->non_b_qp_alloc_size);
            FUNC_13(VAR_5->non_b_qp_table, VAR_9, VAR_10 * VAR_11);
        }
    }

    if (VAR_5->log2_count && !VAR_4->is_disabled) {
        if (!VAR_5->use_bframe_qp && VAR_5->non_b_qp_table)
            VAR_9 = VAR_5->non_b_qp_table;

        if (VAR_9 || VAR_5->qp) {



            if (!FUNC_7(VAR_3) || (VAR_2->w & 7) || (VAR_2->h & 7)) {
                const int VAR_13 = FUNC_2(VAR_2->w, 8);
                const int VAR_14 = FUNC_2(VAR_2->h, 8);

                VAR_7 = FUNC_11(VAR_6, VAR_13, VAR_14);
                if (!VAR_7) {
                    FUNC_5(&VAR_3);
                    return FUNC_0(VAR_1);
                }
                FUNC_4(VAR_7, VAR_3);
                VAR_7->width = VAR_3->width;
                VAR_7->height = VAR_3->height;
            }

            FUNC_12(VAR_5, VAR_7->data, VAR_3->data, VAR_7->linesize, VAR_3->linesize,
                   VAR_2->w, VAR_2->h, VAR_9, VAR_8);
        }
    }

    if (VAR_3 != VAR_7) {
        if (VAR_3->data[3])
            FUNC_8(VAR_7->data[3], VAR_7->linesize[3],
                                VAR_3 ->data[3], VAR_3 ->linesize[3],
                                VAR_2->w, VAR_2->h);
        FUNC_5(&VAR_3);
    }
    return FUNC_10(VAR_6, VAR_7);
}

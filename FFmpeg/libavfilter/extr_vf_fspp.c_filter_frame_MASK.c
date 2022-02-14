
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int16_t ;
struct TYPE_20__ {int is_disabled; TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_19__ {int w; int h; TYPE_4__* dst; } ;
struct TYPE_18__ {scalar_t__ pict_type; int * linesize; int * data; int height; int width; } ;
struct TYPE_17__ {int strength; int* threshold_mtx_noq; int non_b_qp_alloc_size; int hsub; int vsub; scalar_t__ qp; int * non_b_qp_table; int use_bframe_qp; scalar_t__ log2_count; int qscale_type; int * threshold_mtx; int (* mul_thrmat ) (int *,int *,scalar_t__) ;scalar_t__ prev_q; } ;
typedef TYPE_1__ FSPPContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**) ;
 int * FUNC_6 (TYPE_2__*,int*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ,int ,int const,int const) ;
 int FUNC_9 (int **,int,int) ;
 int* VAR_2 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_12 (TYPE_3__*,int const,int const) ;
 int FUNC_13 (TYPE_1__*,int ,int ,int ,int ,int const,int const,int *,int,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_16(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    FSPPContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];
    AVFrame *VAR_8 = VAR_4;

    int VAR_9 = 0;
    uint8_t *VAR_10 = ((void*)0);
    int VAR_11, VAR_12;
    int VAR_13[64];

    VAR_12 = (1 << 4) + VAR_6->strength;

    for (VAR_11 = 0; VAR_11 < 64; VAR_11++)
        VAR_13[VAR_11] = (int)(VAR_2[VAR_11] * (VAR_12 / 71.0) + 0.5);

    for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
        VAR_6->threshold_mtx_noq[2 * VAR_11] = (uint64_t)VAR_13[VAR_11 * 8 + 2]
                                      |(((uint64_t)VAR_13[VAR_11 * 8 + 6]) << 16)
                                      |(((uint64_t)VAR_13[VAR_11 * 8 + 0]) << 32)
                                      |(((uint64_t)VAR_13[VAR_11 * 8 + 4]) << 48);

        VAR_6->threshold_mtx_noq[2 * VAR_11 + 1] = (uint64_t)VAR_13[VAR_11 * 8 + 5]
                                          |(((uint64_t)VAR_13[VAR_11 * 8 + 3]) << 16)
                                          |(((uint64_t)VAR_13[VAR_11 * 8 + 1]) << 32)
                                          |(((uint64_t)VAR_13[VAR_11 * 8 + 7]) << 48);
    }

    if (VAR_6->qp)
        VAR_6->prev_q = VAR_6->qp, VAR_6->mul_thrmat((int16_t *)(&VAR_6->threshold_mtx_noq[0]), (int16_t *)(&VAR_6->threshold_mtx[0]), VAR_6->qp);





    if (!VAR_6->qp) {
        VAR_10 = FUNC_6(VAR_4, &VAR_9, &VAR_6->qscale_type);

        if (VAR_10 && !VAR_6->use_bframe_qp && VAR_4->pict_type != VAR_0) {
            int VAR_14, VAR_15;



           if (!VAR_9) {
                VAR_14 = FUNC_1(VAR_3->w, 4);
                VAR_15 = 1;
            } else {
                VAR_14 = VAR_9;
                VAR_15 = FUNC_1(VAR_3->h, 4);
            }
            if (VAR_14 * VAR_15 > VAR_6->non_b_qp_alloc_size) {
                int VAR_16 = FUNC_9(&VAR_6->non_b_qp_table, VAR_14, VAR_15);
                if (VAR_16 < 0) {
                    VAR_6->non_b_qp_alloc_size = 0;
                    return VAR_16;
                }
                VAR_6->non_b_qp_alloc_size = VAR_14 * VAR_15;
            }

            FUNC_3(VAR_14 * VAR_15 <= VAR_6->non_b_qp_alloc_size);
            FUNC_14(VAR_6->non_b_qp_table, VAR_10, VAR_14 * VAR_15);
        }
    }

    if (VAR_6->log2_count && !VAR_5->is_disabled) {
        if (!VAR_6->use_bframe_qp && VAR_6->non_b_qp_table)
            VAR_10 = VAR_6->non_b_qp_table;

        if (VAR_10 || VAR_6->qp) {
            const int VAR_17 = FUNC_1(VAR_3->w, VAR_6->hsub);
            const int VAR_18 = FUNC_1(VAR_3->h, VAR_6->vsub);



            if (!FUNC_7(VAR_4) || (VAR_3->w & 7) || (VAR_3->h & 7)) {
                const int VAR_19 = FUNC_2(VAR_3->w, 8);
                const int VAR_20 = FUNC_2(VAR_3->h, 8);

                VAR_8 = FUNC_12(VAR_7, VAR_19, VAR_20);
                if (!VAR_8) {
                    FUNC_5(&VAR_4);
                    return FUNC_0(VAR_1);
                }
                FUNC_4(VAR_8, VAR_4);
                VAR_8->width = VAR_4->width;
                VAR_8->height = VAR_4->height;
            }

            FUNC_13(VAR_6, VAR_8->data[0], VAR_4->data[0], VAR_8->linesize[0], VAR_4->linesize[0],
                   VAR_3->w, VAR_3->h, VAR_10, VAR_9, 1);
            FUNC_13(VAR_6, VAR_8->data[1], VAR_4->data[1], VAR_8->linesize[1], VAR_4->linesize[1],
                   VAR_17, VAR_18, VAR_10, VAR_9, 0);
            FUNC_13(VAR_6, VAR_8->data[2], VAR_4->data[2], VAR_8->linesize[2], VAR_4->linesize[2],
                   VAR_17, VAR_18, VAR_10, VAR_9, 0);
            FUNC_10();
        }
    }

    if (VAR_4 != VAR_8) {
        if (VAR_4->data[3])
            FUNC_8(VAR_8->data[3], VAR_8->linesize[3],
                                VAR_4 ->data[3], VAR_4 ->linesize[3],
                                VAR_3->w, VAR_3->h);
        FUNC_5(&VAR_4);
    }
    return FUNC_11(VAR_7, VAR_8);
}

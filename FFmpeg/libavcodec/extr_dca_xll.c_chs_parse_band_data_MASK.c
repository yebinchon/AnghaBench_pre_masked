
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int* adapt_pred_order; int highest_pred_order; int** msb_sample_buffer; int lsb_section_size; scalar_t__* nscalablelsbs; scalar_t__* lsb_sample_buffer; } ;
struct TYPE_7__ {int nchannels; int* bitalloc_hybrid_linear; int nabits; int* bitalloc_part_a; int* nsamples_part_a; int* bitalloc_part_b; int ** deci_history; void** rice_code_flag; void* seg_common; TYPE_3__* bands; } ;
struct TYPE_6__ {int nsegsamples; int nsegsamples_log2; int avctx; int gb; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAXllChSet ;
typedef TYPE_3__ DCAXllBand ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int*,int,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int*,int,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int*,int ,int) ;

__attribute__((used)) static int FUNC_12(DCAXllDecoder *VAR_3, DCAXllChSet *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    DCAXllBand *VAR_8 = &VAR_4->bands[VAR_5];
    int VAR_9, VAR_10, VAR_11;


    if (!(VAR_6 && FUNC_4(&VAR_3->gb))) {



        VAR_4->seg_common = FUNC_4(&VAR_3->gb);


        VAR_11 = VAR_4->seg_common ? 1 : VAR_4->nchannels;


        for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {


            VAR_4->rice_code_flag[VAR_9] = FUNC_4(&VAR_3->gb);


            if (!VAR_4->seg_common && VAR_4->rice_code_flag[VAR_9] && FUNC_4(&VAR_3->gb))

                VAR_4->bitalloc_hybrid_linear[VAR_9] = FUNC_3(&VAR_3->gb, VAR_4->nabits) + 1;
            else

                VAR_4->bitalloc_hybrid_linear[VAR_9] = 0;
        }


        for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
            if (VAR_6 == 0) {

                VAR_4->bitalloc_part_a[VAR_9] = FUNC_3(&VAR_3->gb, VAR_4->nabits);


                if (!VAR_4->rice_code_flag[VAR_9] && VAR_4->bitalloc_part_a[VAR_9])
                    VAR_4->bitalloc_part_a[VAR_9]++;

                if (!VAR_4->seg_common)
                    VAR_4->nsamples_part_a[VAR_9] = VAR_8->adapt_pred_order[VAR_9];
                else
                    VAR_4->nsamples_part_a[VAR_9] = VAR_8->highest_pred_order;
            } else {
                VAR_4->bitalloc_part_a[VAR_9] = 0;
                VAR_4->nsamples_part_a[VAR_9] = 0;
            }


            VAR_4->bitalloc_part_b[VAR_9] = FUNC_3(&VAR_3->gb, VAR_4->nabits);


            if (!VAR_4->rice_code_flag[VAR_9] && VAR_4->bitalloc_part_b[VAR_9])
                VAR_4->bitalloc_part_b[VAR_9]++;
        }
    }


    for (VAR_9 = 0; VAR_9 < VAR_4->nchannels; VAR_9++) {
        int32_t *VAR_12, *VAR_13;
        int VAR_14;


        VAR_11 = VAR_4->seg_common ? 0 : VAR_9;


        VAR_12 = VAR_8->msb_sample_buffer[VAR_9] + VAR_6 * VAR_3->nsegsamples;
        VAR_13 = VAR_12 + VAR_4->nsamples_part_a[VAR_11];
        VAR_14 = VAR_3->nsegsamples - VAR_4->nsamples_part_a[VAR_11];

        if (FUNC_5(&VAR_3->gb) < 0)
            return VAR_0;

        if (!VAR_4->rice_code_flag[VAR_11]) {


            FUNC_7(&VAR_3->gb, VAR_12, VAR_4->nsamples_part_a[VAR_11],
                             VAR_4->bitalloc_part_a[VAR_11]);


            FUNC_7(&VAR_3->gb, VAR_13, VAR_14,
                             VAR_4->bitalloc_part_b[VAR_11]);
        } else {


            FUNC_9(&VAR_3->gb, VAR_12, VAR_4->nsamples_part_a[VAR_11],
                           VAR_4->bitalloc_part_a[VAR_11]);

            if (VAR_4->bitalloc_hybrid_linear[VAR_11]) {


                int VAR_15 = FUNC_3(&VAR_3->gb, VAR_3->nsegsamples_log2);


                FUNC_11(VAR_13, 0, sizeof(*VAR_13) * VAR_14);


                for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
                    int VAR_16 = FUNC_3(&VAR_3->gb, VAR_3->nsegsamples_log2);
                    if (VAR_16 >= VAR_14) {
                        FUNC_0(VAR_3->avctx, VAR_1, "Invalid isolated sample location\n");
                        return VAR_0;
                    }
                    VAR_13[VAR_16] = -1;
                }


                for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++) {
                    if (VAR_13[VAR_10])
                        VAR_13[VAR_10] = FUNC_6(&VAR_3->gb, VAR_4->bitalloc_hybrid_linear[VAR_11]);
                    else
                        VAR_13[VAR_10] = FUNC_8(&VAR_3->gb, VAR_4->bitalloc_part_b[VAR_11]);
                }
            } else {


                FUNC_9(&VAR_3->gb, VAR_13, VAR_14, VAR_4->bitalloc_part_b[VAR_11]);
            }
        }
    }


    if (VAR_6 == 0 && VAR_5 == 1) {
        int VAR_17 = FUNC_3(&VAR_3->gb, 5) + 1;
        for (VAR_9 = 0; VAR_9 < VAR_4->nchannels; VAR_9++)
            for (VAR_10 = 1; VAR_10 < VAR_2; VAR_10++)
                VAR_4->deci_history[VAR_9][VAR_10] = FUNC_10(&VAR_3->gb, VAR_17);
    }


    if (VAR_8->lsb_section_size) {

        if (FUNC_1(&VAR_3->gb, VAR_7 - VAR_8->lsb_section_size * 8)) {
            FUNC_0(VAR_3->avctx, VAR_1, "Read past end of XLL band data\n");
            return VAR_0;
        }


        for (VAR_9 = 0; VAR_9 < VAR_4->nchannels; VAR_9++) {
            if (VAR_8->nscalablelsbs[VAR_9]) {
                FUNC_2(&VAR_3->gb,
                          VAR_8->lsb_sample_buffer[VAR_9] + VAR_6 * VAR_3->nsegsamples,
                          VAR_3->nsegsamples, VAR_8->nscalablelsbs[VAR_9]);
            }
        }
    }


    if (FUNC_1(&VAR_3->gb, VAR_7)) {
        FUNC_0(VAR_3->avctx, VAR_1, "Read past end of XLL band data\n");
        return VAR_0;
    }

    return 0;
}

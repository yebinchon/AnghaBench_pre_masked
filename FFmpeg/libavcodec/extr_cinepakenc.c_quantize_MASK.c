
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int* v1_codebook; int* v4_codebook; int v1_size; int v4_size; } ;
typedef TYPE_1__ strip_info ;
struct TYPE_13__ {scalar_t__ best_encoding; void* v4_error; int * v4_vector; void* v1_error; int v1_vector; } ;
typedef TYPE_2__ mb_info ;
typedef scalar_t__ mb_encoding ;
typedef int int64_t ;
struct TYPE_14__ {scalar_t__ pix_fmt; int w; int* codebook_input; int * codebook_closest; TYPE_2__* mb; int randctx; } ;
typedef TYPE_3__ CinepakEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int,int*,int,int,int *,int *) ;
 int FUNC_3 (int*,int,int,int*,int,int,int *,int *) ;
 void* FUNC_4 (TYPE_3__*,int**,int*,int**,int*) ;
 int FUNC_5 (TYPE_3__*,int**,int*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int**,int*,int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,int,int,int**,int*,int**,int*) ;

__attribute__((used)) static int FUNC_8(CinepakEncContext *VAR_3, int VAR_4, uint8_t *VAR_5[4],
                    int VAR_6[4], int VAR_7, strip_info *VAR_8,
                    mb_encoding VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22 = VAR_3->pix_fmt == VAR_0 ? 6 : 4;
    int *VAR_23 = VAR_7 ? VAR_8->v1_codebook : VAR_8->v4_codebook;
    int VAR_24 = VAR_7 ? VAR_8->v1_size : VAR_8->v4_size;
    int64_t VAR_25 = 0;
    uint8_t VAR_26[(VAR_1 * 3) / 2];
    uint8_t *VAR_27[4], *VAR_28[4];
    int VAR_29[4], VAR_30[4];

    for (VAR_21 = VAR_12 = VAR_11 = 0; VAR_11 < VAR_4; VAR_11 += VAR_2) {
        for (VAR_10 = 0; VAR_10 < VAR_3->w; VAR_10 += VAR_2, ++VAR_21) {
            int *VAR_31;

            if (FUNC_0(VAR_9)) {

                if (VAR_3->mb[VAR_21].best_encoding != VAR_9)
                    continue;
            }

            VAR_31 = VAR_3->codebook_input + VAR_12 * VAR_22;
            if (VAR_7) {

                for (VAR_13 = VAR_16 = 0; VAR_16 < VAR_22; VAR_16 += 2)
                    for (VAR_15 = 0; VAR_15 < 4; VAR_15 += 2, VAR_13++) {
                        VAR_19 = VAR_16 < 4 ? 0 : 1 + (VAR_15 >> 1);
                        VAR_20 = VAR_16 < 4 ? 0 : 1;
                        VAR_17 = VAR_20 ? 0 : VAR_15;
                        VAR_18 = VAR_20 ? 0 : VAR_16;
                        VAR_31[VAR_13] = (VAR_5[VAR_19][((VAR_10 + VAR_17) >> VAR_20) + ((VAR_11 + VAR_18) >> VAR_20) * VAR_6[VAR_19]] +
                                   VAR_5[VAR_19][((VAR_10 + VAR_17) >> VAR_20) + 1 + ((VAR_11 + VAR_18) >> VAR_20) * VAR_6[VAR_19]] +
                                   VAR_5[VAR_19][((VAR_10 + VAR_17) >> VAR_20) + (((VAR_11 + VAR_18) >> VAR_20) + 1) * VAR_6[VAR_19]] +
                                   VAR_5[VAR_19][((VAR_10 + VAR_17) >> VAR_20) + 1 + (((VAR_11 + VAR_18) >> VAR_20) + 1) * VAR_6[VAR_19]]) >> 2;
                    }
            } else {

                for (VAR_13 = VAR_16 = 0; VAR_16 < VAR_2; VAR_16 += 2) {
                    for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15 += 2)
                        for (VAR_14 = 0; VAR_14 < VAR_22; VAR_14++, VAR_13++) {
                            VAR_19 = VAR_14 >= 4 ? VAR_14 - 3 : 0;

                            if (VAR_14 >= 4) {
                                VAR_17 = (VAR_10 + VAR_15) >> 1;
                                VAR_18 = (VAR_11 + VAR_16) >> 1;
                            } else {
                                VAR_17 = VAR_10 + VAR_15 + (VAR_14 & 1);
                                VAR_18 = VAR_11 + VAR_16 + (VAR_14 >> 1);
                            }

                            VAR_31[VAR_13] = VAR_5[VAR_19][VAR_17 + VAR_18 * VAR_6[VAR_19]];
                        }
                }
            }
            VAR_12 += VAR_7 ? 1 : 4;
        }
    }

    if (VAR_12 == 0)
        return 0;
    if (VAR_12 < VAR_24)
        VAR_24 = VAR_12;

    FUNC_3(VAR_3->codebook_input, VAR_22, VAR_12, VAR_23, VAR_24, 1, VAR_3->codebook_closest, &VAR_3->randctx);
    FUNC_2(VAR_3->codebook_input, VAR_22, VAR_12, VAR_23, VAR_24, 1, VAR_3->codebook_closest, &VAR_3->randctx);


    VAR_28[0] = VAR_26;
    VAR_30[0] = VAR_2;
    VAR_28[1] = &VAR_26[VAR_1];
    VAR_28[2] = VAR_28[1] + (VAR_1 >> 2);
    VAR_30[1] =
    VAR_30[2] = VAR_2 >> 1;


    for (VAR_12 = VAR_13 = VAR_11 = 0; VAR_11 < VAR_4; VAR_11 += VAR_2)
        for (VAR_10 = 0; VAR_10 < VAR_3->w; VAR_10 += VAR_2, VAR_13++) {
            mb_info *VAR_32 = &VAR_3->mb[VAR_13];

            if (FUNC_0(VAR_9) && VAR_32->best_encoding != VAR_9)
                continue;


            FUNC_7(VAR_3, VAR_10, VAR_11, VAR_5, VAR_6, VAR_27, VAR_29);

            if (VAR_7) {
                VAR_32->v1_vector = VAR_3->codebook_closest[VAR_12];


                FUNC_5(VAR_3, VAR_28, VAR_30, VAR_32->v1_vector, VAR_8);

                VAR_32->v1_error = FUNC_4(VAR_3, VAR_27, VAR_29,
                                                     VAR_28, VAR_30);
                VAR_25 += VAR_32->v1_error;
            } else {
                for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                    VAR_32->v4_vector[VAR_14] = VAR_3->codebook_closest[VAR_12 + VAR_14];


                FUNC_6(VAR_3, VAR_28, VAR_30, VAR_32->v4_vector, VAR_8);

                VAR_32->v4_error = FUNC_4(VAR_3, VAR_27, VAR_29,
                                                     VAR_28, VAR_30);
                VAR_25 += VAR_32->v4_error;
            }
            VAR_12 += VAR_7 ? 1 : 4;
        }

    FUNC_1(VAR_12 >= VAR_24);

    return VAR_24;
}

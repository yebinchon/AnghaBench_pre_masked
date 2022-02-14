
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_groups; float* mantissas; int* bap; int* idx; size_t* exponents; int bw_code; TYPE_1__* groups; } ;
struct TYPE_7__ {int gb; } ;
struct TYPE_6__ {int mnt_ofs; int nb_exponent; int exp_ofs; int* nb_mantissa; } ;
typedef TYPE_1__ DBEGroup ;
typedef TYPE_2__ DBEContext ;
typedef TYPE_3__ DBEChannel ;


 float* VAR_0 ;
 float FUNC_0 (int *,int) ;
 int** VAR_1 ;
 int** VAR_2 ;
 float** VAR_3 ;
 float** VAR_4 ;
 float** VAR_5 ;
 int FUNC_1 (float*,int ,int) ;

__attribute__((used)) static int FUNC_2(DBEContext *VAR_6, DBEChannel *VAR_7)
{
    DBEGroup *VAR_8;
    int VAR_9, VAR_10, VAR_11;

    for (VAR_9 = 0, VAR_8 = VAR_7->groups; VAR_9 < VAR_7->nb_groups; VAR_9++, VAR_8++) {
        float *VAR_12 = VAR_7->mantissas + VAR_8->mnt_ofs;

        for (VAR_10 = 0; VAR_10 < VAR_8->nb_exponent; VAR_10++) {
            int VAR_13 = VAR_7->bap[VAR_8->exp_ofs + VAR_10];
            int VAR_14 = VAR_7->idx[VAR_8->exp_ofs + VAR_10];
            int VAR_15 = VAR_1[VAR_13][VAR_14];
            int VAR_16 = VAR_8->nb_mantissa[VAR_10];
            float VAR_17 = VAR_0[VAR_7->exponents[VAR_8->exp_ofs + VAR_10]];
            float VAR_18 = VAR_3[VAR_15][VAR_14] * VAR_17;

            if (!VAR_15) {
                FUNC_1(VAR_12, 0, VAR_16 * sizeof(*VAR_12));
            } else if (VAR_14) {
                int VAR_19[100];
                int VAR_20 = -(1 << (VAR_15 - 1));

                for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++)
                    VAR_19[VAR_11] = FUNC_0(&VAR_6->gb, VAR_15);

                for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
                    if (VAR_19[VAR_11] != VAR_20) {
                        VAR_12[VAR_11] = VAR_19[VAR_11] * VAR_18;
                    } else {
                        int VAR_21 = VAR_2[VAR_13][VAR_14];
                        int VAR_22 = FUNC_0(&VAR_6->gb, VAR_21);
                        float VAR_23 = VAR_4[VAR_21][VAR_14];
                        float VAR_24 = VAR_5[VAR_21][VAR_14];
                        if (VAR_22 < 0)
                            VAR_12[VAR_11] = ((VAR_22 + 1) * VAR_23 - VAR_24) * VAR_17;
                        else
                            VAR_12[VAR_11] = (VAR_22 * VAR_23 + VAR_24) * VAR_17;
                    }
                }
            } else {
                for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++)
                    VAR_12[VAR_11] = FUNC_0(&VAR_6->gb, VAR_15) * VAR_18;
            }

            VAR_12 += VAR_16;
        }

        for (; VAR_10 < VAR_8->nb_exponent + VAR_7->bw_code; VAR_10++) {
            FUNC_1(VAR_12, 0, VAR_8->nb_mantissa[VAR_10] * sizeof(*VAR_12));
            VAR_12 += VAR_8->nb_mantissa[VAR_10];
        }
    }

    return 0;
}

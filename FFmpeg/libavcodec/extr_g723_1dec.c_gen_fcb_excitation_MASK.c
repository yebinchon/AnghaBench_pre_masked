
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
typedef enum Rate { ____Placeholder_Rate } Rate ;
struct TYPE_3__ {int pulse_pos; int pulse_sign; int grid_index; size_t amp_index; int dirac_train; int ad_cb_gain; int ad_cb_lag; } ;
typedef TYPE_1__ G723_1_Subframe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 (int*,int) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (int*,int ,int) ;
 int* VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_9, G723_1_Subframe *VAR_10,
                               enum Rate VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14, VAR_15, VAR_16;

    FUNC_1(VAR_9, 0, VAR_3 * sizeof(*VAR_9));

    if (VAR_11 == VAR_2) {
        if (VAR_10->pulse_pos >= VAR_6[VAR_13])
            return;


        VAR_16 = VAR_1 - VAR_8[VAR_13];
        VAR_14 = VAR_10->pulse_pos;
        for (VAR_15 = 0; VAR_15 < VAR_3 / VAR_0; VAR_15++) {
            VAR_14 -= VAR_4[VAR_16][VAR_15];
            if (VAR_14 >= 0)
                continue;
            VAR_14 += VAR_4[VAR_16++][VAR_15];
            if (VAR_10->pulse_sign & (1 << (VAR_1 - VAR_16))) {
                VAR_9[VAR_10->grid_index + VAR_0 * VAR_15] =
                                        -VAR_5[VAR_10->amp_index];
            } else {
                VAR_9[VAR_10->grid_index + VAR_0 * VAR_15] =
                                         VAR_5[VAR_10->amp_index];
            }
            if (VAR_16 == VAR_1)
                break;
        }
        if (VAR_10->dirac_train == 1)
            FUNC_0(VAR_9, VAR_12);
    } else {
        int VAR_17 = VAR_5[VAR_10->amp_index];
        int VAR_18 = VAR_10->grid_index;
        int VAR_19 = VAR_10->pulse_sign;
        int VAR_20 = VAR_10->pulse_pos;
        int VAR_21, VAR_22, VAR_23;

        for (VAR_15 = 0; VAR_15 < 8; VAR_15 += 2) {
            VAR_21 = ((VAR_20 & 7) << 3) + VAR_18 + VAR_15;
            VAR_9[VAR_21] = (VAR_19 & 1) ? VAR_17 : -VAR_17;
            VAR_20 >>= 3;
            VAR_19 >>= 1;
        }


        VAR_23 = VAR_7[VAR_10->ad_cb_gain << 1] + VAR_12 +
               VAR_10->ad_cb_lag - 1;
        VAR_22 = VAR_7[(VAR_10->ad_cb_gain << 1) + 1];

        if (VAR_23 < VAR_3 - 2) {
            for (VAR_15 = VAR_23; VAR_15 < VAR_3; VAR_15++)
                VAR_9[VAR_15] += VAR_22 * VAR_9[VAR_15 - VAR_23] >> 15;
        }
    }
}

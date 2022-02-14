
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_3__ {int sign; scalar_t__ need_s; int leftover; scalar_t__ ready_num; int ready; int preamble; } ;
typedef TYPE_1__ DiracGolombLUT ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(DiracGolombLUT *VAR_5, const uint8_t *VAR_6,
                               int VAR_7, uint8_t *VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12 = 0;
    int32_t *VAR_13 = (int32_t *)VAR_8;
    DiracGolombLUT *VAR_14[4], *VAR_15 = &VAR_5[2*VAR_1 + VAR_6[0]];
    FUNC_1(VAR_3);

    for (VAR_11 = 1; VAR_11 <= VAR_7; VAR_11++) {
        VAR_14[0] = &VAR_5[VAR_6[VAR_11]];
        VAR_14[1] = VAR_14[0] + 1*VAR_1;
        VAR_14[2] = VAR_14[0] + 2*VAR_1;
        VAR_14[3] = VAR_14[0] + 3*VAR_1;

        if ((VAR_12 + 1) > VAR_9)
            return VAR_12;


        if (VAR_4 && VAR_15->sign) {
            int32_t VAR_16 = 1;
            FUNC_0(VAR_3, VAR_15->preamble);
            for (VAR_10 = 0; VAR_10 < (VAR_4 >> 1) - 1; VAR_10++) {
                VAR_16 <<= 1;
                VAR_16 |= (VAR_3 >> (VAR_2 - 2*VAR_10 - 2)) & 1;
            }
            VAR_13[VAR_12++] = VAR_15->sign * (VAR_16 - 1);
            VAR_4 = VAR_3 = 0;
        }

        FUNC_2(&VAR_13[VAR_12], VAR_15->ready, VAR_0*sizeof(int32_t));
        VAR_12 += VAR_15->ready_num;

        FUNC_0(VAR_3, VAR_15->leftover);

        VAR_15 = VAR_14[VAR_15->need_s ? 3 : !VAR_4 ? 2 : VAR_4 & 1];
    }

    return VAR_12;
}

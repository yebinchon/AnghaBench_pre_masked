
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int ** lut_v10; int ** lut_u10; } ;
typedef TYPE_1__ HueContext ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(HueContext *VAR_0,
                      uint16_t *VAR_1, uint16_t *VAR_2, const int VAR_3,
                      uint16_t *VAR_4, uint16_t *VAR_5, const int VAR_6,
                      int VAR_7, int VAR_8)
{
    int VAR_9;

    while (VAR_8--) {
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            const int VAR_10 = FUNC_0(VAR_4[VAR_9], 10);
            const int VAR_11 = FUNC_0(VAR_5[VAR_9], 10);

            VAR_1[VAR_9] = VAR_0->lut_u10[VAR_10][VAR_11];
            VAR_2[VAR_9] = VAR_0->lut_v10[VAR_10][VAR_11];
        }

        VAR_4 += VAR_6;
        VAR_5 += VAR_6;
        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_2, const int16_t *VAR_3, int16_t *VAR_4,
                      int16_t *VAR_5, int16_t VAR_6)
{
    int32_t VAR_7;

    for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        VAR_7 = FUNC_0(VAR_4[1], VAR_3[3]);
        VAR_7 += FUNC_0(VAR_4[3], VAR_3[4]);
        VAR_7 = (VAR_7 >> 15);
        VAR_7 += FUNC_0(VAR_4[0], VAR_3[3]);
        VAR_7 += FUNC_0(VAR_4[2], VAR_3[4]);
        VAR_7 = (VAR_7 * 2);

        VAR_7 += FUNC_0(VAR_2[VAR_8], VAR_3[0]);
        VAR_7 += FUNC_0(VAR_5[0], VAR_3[1]);
        VAR_7 += FUNC_0(VAR_5[1], VAR_3[2]);


        VAR_5[1] = VAR_5[0];
        VAR_5[0] = VAR_2[VAR_8];


        VAR_2[VAR_8] = FUNC_1(VAR_7 + 1024, 26) >> 11;


        VAR_4[2] = VAR_4[0];
        VAR_4[3] = VAR_4[1];


        if (VAR_7 > 268435455) {
            VAR_7 = VAR_0;
        } else if (VAR_7 < -268435456) {
            VAR_7 = VAR_1;
        } else {
            VAR_7 = VAR_7 * 8;
        }

        VAR_4[0] = VAR_7 >> 16;
        VAR_4[1] = (VAR_7 - (VAR_4[0] * (1 << 16))) >> 1;
    }
}

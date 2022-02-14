
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_2, int16_t *VAR_3, int VAR_4,
                            int VAR_5, int *VAR_6)
{
    int VAR_7;
    if (VAR_4) {
        int16_t *VAR_8 = VAR_2 + VAR_1;

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            VAR_3[VAR_7] = VAR_8[VAR_7 - VAR_4] * 3 >> 2;
        FUNC_0((uint8_t*)(VAR_3 + VAR_4), VAR_4 * sizeof(*VAR_3),
                          (VAR_0 - VAR_4) * sizeof(*VAR_3));
    } else {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            *VAR_6 = (int16_t)(*VAR_6 * 521 + 259);
            VAR_3[VAR_7] = VAR_5 * *VAR_6 >> 15;
        }
        FUNC_1(VAR_2, 0, (VAR_0 + VAR_1) * sizeof(*VAR_2));
    }
}

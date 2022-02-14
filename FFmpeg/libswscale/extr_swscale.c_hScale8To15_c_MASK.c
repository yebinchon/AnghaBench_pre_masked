
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int SwsContext ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(SwsContext *VAR_0, int16_t *VAR_1, int VAR_2,
                          const uint8_t *VAR_3, const int16_t *VAR_4,
                          const int32_t *VAR_5, int VAR_6)
{
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        int VAR_8;
        int VAR_9 = VAR_5[VAR_7];
        int VAR_10 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            VAR_10 += ((int)VAR_3[VAR_9 + VAR_8]) * VAR_4[VAR_6 * VAR_7 + VAR_8];
        }
        VAR_1[VAR_7] = FUNC_0(VAR_10 >> 7, (1 << 15) - 1);
    }
}

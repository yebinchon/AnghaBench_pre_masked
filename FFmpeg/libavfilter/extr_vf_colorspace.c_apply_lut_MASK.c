
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef scalar_t__ int16_t ;


 size_t FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0[3], ptrdiff_t VAR_1,
                      int VAR_2, int VAR_3, const int16_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
        int16_t *VAR_8 = VAR_0[VAR_7];

        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
                VAR_8[VAR_6] = VAR_4[FUNC_0(2048 + VAR_8[VAR_6], 15)];

            VAR_8 += VAR_1;
        }
    }
}

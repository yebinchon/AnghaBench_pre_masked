
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_2, uint8_t *VAR_3, ptrdiff_t VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
            if (2 * VAR_5 - VAR_6 < 0)
                VAR_3[VAR_5] = VAR_2[VAR_0 + 9 + 2 * VAR_5 - VAR_6];
            else
                VAR_3[VAR_5] = VAR_2[VAR_1 + VAR_5 - ((VAR_6 + 1) >> 1)];
        }
        VAR_3 += VAR_4;
    }
}

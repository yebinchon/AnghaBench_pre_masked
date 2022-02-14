
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            VAR_2[VAR_4] = VAR_1[VAR_0 + ((VAR_5 + 1) >> 1) + VAR_4];
        VAR_2 += VAR_3;
    }
}

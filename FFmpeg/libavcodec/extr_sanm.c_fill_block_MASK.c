
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint16_t *VAR_0, uint16_t VAR_1, int VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4, VAR_5;

    VAR_3 -= VAR_2;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_0 += VAR_3)
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
            *VAR_0++ = VAR_1;
}

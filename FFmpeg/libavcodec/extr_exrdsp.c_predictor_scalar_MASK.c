
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    ptrdiff_t VAR_2;

    for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
        VAR_0[VAR_2] += VAR_0[VAR_2-1] - 128;
}

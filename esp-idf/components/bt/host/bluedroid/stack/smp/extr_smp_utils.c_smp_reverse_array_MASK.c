
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;


 int FUNC_0 (char*) ;

void FUNC_1(UINT8 *VAR_0, UINT8 VAR_1)
{
    UINT8 VAR_2 = 0, VAR_3;

    FUNC_0("smp_reverse_array\n");

    for (VAR_2 = 0; VAR_2 < VAR_1 / 2; VAR_2 ++) {
        VAR_3 = VAR_0[VAR_2];
        VAR_0[VAR_2] = VAR_0[VAR_1 - 1 - VAR_2];
        VAR_0[VAR_1 - 1 - VAR_2] = VAR_3;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;



__attribute__((used)) static void FUNC_0(int8_t *VAR_0, const int8_t *VAR_1, int VAR_2)
{
    int VAR_3;
    if (VAR_2)
        VAR_3 = 9;
    else {
        VAR_3 = 4;
        VAR_0[10] = 0;
    }
    for (; VAR_3 >= 0; VAR_3--) {
        VAR_0[2*VAR_3+1] = VAR_0[2*VAR_3] = VAR_1[VAR_3];
    }
}

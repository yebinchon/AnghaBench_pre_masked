
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(GetByteContext *VAR_0, uint32_t *VAR_1, int *VAR_2)
{
    int VAR_3;

    if (!*VAR_2) {
        *VAR_1 = FUNC_0(VAR_0);
        *VAR_2 = 32;
    }

    VAR_3 = *VAR_1 >> 31;
    *VAR_1 <<= 1;
    (*VAR_2)--;

    return VAR_3;
}

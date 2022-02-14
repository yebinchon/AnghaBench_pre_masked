
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t *FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1,
                             int VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
    *VAR_3 += VAR_5;

    if (*VAR_3 < VAR_4) {
        return VAR_1 + VAR_5 * VAR_2;
    } else {
        *VAR_3 = (*VAR_3 + 1) & (VAR_5 - 1);
        if (*VAR_3 && *VAR_3 < VAR_4) {
            return VAR_0 + *VAR_3 * VAR_2;
        } else {
            return ((void*)0);
        }
    }
}

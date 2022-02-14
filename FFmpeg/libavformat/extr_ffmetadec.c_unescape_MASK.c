
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 char* FUNC_0 (int) ;

__attribute__((used)) static uint8_t *FUNC_1(const uint8_t *VAR_0, int VAR_1)
{
    uint8_t *VAR_2 = FUNC_0(VAR_1 + 1);
    uint8_t *VAR_3 = VAR_2;
    const uint8_t *VAR_4 = VAR_0;

    if (!VAR_2)
        return ((void*)0);

    while (VAR_4 < VAR_0 + VAR_1) {
        if (*VAR_4 == '\\')
            VAR_4++;
        *VAR_3++ = *VAR_4++;
    }
    *VAR_3 = 0;
    return VAR_2;
}

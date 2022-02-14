
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(const char *VAR_0, uint32_t VAR_1)
{
    uint32_t VAR_2 = 0;
    char *VAR_3 = (char *)VAR_0;
    while (*VAR_3) {
        VAR_2 += *VAR_3;
        VAR_3++;
    }
    return VAR_2 % VAR_1;
}

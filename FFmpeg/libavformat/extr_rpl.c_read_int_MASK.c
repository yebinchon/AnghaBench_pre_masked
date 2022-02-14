
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long int32_t ;



__attribute__((used)) static int32_t FUNC_0(const char* VAR_0, const char** VAR_1, int* VAR_2)
{
    unsigned long VAR_3 = 0;
    for (; *VAR_0>='0' && *VAR_0<='9'; VAR_0++) {
        if (VAR_3 > (0x7FFFFFFF - 9) / 10)
            *VAR_2 = -1;
        VAR_3 = 10 * VAR_3 + *VAR_0 - '0';
    }
    *VAR_1 = VAR_0;
    return VAR_3;
}

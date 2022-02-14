
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1)
{
    char VAR_2;

    while (*VAR_0 && *VAR_1) {
        VAR_2 = *VAR_1++;
        if (VAR_2 >= 'a' && VAR_2 <= 'z') {
            VAR_2 -= 0x20;
        }
        if (*VAR_0++ != VAR_2) {
            return -1;
        }
    }

    if (*VAR_1 == 0 && *VAR_0 != 0) {
        return 1;
    }

    else {
        return 0;
    }
}

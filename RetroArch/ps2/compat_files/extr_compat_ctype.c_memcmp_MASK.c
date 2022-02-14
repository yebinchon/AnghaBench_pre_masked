
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const void *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
    const char *VAR_3 = VAR_0;
    const char *VAR_4 = VAR_1;

    while (VAR_2--) {
        if (*VAR_3++ != *VAR_4++)
            return 1;
    }

    return 0;
}

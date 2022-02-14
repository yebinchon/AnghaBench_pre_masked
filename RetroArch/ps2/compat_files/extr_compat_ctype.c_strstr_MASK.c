
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,scalar_t__) ;

char *FUNC_2(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2;

    if (VAR_0 == 0)
        return 0;

    if (FUNC_0(VAR_1) == 0)
        return (char *)VAR_0;

    VAR_2 = (char *)VAR_0;

    while (*VAR_2 != 0) {
        if (FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_1)) == 0)
            return VAR_2;

        VAR_2++;
    }

    return 0;
}

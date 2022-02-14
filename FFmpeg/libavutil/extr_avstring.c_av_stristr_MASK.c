
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int *) ;

char *FUNC_1(const char *VAR_0, const char *VAR_1)
{
    if (!*VAR_1)
        return (char*)(intptr_t)VAR_0;

    do
        if (FUNC_0(VAR_0, VAR_1, ((void*)0)))
            return (char*)(intptr_t)VAR_0;
    while (*VAR_0++);

    return ((void*)0);
}

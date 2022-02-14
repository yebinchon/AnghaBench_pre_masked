
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char * FUNC_0(const char * VAR_0, int VAR_1)
{
    for(; *VAR_0 != (char) VAR_1; ++VAR_0)
        if (*VAR_0 == '\0')
            return ((void*)0);
    return (char *) VAR_0;
}

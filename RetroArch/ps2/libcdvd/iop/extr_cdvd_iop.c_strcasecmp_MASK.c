
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, const char *VAR_1)
{
    while (*VAR_0 != '\0' && FUNC_0(*VAR_0) == FUNC_0(*VAR_1)) {
        VAR_0++;
        VAR_1++;
    }

    return FUNC_0(*(unsigned char *)VAR_0) - FUNC_0(*(unsigned char *)VAR_1);
}

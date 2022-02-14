
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (*VAR_0 == '\0')
            return FUNC_0(*(unsigned char *)VAR_0) - FUNC_0(*(unsigned char *)VAR_1);

        if (FUNC_0(*VAR_0) != FUNC_0(*VAR_1))
            return FUNC_0(*(unsigned char *)VAR_0) - FUNC_0(*(unsigned char *)VAR_1);

        VAR_0++;
        VAR_1++;
    }

    return 0;
}

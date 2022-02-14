
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const**,char const*,char const*) ;

int FUNC_1(void *VAR_0, const char *VAR_1,
                          const char *VAR_2, const char *VAR_3)
{
    int VAR_4, VAR_5 = 0;

    if (!VAR_1)
        return 0;

    while (*VAR_1) {
        if ((VAR_4 = FUNC_0(VAR_0, &VAR_1, VAR_2, VAR_3)) < 0)
            return VAR_4;
        VAR_5++;

        if (*VAR_1)
            VAR_1++;
    }

    return VAR_5;
}

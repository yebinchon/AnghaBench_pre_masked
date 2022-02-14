
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

char *FUNC_3(const char **VAR_1, const char *VAR_2)
{
    char *VAR_3 = FUNC_0(FUNC_1(*VAR_1) + 1);
    char *VAR_4 = VAR_3, *VAR_5 = VAR_3;
    const char *VAR_6 = *VAR_1;
    if (!VAR_3)
        return ((void*)0);
    VAR_6 += FUNC_2(VAR_6, VAR_0);

    while (*VAR_6 && !FUNC_2(VAR_6, VAR_2)) {
        char VAR_7 = *VAR_6++;
        if (VAR_7 == '\\' && *VAR_6) {
            *VAR_3++ = *VAR_6++;
            VAR_5 = VAR_3;
        } else if (VAR_7 == '\'') {
            while (*VAR_6 && *VAR_6 != '\'')
                *VAR_3++ = *VAR_6++;
            if (*VAR_6) {
                VAR_6++;
                VAR_5 = VAR_3;
            }
        } else {
            *VAR_3++ = VAR_7;
        }
    }

    do
        *VAR_3-- = 0;
    while (VAR_3 >= VAR_5 && FUNC_2(VAR_3, VAR_0));

    *VAR_1 = VAR_6;

    return VAR_4;
}

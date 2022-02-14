
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_1, const char *VAR_2)
{
    size_t VAR_3, VAR_4;
    char *VAR_5;

    if (!VAR_1)
        return FUNC_1(VAR_2);
    if (!VAR_2)
        return FUNC_1(VAR_1);

    VAR_3 = FUNC_3(VAR_1);
    VAR_4 = FUNC_3(VAR_2);
    if (VAR_3 > VAR_0 - VAR_4 || VAR_3 + VAR_4 > VAR_0 - 2)
        return ((void*)0);
    VAR_5 = FUNC_0(VAR_3 + VAR_4 + 2);
    if (VAR_5) {
        if (VAR_3) {
            FUNC_2(VAR_5, VAR_1, VAR_3 + 1);
            if (VAR_4) {
                if (VAR_5[VAR_3 - 1] != '/' && VAR_2[0] != '/')
                    VAR_5[VAR_3++] = '/';
                else if (VAR_5[VAR_3 - 1] == '/' && VAR_2[0] == '/')
                    VAR_3--;
            }
        }
        FUNC_2(&VAR_5[VAR_3], VAR_2, VAR_4 + 1);
        VAR_5[VAR_3 + VAR_4] = 0;
    }
    return VAR_5;
}

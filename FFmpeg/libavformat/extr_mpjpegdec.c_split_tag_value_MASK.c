
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, char **VAR_2, char *VAR_3)
{
    char *VAR_4 = VAR_3;
    int VAR_5 = 0;

    *VAR_1 = ((void*)0);
    *VAR_2 = ((void*)0);


    while (*VAR_4 != '\0' && *VAR_4 != ':') {
        if (!FUNC_0(*VAR_4)) {
            VAR_5 = 1;
        }
        VAR_4++;
    }
    if (*VAR_4 != ':')
        return VAR_5 ? VAR_0 : 0;

    *VAR_4 = '\0';
    *VAR_1 = VAR_3;
    FUNC_1(*VAR_1);

    VAR_4++;

    while (FUNC_0(*VAR_4))
        VAR_4++;

    *VAR_2 = VAR_4;
    FUNC_1(*VAR_2);

    return 0;
}

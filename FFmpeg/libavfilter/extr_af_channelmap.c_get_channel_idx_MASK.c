
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char **VAR_1, int *VAR_2, char VAR_3, int VAR_4)
{
    char *VAR_5;
    int VAR_6;
    int VAR_7 = 0;
    if (!*VAR_1)
        return FUNC_0(VAR_0);
    VAR_5 = FUNC_1(*VAR_1, VAR_3);
    if (!VAR_5 && VAR_3 == '-')
        return FUNC_0(VAR_0);
    VAR_6 = FUNC_3(*VAR_1);
    FUNC_2(*VAR_1, "%d%n", VAR_2, &VAR_7);
    if (VAR_7 != VAR_6)
        return FUNC_0(VAR_0);
    if (*VAR_2 < 0 || *VAR_2 > VAR_4)
        return FUNC_0(VAR_0);
    *VAR_1 = VAR_5;
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char * FUNC_4(char ** VAR_0)
{
    char * VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0) || **VAR_0 == 0)
    {
        return ((void*)0);
    }
    char * VAR_2 = *VAR_0;
    while (FUNC_1(*VAR_2)) VAR_2++;
    char * VAR_3 = FUNC_2(VAR_2, ',');
    if (VAR_3 != ((void*)0))
    {
        VAR_1 = FUNC_0(VAR_2, VAR_3 - VAR_2);
        *VAR_0 = VAR_3 + 1;
    }
    else
    {
        VAR_1 = FUNC_3(VAR_2);
        *VAR_0 = ((void*)0);
    }
    return VAR_1;
}

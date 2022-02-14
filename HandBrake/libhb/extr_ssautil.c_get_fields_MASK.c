
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 char* FUNC_1 (char**) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char ** FUNC_4(char * VAR_0, int VAR_1)
{
    int VAR_2 = 0, VAR_3;
    char * VAR_4;

    if (VAR_0 == ((void*)0) || *VAR_0 == 0)
    {
        return ((void*)0);
    }


    VAR_2 = 1;
    VAR_4 = VAR_0;
    while ((VAR_4 = FUNC_2(VAR_4, ',')) != ((void*)0))
    {
        VAR_2++;
        VAR_4++;
    }
    if (VAR_1 > 0 && VAR_2 > VAR_1)
    {
        VAR_2 = VAR_1;
    }
    char ** VAR_5 = FUNC_0(VAR_2 + 1, sizeof(char*));
    VAR_4 = VAR_0;
    for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++)
    {
        VAR_5[VAR_3] = FUNC_1(&VAR_4);
    }
    VAR_5[VAR_3] = FUNC_3(VAR_4);

    return VAR_5;
}

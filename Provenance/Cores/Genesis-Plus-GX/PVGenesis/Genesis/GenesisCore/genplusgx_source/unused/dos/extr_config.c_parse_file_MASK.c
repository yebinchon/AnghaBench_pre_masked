
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(char *VAR_0, int *VAR_1, char **VAR_2)
{
    char VAR_3[0x100];
    FILE *VAR_4 = ((void*)0);

    *VAR_1 = 0;
    VAR_4 = FUNC_2(VAR_0, "r");
    if(!VAR_4) return (0);

    FUNC_3(VAR_4, "%s", &VAR_3[0]);
    while(!(FUNC_1(VAR_4)))
    {
        int VAR_5 = FUNC_6(VAR_3) + 1;
        VAR_2[*VAR_1] = FUNC_4(VAR_5);
        if(!VAR_2[*VAR_1]) return (0);
        FUNC_5(VAR_2[*VAR_1], VAR_3);
        *VAR_1 += 1;
        FUNC_3(VAR_4, "%s", &VAR_3[0]);
    }

    if(VAR_4) FUNC_0(VAR_4);
    return (1);
}

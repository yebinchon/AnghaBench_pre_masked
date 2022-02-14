
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (char*,int*,char**) ;
 int FUNC_3 () ;

void FUNC_4(char *VAR_1)
{
    extern int VAR_2;
    extern char **VAR_3;


    int VAR_4, VAR_5;
    char *VAR_6[VAR_0];

    FUNC_3();
    for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 1) VAR_6[VAR_4] = ((void*)0);


    if(VAR_1) FUNC_2(VAR_1, &VAR_5, VAR_6);


    FUNC_1(VAR_5, VAR_6);


    for(VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += 1) if(VAR_6[VAR_5]) FUNC_0 (VAR_6[VAR_5]);


    FUNC_1(VAR_2, VAR_3);
}

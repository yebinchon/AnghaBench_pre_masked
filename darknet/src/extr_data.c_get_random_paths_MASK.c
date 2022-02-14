
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

char **FUNC_4(char **VAR_1, int VAR_2, int VAR_3)
{
    char **VAR_4 = FUNC_0(VAR_2, sizeof(char*));
    int VAR_5;
    FUNC_1(&VAR_0);
    for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
        int VAR_6 = FUNC_3()%VAR_3;
        VAR_4[VAR_5] = VAR_1[VAR_6];

    }
    FUNC_2(&VAR_0);
    return VAR_4;
}

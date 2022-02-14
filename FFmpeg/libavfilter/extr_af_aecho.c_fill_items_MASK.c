
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,float*) ;
 char* FUNC_1 (char*,char*,char**) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, int *VAR_1, float *VAR_2)
{
    char *VAR_3, *VAR_4 = ((void*)0);
    int VAR_5, VAR_6 = 0;

    VAR_3 = VAR_0;
    for (VAR_5 = 0; VAR_5 < *VAR_1; VAR_5++) {
        char *VAR_7 = FUNC_1(VAR_3, "|", &VAR_4);
        VAR_3 = ((void*)0);
        if (VAR_7)
            VAR_6 += FUNC_0(VAR_7, "%f", &VAR_2[VAR_6]) == 1;
    }

    *VAR_1 = VAR_6;
}

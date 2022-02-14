
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int* FUNC_1 (int,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;

int *FUNC_4(char *VAR_0, int *VAR_1)
{
    int *VAR_2 = 0;
    if(VAR_0){
        int VAR_3 = FUNC_3(VAR_0);
        int VAR_4 = 1;
        int VAR_5;
        for(VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5){
            if (VAR_0[VAR_5] == ',') ++VAR_4;
        }
        VAR_2 = FUNC_1(VAR_4, sizeof(int));
        for(VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5){
            int VAR_6 = FUNC_0(VAR_0);
            VAR_2[VAR_5] = VAR_6;
            VAR_0 = FUNC_2(VAR_0, ',')+1;
        }
        *VAR_1 = VAR_4;
    }
    return VAR_2;
}

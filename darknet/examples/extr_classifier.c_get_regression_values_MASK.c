
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char*) ;
 float* FUNC_1 (int,int) ;
 char* FUNC_2 (char*,char) ;

float *FUNC_3(char **VAR_0, int VAR_1)
{
    float *VAR_2 = FUNC_1(VAR_1, sizeof(float));
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3){
        char *VAR_4 = FUNC_2(VAR_0[VAR_3], ' ');
        *VAR_4 = 0;
        VAR_2[VAR_3] = FUNC_0(VAR_4+1);
    }
    return VAR_2;
}

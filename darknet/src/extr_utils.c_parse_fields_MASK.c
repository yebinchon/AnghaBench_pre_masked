
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* FUNC_0 (int,int) ;
 float FUNC_1 (char*) ;
 float FUNC_2 (char*,char**) ;

float *FUNC_3(char *VAR_0, int VAR_1)
{
    float *VAR_2 = FUNC_0(VAR_1, sizeof(float));
    char *VAR_3, *VAR_4, *VAR_5;
    int VAR_6 = 0;
    int VAR_7 = 0;
    for(VAR_3 = VAR_0, VAR_4 = VAR_0; !VAR_7; ++VAR_3){
        VAR_7 = (*VAR_3 == '\0');
        if(*VAR_3 == ',' || VAR_7){
            *VAR_3 = '\0';
            VAR_2[VAR_6] = FUNC_2(VAR_4, &VAR_5);
            if(VAR_4 == VAR_3) VAR_2[VAR_6] = FUNC_1("");
            if(VAR_5 != VAR_3 && (VAR_5 != VAR_3-1 || *VAR_5 != '\r')) VAR_2[VAR_6] = FUNC_1("");
            VAR_4 = VAR_3+1;
            ++VAR_6;
        }
    }
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

void FUNC_3(char *VAR_0, char **VAR_1, int VAR_2, float *VAR_3)
{
    int VAR_4;
    FUNC_0(VAR_3, 0, VAR_2*sizeof(float));
    int VAR_5 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
        if(FUNC_2(VAR_0, VAR_1[VAR_4])){
            VAR_3[VAR_4] = 1;
            ++VAR_5;

        }
    }
    if(VAR_5 != 1 && (VAR_2 != 1 || VAR_5 != 0)) FUNC_1("Too many or too few labels: %d, %s\n", VAR_5, VAR_0);
}

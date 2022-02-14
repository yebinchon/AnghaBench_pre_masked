
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int ,int) ;

void FUNC_1(char *VAR_0, float *VAR_1)
{
    int VAR_2, VAR_3;
    FUNC_0(VAR_1, 0, 2*19*19*sizeof(float));
    int VAR_4 = 0;
    for(VAR_2 = 0; VAR_2 < 91; ++VAR_2){
        char VAR_5 = VAR_0[VAR_2];
        for(VAR_3 = 0; VAR_3 < 4; ++VAR_3){
            int VAR_6 = (VAR_5 >> (2*VAR_3)) & 1;
            int VAR_7 = (VAR_5 >> (2*VAR_3 + 1)) & 1;
            if (VAR_6) VAR_1[VAR_4] = 1;
            else if (VAR_7) VAR_1[VAR_4 + 19*19] = 1;
            ++VAR_4;
            if(VAR_4 >= 19*19) break;
        }
    }
}

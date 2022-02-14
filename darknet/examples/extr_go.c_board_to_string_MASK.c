
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;

void FUNC_1(char *VAR_0, float *VAR_1)
{
    int VAR_2, VAR_3;
    FUNC_0(VAR_0, 0, (19*19/4+1)*sizeof(char));
    int VAR_4 = 0;
    for(VAR_2 = 0; VAR_2 < 91; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < 4; ++VAR_3){
            int VAR_5 = (VAR_1[VAR_4] == 1);
            int VAR_6 = (VAR_1[VAR_4 + 19*19] == 1);
            if (VAR_5) VAR_0[VAR_2] = VAR_0[VAR_2] | (1<<(2*VAR_3));
            if (VAR_6) VAR_0[VAR_2] = VAR_0[VAR_2] | (1<<(2*VAR_3 + 1));
            ++VAR_4;
            if(VAR_4 >= 19*19) break;
        }
    }
}

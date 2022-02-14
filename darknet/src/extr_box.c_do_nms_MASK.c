
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int box ;


 float FUNC_0 (int ,int ) ;

void FUNC_1(box *VAR_0, float **VAR_1, int VAR_2, int VAR_3, float VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
        int VAR_8 = 0;
        for(VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) VAR_8 = VAR_8 || (VAR_1[VAR_5][VAR_7] > 0);
        if(!VAR_8) {
            continue;
        }
        for(VAR_6 = VAR_5+1; VAR_6 < VAR_2; ++VAR_6){
            if (FUNC_0(VAR_0[VAR_5], VAR_0[VAR_6]) > VAR_4){
                for(VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7){
                    if (VAR_1[VAR_5][VAR_7] < VAR_1[VAR_6][VAR_7]) VAR_1[VAR_5][VAR_7] = 0;
                    else VAR_1[VAR_6][VAR_7] = 0;
                }
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int box_label ;


 int FUNC_0 () ;

void FUNC_1(box_label *VAR_0, int VAR_1)
{
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        box_label VAR_3 = VAR_0[VAR_2];
        int VAR_4 = FUNC_0()%VAR_1;
        VAR_0[VAR_2] = VAR_0[VAR_4];
        VAR_0[VAR_4] = VAR_3;
    }
}

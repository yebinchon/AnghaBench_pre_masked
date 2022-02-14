
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float** MtxP ;
typedef float** Mtx ;


 int FUNC_0 (float**,float**) ;

void FUNC_1(Mtx VAR_0,Mtx VAR_1)
{
    Mtx VAR_2;
    MtxP VAR_3;

    if(VAR_0==VAR_1)
        VAR_3 = VAR_2;
    else
        VAR_3 = VAR_1;

    VAR_3[0][0] = VAR_0[0][0]; VAR_3[0][1] = VAR_0[1][0]; VAR_3[0][2] = VAR_0[2][0]; VAR_3[0][3] = 0.0f;
    VAR_3[1][0] = VAR_0[0][1]; VAR_3[1][1] = VAR_0[1][1]; VAR_3[1][2] = VAR_0[2][1]; VAR_3[1][3] = 0.0f;
    VAR_3[2][0] = VAR_0[0][2]; VAR_3[2][1] = VAR_0[1][2]; VAR_3[2][2] = VAR_0[2][2]; VAR_3[2][3] = 0.0f;


    if(VAR_3==VAR_2)
        FUNC_0(VAR_2,VAR_1);
}

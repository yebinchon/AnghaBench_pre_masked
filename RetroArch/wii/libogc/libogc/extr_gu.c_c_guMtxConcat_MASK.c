
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int** MtxP ;
typedef int** Mtx ;


 int FUNC_0 (int**,int**) ;

void FUNC_1(Mtx VAR_0,Mtx VAR_1,Mtx VAR_2)
{
 Mtx VAR_3;
 MtxP VAR_4;

 if(VAR_2==VAR_1 || VAR_2==VAR_0)
  VAR_4 = VAR_3;
 else
  VAR_4 = VAR_2;

    VAR_4[0][0] = VAR_0[0][0]*VAR_1[0][0] + VAR_0[0][1]*VAR_1[1][0] + VAR_0[0][2]*VAR_1[2][0];
    VAR_4[0][1] = VAR_0[0][0]*VAR_1[0][1] + VAR_0[0][1]*VAR_1[1][1] + VAR_0[0][2]*VAR_1[2][1];
    VAR_4[0][2] = VAR_0[0][0]*VAR_1[0][2] + VAR_0[0][1]*VAR_1[1][2] + VAR_0[0][2]*VAR_1[2][2];
    VAR_4[0][3] = VAR_0[0][0]*VAR_1[0][3] + VAR_0[0][1]*VAR_1[1][3] + VAR_0[0][2]*VAR_1[2][3] + VAR_0[0][3];

    VAR_4[1][0] = VAR_0[1][0]*VAR_1[0][0] + VAR_0[1][1]*VAR_1[1][0] + VAR_0[1][2]*VAR_1[2][0];
    VAR_4[1][1] = VAR_0[1][0]*VAR_1[0][1] + VAR_0[1][1]*VAR_1[1][1] + VAR_0[1][2]*VAR_1[2][1];
    VAR_4[1][2] = VAR_0[1][0]*VAR_1[0][2] + VAR_0[1][1]*VAR_1[1][2] + VAR_0[1][2]*VAR_1[2][2];
    VAR_4[1][3] = VAR_0[1][0]*VAR_1[0][3] + VAR_0[1][1]*VAR_1[1][3] + VAR_0[1][2]*VAR_1[2][3] + VAR_0[1][3];

    VAR_4[2][0] = VAR_0[2][0]*VAR_1[0][0] + VAR_0[2][1]*VAR_1[1][0] + VAR_0[2][2]*VAR_1[2][0];
    VAR_4[2][1] = VAR_0[2][0]*VAR_1[0][1] + VAR_0[2][1]*VAR_1[1][1] + VAR_0[2][2]*VAR_1[2][1];
    VAR_4[2][2] = VAR_0[2][0]*VAR_1[0][2] + VAR_0[2][1]*VAR_1[1][2] + VAR_0[2][2]*VAR_1[2][2];
    VAR_4[2][3] = VAR_0[2][0]*VAR_1[0][3] + VAR_0[2][1]*VAR_1[1][3] + VAR_0[2][2]*VAR_1[2][3] + VAR_0[2][3];

 if(VAR_4==VAR_3)
  FUNC_0(VAR_3,VAR_2);
}

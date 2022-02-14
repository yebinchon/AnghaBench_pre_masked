
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* FUNC_0 (float*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (float*,int*,int,int,int) ;

void FUNC_3(float *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int *VAR_4 = FUNC_0(VAR_0);
    if(VAR_1 > 0) VAR_0[VAR_2*19 + VAR_3] = 1;
    else VAR_0[19*19 + VAR_2*19 + VAR_3] = 1;
    FUNC_2(VAR_0, VAR_4, -VAR_1, VAR_2+1, VAR_3);
    FUNC_2(VAR_0, VAR_4, -VAR_1, VAR_2-1, VAR_3);
    FUNC_2(VAR_0, VAR_4, -VAR_1, VAR_2, VAR_3+1);
    FUNC_2(VAR_0, VAR_4, -VAR_1, VAR_2, VAR_3-1);
    FUNC_1(VAR_4);
}

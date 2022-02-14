
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float*,float*) ;
 int FUNC_1 (int,float*,int,float*,int) ;
 int FUNC_2 (float*,int,int,int) ;
 scalar_t__ FUNC_3 (float*,int) ;
 scalar_t__ FUNC_4 (float*,int,int,int) ;

int FUNC_5(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    if (FUNC_3(VAR_0, VAR_3*19+VAR_4)) return 0;
    float VAR_5[19*19*3];
    FUNC_1(19*19*3, VAR_0, 1, VAR_5, 1);
    FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
    if(FUNC_0(VAR_5, VAR_1)) return 0;
    if(FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4)) return 0;
    return 1;
}

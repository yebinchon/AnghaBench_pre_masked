
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float*,float*) ;
 int FUNC_1 (int,float*,int,float*,int) ;
 int FUNC_2 (float*) ;

int FUNC_3(float *VAR_0, float *VAR_1)
{
    if(!VAR_1) return 0;
    float VAR_2[19*19*3];
    FUNC_1(19*19*3, VAR_0, 1, VAR_2, 1);
    if(VAR_2[19*19*2] != VAR_1[19*19*2]) FUNC_2(VAR_2);
    if(FUNC_0(VAR_2, VAR_1)) return 1;
    return 0;
}

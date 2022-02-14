
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 scalar_t__ FUNC_0 () ;

float FUNC_1(float VAR_1, float VAR_2)
{
    if(VAR_2 < VAR_1){
        float VAR_3 = VAR_1;
        VAR_1 = VAR_2;
        VAR_2 = VAR_3;
    }
    return ((float)FUNC_0()/VAR_0 * (VAR_2 - VAR_1)) + VAR_1;
}

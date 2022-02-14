
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (float,float const,float const) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_1, float VAR_2, float VAR_3, float VAR_4, int VAR_5)
{
    const float VAR_6 = -VAR_2;
    const float VAR_7 = 1. - VAR_2;
    float VAR_8 = (-1. - VAR_3) * VAR_4 - VAR_3;
    if (VAR_5 == VAR_0)
        VAR_8 *= VAR_7;
    return FUNC_1(FUNC_0(VAR_8, VAR_6, VAR_7) * VAR_1);
}

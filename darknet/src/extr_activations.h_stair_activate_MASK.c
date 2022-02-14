
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static inline float FUNC_1(float VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0);
    if (VAR_1%2 == 0) return FUNC_0(VAR_0/2.);
    else return (VAR_0 - VAR_1) + FUNC_0(VAR_0/2.);
}

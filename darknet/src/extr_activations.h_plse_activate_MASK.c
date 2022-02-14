
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline float FUNC_0(float VAR_0)
{
    if(VAR_0 < -4) return .01 * (VAR_0 + 4);
    if(VAR_0 > 4) return .01 * (VAR_0 - 4) + 1;
    return .125*VAR_0 + .5;
}

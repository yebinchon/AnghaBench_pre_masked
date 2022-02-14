
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;

__attribute__((used)) static float FUNC_1(float VAR_0)
{
    if (VAR_0 <= 21)
        return 0;
    if (VAR_0 <= 50)
        return .5842f * FUNC_0(VAR_0 - 21, 0.4f) + 0.07886f * (VAR_0 - 21);
    return .1102f * (VAR_0 - 8.7f);
}

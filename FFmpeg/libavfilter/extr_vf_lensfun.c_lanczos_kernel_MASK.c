
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1(float VAR_1)
{
    if (VAR_1 == 0.0f) {
        return 1.0f;
    } else if (VAR_1 > -2.0f && VAR_1 < 2.0f) {
        return (2.0f * FUNC_0(VAR_0 * VAR_1) * FUNC_0(VAR_0 / 2.0f * VAR_1)) / (VAR_0 * VAR_0 * VAR_1 * VAR_1);
    } else {
        return 0.0f;
    }
}

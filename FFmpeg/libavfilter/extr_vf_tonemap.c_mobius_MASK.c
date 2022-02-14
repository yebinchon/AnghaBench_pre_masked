
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (double,int) ;

__attribute__((used)) static float FUNC_1(float VAR_0, float VAR_1, double VAR_2)
{
    float VAR_3, VAR_4;

    if (VAR_0 <= VAR_1)
        return VAR_0;

    VAR_3 = -VAR_1 * VAR_1 * (VAR_2 - 1.0f) / (VAR_1 * VAR_1 - 2.0f * VAR_1 + VAR_2);
    VAR_4 = (VAR_1 * VAR_1 - 2.0f * VAR_1 * VAR_2 + VAR_2) / FUNC_0(VAR_2 - 1.0f, 1e-6);

    return (VAR_4 * VAR_4 + 2.0f * VAR_4 * VAR_1 + VAR_1 * VAR_1) / (VAR_4 - VAR_3) * (VAR_0 + VAR_3) / (VAR_0 + VAR_4);
}

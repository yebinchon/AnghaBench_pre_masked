
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const FUNC_0 (float const) ;
 float const FUNC_1 (float const) ;

__attribute__((used)) static float FUNC_2(const float VAR_0, const float VAR_1, const float VAR_2)
{
    if (VAR_0 < VAR_1)
        return VAR_1;
    if (VAR_0 > VAR_2)
        return VAR_2;

    {
        const float VAR_3 = FUNC_1(VAR_2 / VAR_1) / (VAR_2 - VAR_1);
        const float VAR_4 = VAR_2 / FUNC_0(VAR_2 * VAR_3);

        return FUNC_0(VAR_0 * VAR_3) * VAR_4;
    }
}

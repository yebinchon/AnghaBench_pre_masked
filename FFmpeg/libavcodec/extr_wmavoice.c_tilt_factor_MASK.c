
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const FUNC_0 (float const*,float const*,int) ;

__attribute__((used)) static float FUNC_1(const float *VAR_0, int VAR_1)
{
    float VAR_2, VAR_3;

    VAR_2 = 1.0 + FUNC_0(VAR_0, VAR_0, VAR_1);
    VAR_3 = VAR_0[0] + FUNC_0(VAR_0, &VAR_0[1], VAR_1 - 1);

    return VAR_3 / VAR_2;
}

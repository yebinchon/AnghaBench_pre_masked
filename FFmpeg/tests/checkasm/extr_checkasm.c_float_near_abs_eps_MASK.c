
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;
 int FUNC_1 (int ,char*,float,float,float,float) ;
 int VAR_0 ;

int FUNC_2(float VAR_1, float VAR_2, float VAR_3)
{
    float VAR_4 = FUNC_0(VAR_1 - VAR_2);
    if (VAR_4 < VAR_3)
        return 1;

    FUNC_1(VAR_0, "test failed comparing %f with %f (abs diff=%f with EPS=%f)\n", VAR_1, VAR_2, VAR_4, VAR_3);

    return 0;
}

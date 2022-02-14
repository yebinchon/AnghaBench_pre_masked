
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;

__attribute__((used)) static float FUNC_4(float VAR_0, float VAR_1)
{
    if (VAR_1 == 1.0f)
        return VAR_0;
    if (VAR_1 == 2.0f)
        return FUNC_3(VAR_0);
    if (VAR_1 == 3.0f)
        return FUNC_0(VAR_0);
    if (VAR_1 == 4.0f)
        return FUNC_3(FUNC_3(VAR_0));
    return FUNC_1(FUNC_2(VAR_0) / VAR_1);
}

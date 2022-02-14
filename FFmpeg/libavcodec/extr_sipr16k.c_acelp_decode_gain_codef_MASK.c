
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (float const*,float const*,int) ;
 float FUNC_1 (int) ;
 float FUNC_2 (scalar_t__) ;

__attribute__((used)) static float FUNC_3(float VAR_1, const float *VAR_2,
                                     float VAR_3, const float *VAR_4,
                                     const float *VAR_5,
                                     int VAR_6, int VAR_7)
{
    VAR_3 += FUNC_0(VAR_4, VAR_5,
                                              VAR_7);

    VAR_3 = VAR_1 * FUNC_1(VAR_0 / 20. * VAR_3) /
        FUNC_2((0.01 + FUNC_0(VAR_2, VAR_2, VAR_6)));
    return VAR_3;
}

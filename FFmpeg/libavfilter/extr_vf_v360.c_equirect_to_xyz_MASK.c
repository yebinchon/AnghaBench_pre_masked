
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int V360Context ;


 float VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (float const) ;
 float FUNC_1 (float const) ;

__attribute__((used)) static void FUNC_2(const V360Context *VAR_2,
                            int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                            float *VAR_7)
{
    const float VAR_8 = ((2.f * VAR_3) / VAR_5 - 1.f) * VAR_0;
    const float VAR_9 = ((2.f * VAR_4) / VAR_6 - 1.f) * VAR_1;

    const float VAR_10 = FUNC_1(VAR_8);
    const float VAR_11 = FUNC_0(VAR_8);
    const float VAR_12 = FUNC_1(VAR_9);
    const float VAR_13 = FUNC_0(VAR_9);

    VAR_7[0] = VAR_13 * VAR_10;
    VAR_7[1] = -VAR_12;
    VAR_7[2] = -VAR_13 * VAR_11;
}

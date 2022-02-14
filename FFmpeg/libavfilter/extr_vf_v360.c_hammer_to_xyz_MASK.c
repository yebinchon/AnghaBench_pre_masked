
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int V360Context ;


 float const VAR_0 ;
 int FUNC_0 (float*) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(const V360Context *VAR_1,
                          int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                          float *VAR_6)
{
    const float VAR_7 = ((2.f * VAR_2) / VAR_4 - 1.f);
    const float VAR_8 = ((2.f * VAR_3) / VAR_5 - 1.f);

    const float VAR_9 = VAR_7 * VAR_7;
    const float VAR_10 = VAR_8 * VAR_8;

    const float VAR_11 = FUNC_1(1.f - VAR_9 * 0.5f - VAR_10 * 0.5f);

    const float VAR_12 = VAR_0 * VAR_7 * VAR_11;
    const float VAR_13 = 2.f * VAR_11 * VAR_11 - 1.f;

    const float VAR_14 = VAR_12 * VAR_12;
    const float VAR_15 = VAR_13 * VAR_13;

    const float VAR_16 = FUNC_1(1.f - 2.f * VAR_10 * VAR_11 * VAR_11);

    VAR_6[0] = VAR_16 * 2.f * VAR_12 * VAR_13 / (VAR_14 + VAR_15);
    VAR_6[1] = -VAR_0 * VAR_8 * VAR_11;
    VAR_6[2] = -VAR_16 * (VAR_15 - VAR_14) / (VAR_14 + VAR_15);

    FUNC_0(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int V360Context ;


 float FUNC_0 (float const,float const) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(const V360Context *VAR_0,
                        int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                        float *VAR_5)
{
    const float VAR_6 = (2.f * VAR_1) / VAR_3 - 1.f;
    const float VAR_7 = (2.f * VAR_2) / VAR_4 - 1.f;
    const float VAR_8 = FUNC_0(VAR_6, VAR_7);

    if (VAR_8 <= 1.f) {
        const float VAR_9 = 2.f * VAR_8 * FUNC_1(1.f - VAR_8 * VAR_8);

        VAR_5[0] = VAR_9 * VAR_6 / (VAR_8 > 0.f ? VAR_8 : 1.f);
        VAR_5[1] = -VAR_9 * VAR_7 / (VAR_8 > 0.f ? VAR_8 : 1.f);
        VAR_5[2] = -1.f + 2.f * VAR_8 * VAR_8;
    } else {
        VAR_5[0] = 0.f;
        VAR_5[1] = -1.f;
        VAR_5[2] = 0.f;
    }
}

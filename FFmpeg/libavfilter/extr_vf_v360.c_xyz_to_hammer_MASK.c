
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {float* input_mirror_modifier; } ;
typedef TYPE_1__ V360Context ;


 float FUNC_0 (float const,float const) ;
 int FUNC_1 (int,int ,int) ;
 float FUNC_2 (float const) ;
 int FUNC_3 (float) ;
 float const FUNC_4 (float const) ;
 float const FUNC_5 (float) ;

__attribute__((used)) static void FUNC_6(const V360Context *VAR_0,
                          const float *VAR_1, int VAR_2, int VAR_3,
                          uint16_t VAR_4[4][4], uint16_t VAR_5[4][4], float *VAR_6, float *VAR_7)
{
    const float VAR_8 = FUNC_0(VAR_1[0], -VAR_1[2]) * VAR_0->input_mirror_modifier[0];

    const float VAR_9 = FUNC_5(1.f + FUNC_5(1.f - VAR_1[1] * VAR_1[1]) * FUNC_2(VAR_8 * 0.5f));
    const float VAR_10 = FUNC_5(1.f - VAR_1[1] * VAR_1[1]) * FUNC_4(VAR_8 * 0.5f) / VAR_9;
    const float VAR_11 = -VAR_1[1] / VAR_9 * VAR_0->input_mirror_modifier[1];
    float VAR_12, VAR_13;
    int VAR_14, VAR_15;

    VAR_12 = (VAR_10 + 1.f) * VAR_2 / 2.f;
    VAR_13 = (VAR_11 + 1.f) * VAR_3 / 2.f;
    VAR_14 = FUNC_3(VAR_12);
    VAR_15 = FUNC_3(VAR_13);

    *VAR_6 = VAR_12 - VAR_14;
    *VAR_7 = VAR_13 - VAR_15;

    for (int VAR_16 = -1; VAR_16 < 3; VAR_16++) {
        for (int VAR_17 = -1; VAR_17 < 3; VAR_17++) {
            VAR_4[VAR_16 + 1][VAR_17 + 1] = FUNC_1(VAR_14 + VAR_17, 0, VAR_2 - 1);
            VAR_5[VAR_16 + 1][VAR_17 + 1] = FUNC_1(VAR_15 + VAR_16, 0, VAR_3 - 1);
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {float* input_mirror_modifier; scalar_t__ ih_flip; } ;
typedef TYPE_1__ V360Context ;


 float const VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (float const) ;
 float FUNC_1 (float const,float const) ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 int FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(const V360Context *VAR_2,
                          const float *VAR_3, int VAR_4, int VAR_5,
                          uint16_t VAR_6[4][4], uint16_t VAR_7[4][4], float *VAR_8, float *VAR_9)
{
    const float VAR_10 = 0.99f;

    const float VAR_11 = FUNC_1(VAR_3[0], -VAR_3[2]) * VAR_2->input_mirror_modifier[0];
    const float VAR_12 = FUNC_0(-VAR_3[1]) * VAR_2->input_mirror_modifier[1];
    const float VAR_13 = VAR_1;

    int VAR_14, VAR_15;
    int VAR_16, VAR_17;
    float VAR_18, VAR_19;
    int VAR_20, VAR_21;

    if (VAR_12 > -VAR_13 && VAR_12 < VAR_13) {
        VAR_14 = 4 * VAR_4 / 5;
        VAR_15 = VAR_5;

        VAR_16 = VAR_2->ih_flip ? VAR_4 / 5 : 0;
        VAR_17 = 0;

        VAR_18 = (VAR_11 / VAR_0 * VAR_10 + 1.f) * VAR_14 / 2.f;
        VAR_19 = (VAR_12 / VAR_13 * VAR_10 + 1.f) * VAR_15 / 2.f;
    } else {
        VAR_14 = VAR_4 / 5;
        VAR_15 = VAR_5 / 2;

        VAR_16 = VAR_2->ih_flip ? 0 : 4 * VAR_14;

        if (VAR_12 < 0.f) {
            VAR_18 = VAR_3[0] / VAR_3[1];
            VAR_19 = -VAR_3[2] / VAR_3[1];
            VAR_17 = 0;
        } else {
            VAR_18 = -VAR_3[0] / VAR_3[1];
            VAR_19 = -VAR_3[2] / VAR_3[1];
            VAR_17 = VAR_15;
        }

        VAR_18 *= VAR_2->input_mirror_modifier[0] * VAR_2->input_mirror_modifier[1];
        VAR_19 *= VAR_2->input_mirror_modifier[1];

        VAR_18 = 0.5f * VAR_14 * (VAR_18 * VAR_10 + 1.f);
        VAR_19 = 0.5f * VAR_15 * (VAR_19 * VAR_10 + 1.f);
    }

    VAR_20 = FUNC_3(VAR_18);
    VAR_21 = FUNC_3(VAR_19);

    *VAR_8 = VAR_18 - VAR_20;
    *VAR_9 = VAR_19 - VAR_21;

    for (int VAR_22 = -1; VAR_22 < 3; VAR_22++) {
        for (int VAR_23 = -1; VAR_23 < 3; VAR_23++) {
            VAR_6[VAR_22 + 1][VAR_23 + 1] = VAR_16 + FUNC_2(VAR_20 + VAR_23, 0, VAR_14 - 1);
            VAR_7[VAR_22 + 1][VAR_23 + 1] = VAR_17 + FUNC_2(VAR_21 + VAR_22, 0, VAR_15 - 1);
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {float* input_mirror_modifier; } ;
typedef TYPE_1__ V360Context ;


 float const VAR_0 ;
 float FUNC_0 (float const,float const) ;
 int FUNC_1 (int,int ,int) ;
 float FUNC_2 (float,float,float) ;
 int FUNC_3 (float) ;
 float FUNC_4 (float) ;

__attribute__((used)) static void FUNC_5(const V360Context *VAR_1,
                            const float *VAR_2, int VAR_3, int VAR_4,
                            uint16_t VAR_5[4][4], uint16_t VAR_6[4][4], float *VAR_7, float *VAR_8)
{
    const float VAR_9 = FUNC_0(VAR_2[0], -VAR_2[2]) * VAR_1->input_mirror_modifier[0];
    const float VAR_10 = -VAR_2[1] * VAR_1->input_mirror_modifier[1];
    float VAR_11, VAR_12;
    int VAR_13, VAR_14;

    VAR_11 = (VAR_9 / VAR_0 + 1.f) * VAR_3 / 2.f;
    VAR_12 = (FUNC_2(FUNC_4((1.f + VAR_10) / (1.f - VAR_10)) / (2.f * VAR_0), -1.f, 1.f) + 1.f) * VAR_4 / 2.f;
    VAR_13 = FUNC_3(VAR_11);
    VAR_14 = FUNC_3(VAR_12);

    *VAR_7 = VAR_11 - VAR_13;
    *VAR_8 = VAR_12 - VAR_14;

    for (int VAR_15 = -1; VAR_15 < 3; VAR_15++) {
        for (int VAR_16 = -1; VAR_16 < 3; VAR_16++) {
            VAR_5[VAR_15 + 1][VAR_16 + 1] = FUNC_1(VAR_13 + VAR_16, 0, VAR_3 - 1);
            VAR_6[VAR_15 + 1][VAR_16 + 1] = FUNC_1(VAR_14 + VAR_15, 0, VAR_4 - 1);
        }
    }
}

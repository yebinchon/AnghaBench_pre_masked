
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {float* input_mirror_modifier; } ;
typedef TYPE_1__ V360Context ;


 int FUNC_0 (int,int ,int) ;
 float FUNC_1 (float const,float,float) ;
 int FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(const V360Context *VAR_0,
                                 const float *VAR_1, int VAR_2, int VAR_3,
                                 uint16_t VAR_4[4][4], uint16_t VAR_5[4][4], float *VAR_6, float *VAR_7)
{
    const float VAR_8 = FUNC_1(VAR_1[0] / (1.f - VAR_1[1]), -1.f, 1.f) * VAR_0->input_mirror_modifier[0];
    const float VAR_9 = FUNC_1(VAR_1[2] / (1.f - VAR_1[1]), -1.f, 1.f) * VAR_0->input_mirror_modifier[1];
    float VAR_10, VAR_11;
    int VAR_12, VAR_13;

    VAR_10 = (VAR_8 + 1.f) * VAR_2 / 2.f;
    VAR_11 = (VAR_9 + 1.f) * VAR_3 / 2.f;
    VAR_12 = FUNC_2(VAR_10);
    VAR_13 = FUNC_2(VAR_11);

    *VAR_6 = VAR_10 - VAR_12;
    *VAR_7 = VAR_11 - VAR_13;

    for (int VAR_14 = -1; VAR_14 < 3; VAR_14++) {
        for (int VAR_15 = -1; VAR_15 < 3; VAR_15++) {
            VAR_4[VAR_14 + 1][VAR_15 + 1] = FUNC_0(VAR_12 + VAR_15, 0, VAR_2 - 1);
            VAR_5[VAR_14 + 1][VAR_15 + 1] = FUNC_0(VAR_13 + VAR_14, 0, VAR_3 - 1);
        }
    }
}

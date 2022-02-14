
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {float const* input_mirror_modifier; } ;
typedef TYPE_1__ V360Context ;


 float VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float const,float const) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(const V360Context *VAR_1,
                        const float *VAR_2, int VAR_3, int VAR_4,
                        uint16_t VAR_5[4][4], uint16_t VAR_6[4][4], float *VAR_7, float *VAR_8)
{
    const float VAR_9 = FUNC_2(VAR_2[0], VAR_2[1]);
    const float VAR_10 = FUNC_3(1.f + VAR_2[2]) / VAR_0;
    float VAR_11, VAR_12;
    int VAR_13, VAR_14;

    VAR_11 = (1.f + VAR_10 * VAR_2[0] * VAR_1->input_mirror_modifier[0] / (VAR_9 > 0.f ? VAR_9 : 1.f)) * VAR_3 * 0.5f;
    VAR_12 = (1.f - VAR_10 * VAR_2[1] * VAR_1->input_mirror_modifier[1] / (VAR_9 > 0.f ? VAR_9 : 1.f)) * VAR_4 * 0.5f;

    VAR_13 = FUNC_1(VAR_11);
    VAR_14 = FUNC_1(VAR_12);

    *VAR_7 = VAR_11 - VAR_13;
    *VAR_8 = VAR_12 - VAR_14;

    for (int VAR_15 = -1; VAR_15 < 3; VAR_15++) {
        for (int VAR_16 = -1; VAR_16 < 3; VAR_16++) {
            VAR_5[VAR_15 + 1][VAR_16 + 1] = FUNC_0(VAR_13 + VAR_16, 0, VAR_3 - 1);
            VAR_6[VAR_15 + 1][VAR_16 + 1] = FUNC_0(VAR_14 + VAR_15, 0, VAR_4 - 1);
        }
    }
}

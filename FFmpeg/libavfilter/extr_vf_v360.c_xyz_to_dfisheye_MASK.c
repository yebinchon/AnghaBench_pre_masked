
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {float in_pad; float const* input_mirror_modifier; } ;
typedef TYPE_1__ V360Context ;


 float VAR_0 ;
 float FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (float const) ;
 int FUNC_3 (float const) ;
 int FUNC_4 (float) ;
 float FUNC_5 (float const,float const) ;

__attribute__((used)) static void FUNC_6(const V360Context *VAR_1,
                            const float *VAR_2, int VAR_3, int VAR_4,
                            uint16_t VAR_5[4][4], uint16_t VAR_6[4][4], float *VAR_7, float *VAR_8)
{
    const float VAR_9 = 1.f - VAR_1->in_pad;

    const float VAR_10 = VAR_3 / 2.f;
    const float VAR_11 = VAR_4;

    const float VAR_12 = FUNC_5(VAR_2[0], VAR_2[1]);
    const float VAR_13 = VAR_12 > 0.f ? VAR_12 : 1.f;
    const float VAR_14 = FUNC_0(FUNC_3(VAR_2[2])) / VAR_0;

    float VAR_15 = (VAR_14 * (-VAR_2[0] / VAR_13) * VAR_1->input_mirror_modifier[0] * VAR_9 + 0.5f) * VAR_10;
    float VAR_16 = (VAR_14 * (-VAR_2[1] / VAR_13) * VAR_1->input_mirror_modifier[1] * VAR_9 + 0.5f) * VAR_11;

    int VAR_17, VAR_18;
    int VAR_19;

    if (VAR_2[2] >= 0.f) {
        VAR_19 = 0;
    } else {
        VAR_19 = FUNC_2(VAR_10);
        VAR_15 = VAR_10 - VAR_15;
    }

    VAR_17 = FUNC_4(VAR_15);
    VAR_18 = FUNC_4(VAR_16);

    *VAR_7 = VAR_15 - VAR_17;
    *VAR_8 = VAR_16 - VAR_18;

    for (int VAR_20 = -1; VAR_20 < 3; VAR_20++) {
        for (int VAR_21 = -1; VAR_21 < 3; VAR_21++) {
            VAR_5[VAR_20 + 1][VAR_21 + 1] = FUNC_1(VAR_19 + VAR_17 + VAR_21, 0, VAR_3 - 1);
            VAR_6[VAR_20 + 1][VAR_21 + 1] = FUNC_1( VAR_18 + VAR_20, 0, VAR_4 - 1);
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {float* input_mirror_modifier; } ;
typedef TYPE_1__ V360Context ;


 float const VAR_0 ;
 float const VAR_1 ;
 float FUNC_0 (float const) ;
 float FUNC_1 (float const,float const) ;
 int FUNC_2 (int,int ,int) ;
 float FUNC_3 (float const) ;
 int FUNC_4 (float) ;

__attribute__((used)) static void FUNC_5(const V360Context *VAR_2,
                              const float *VAR_3, int VAR_4, int VAR_5,
                              uint16_t VAR_6[4][4], uint16_t VAR_7[4][4], float *VAR_8, float *VAR_9)
{
    const float VAR_10 = FUNC_0(-VAR_3[1]) * VAR_2->input_mirror_modifier[1];
    const float VAR_11 = FUNC_1(VAR_3[0], -VAR_3[2]) * VAR_2->input_mirror_modifier[0] * FUNC_3(VAR_10);
    float VAR_12, VAR_13;
    int VAR_14, VAR_15;

    VAR_12 = (VAR_11 / VAR_0 + 1.f) * VAR_4 / 2.f;
    VAR_13 = (VAR_10 / VAR_1 + 1.f) * VAR_5 / 2.f;
    VAR_14 = FUNC_4(VAR_12);
    VAR_15 = FUNC_4(VAR_13);

    *VAR_8 = VAR_12 - VAR_14;
    *VAR_9 = VAR_13 - VAR_15;

    for (int VAR_16 = -1; VAR_16 < 3; VAR_16++) {
        for (int VAR_17 = -1; VAR_17 < 3; VAR_17++) {
            VAR_6[VAR_16 + 1][VAR_17 + 1] = FUNC_2(VAR_14 + VAR_17, 0, VAR_4 - 1);
            VAR_7[VAR_16 + 1][VAR_17 + 1] = FUNC_2(VAR_15 + VAR_16, 0, VAR_5 - 1);
        }
    }
}

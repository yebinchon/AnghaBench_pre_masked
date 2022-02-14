
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float const) ;
 int FUNC_1 (float**,float**,float**) ;
 float FUNC_2 (float const) ;

__attribute__((used)) static inline void FUNC_3(float VAR_1, float VAR_2, float VAR_3,
                                             float VAR_4[3][3],
                                             const int VAR_5[3])
{
    const float VAR_6 = VAR_1 * VAR_0 / 180.f;
    const float VAR_7 = VAR_2 * VAR_0 / 180.f;
    const float VAR_8 = VAR_3 * VAR_0 / 180.f;

    const float VAR_9 = FUNC_2(-VAR_6);
    const float VAR_10 = FUNC_0(-VAR_6);
    const float VAR_11 = FUNC_2(VAR_7);
    const float VAR_12 = FUNC_0(VAR_7);
    const float VAR_13 = FUNC_2(VAR_8);
    const float VAR_14 = FUNC_0(VAR_8);

    float VAR_15[3][3][3];
    float VAR_16[3][3];

    VAR_15[0][0][0] = VAR_10; VAR_15[0][0][1] = 0; VAR_15[0][0][2] = VAR_9;
    VAR_15[0][1][0] = 0; VAR_15[0][1][1] = 1; VAR_15[0][1][2] = 0;
    VAR_15[0][2][0] = -VAR_9; VAR_15[0][2][1] = 0; VAR_15[0][2][2] = VAR_10;

    VAR_15[1][0][0] = 1; VAR_15[1][0][1] = 0; VAR_15[1][0][2] = 0;
    VAR_15[1][1][0] = 0; VAR_15[1][1][1] = VAR_12; VAR_15[1][1][2] = -VAR_11;
    VAR_15[1][2][0] = 0; VAR_15[1][2][1] = VAR_11; VAR_15[1][2][2] = VAR_12;

    VAR_15[2][0][0] = VAR_14; VAR_15[2][0][1] = -VAR_13; VAR_15[2][0][2] = 0;
    VAR_15[2][1][0] = VAR_13; VAR_15[2][1][1] = VAR_14; VAR_15[2][1][2] = 0;
    VAR_15[2][2][0] = 0; VAR_15[2][2][1] = 0; VAR_15[2][2][2] = 1;

    FUNC_1(VAR_16, VAR_15[VAR_5[0]], VAR_15[VAR_5[1]]);
    FUNC_1(VAR_4, VAR_16, VAR_15[VAR_5[2]]);
}

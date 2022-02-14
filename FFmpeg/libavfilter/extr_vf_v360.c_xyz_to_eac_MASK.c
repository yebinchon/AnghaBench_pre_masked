
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int* in_cubemap_face_order; } ;
typedef TYPE_1__ V360Context ;


 float VAR_0 ;
 float FUNC_0 (float) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (float) ;
 int FUNC_3 (TYPE_1__ const*,float const*,float*,float*,int*) ;

__attribute__((used)) static void FUNC_4(const V360Context *VAR_1,
                       const float *VAR_2, int VAR_3, int VAR_4,
                       uint16_t VAR_5[4][4], uint16_t VAR_6[4][4], float *VAR_7, float *VAR_8)
{
    const float VAR_9 = 2;
    const float VAR_10 = VAR_9 / VAR_3;
    const float VAR_11 = VAR_9 / VAR_4;

    float VAR_12, VAR_13;
    int VAR_14, VAR_15;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19;

    FUNC_3(VAR_1, VAR_2, &VAR_12, &VAR_13, &VAR_16);

    VAR_17 = VAR_1->in_cubemap_face_order[VAR_16];
    VAR_18 = VAR_17 % 3;
    VAR_19 = VAR_17 / 3;

    VAR_12 = VAR_0 * FUNC_0(VAR_12) + 0.5f;
    VAR_13 = VAR_0 * FUNC_0(VAR_13) + 0.5f;


    VAR_12 = (VAR_12 + VAR_18) * (1.f - 2.f * VAR_10) / 3.f + VAR_10;
    VAR_13 = VAR_13 * (0.5f - 2.f * VAR_11) + VAR_11 + 0.5f * VAR_19;

    VAR_12 *= VAR_3;
    VAR_13 *= VAR_4;

    VAR_12 -= 0.5f;
    VAR_13 -= 0.5f;

    VAR_14 = FUNC_2(VAR_12);
    VAR_15 = FUNC_2(VAR_13);

    *VAR_7 = VAR_12 - VAR_14;
    *VAR_8 = VAR_13 - VAR_15;

    for (int VAR_20 = -1; VAR_20 < 3; VAR_20++) {
        for (int VAR_21 = -1; VAR_21 < 3; VAR_21++) {
            VAR_5[VAR_20 + 1][VAR_21 + 1] = FUNC_1(VAR_14 + VAR_21, 0, VAR_3 - 1);
            VAR_6[VAR_20 + 1][VAR_21 + 1] = FUNC_1(VAR_15 + VAR_20, 0, VAR_4 - 1);
        }
    }
}

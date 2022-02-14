
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {float fin_pad; float in_width; float in_pad; float in_height; int* in_cubemap_face_order; } ;
typedef TYPE_1__ V360Context ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (float const) ;
 int FUNC_2 (float) ;
 int FUNC_3 (TYPE_1__ const*,float,float,int,float*,float*,int*) ;
 int FUNC_4 (float) ;
 int FUNC_5 (TYPE_1__ const*,float const*,float*,float*,int*) ;

__attribute__((used)) static void FUNC_6(const V360Context *VAR_0,
                           const float *VAR_1, int VAR_2, int VAR_3,
                           uint16_t VAR_4[4][4], uint16_t VAR_5[4][4], float *VAR_6, float *VAR_7)
{
    const float VAR_8 = VAR_0->fin_pad > 0 ? 1.f - VAR_0->fin_pad / (VAR_0->in_width / 3.f) : 1.f - VAR_0->in_pad;
    const float VAR_9 = VAR_0->fin_pad > 0 ? 1.f - VAR_0->fin_pad / (VAR_0->in_height / 2.f) : 1.f - VAR_0->in_pad;
    const float VAR_10 = VAR_2 / 3.f;
    const float VAR_11 = VAR_3 / 2.f;
    float VAR_12, VAR_13;
    int VAR_14, VAR_15;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19;
    int VAR_20, VAR_21;

    FUNC_5(VAR_0, VAR_1, &VAR_12, &VAR_13, &VAR_18);

    VAR_12 *= VAR_8;
    VAR_13 *= VAR_9;

    VAR_19 = VAR_0->in_cubemap_face_order[VAR_18];
    VAR_20 = VAR_19 % 3;
    VAR_21 = VAR_19 / 3;
    VAR_16 = FUNC_1(VAR_10 * (VAR_20 + 1)) - FUNC_1(VAR_10 * VAR_20);
    VAR_17 = FUNC_1(VAR_11 * (VAR_21 + 1)) - FUNC_1(VAR_11 * VAR_21);

    VAR_12 = 0.5f * VAR_16 * (VAR_12 + 1.f) - 0.5f;
    VAR_13 = 0.5f * VAR_17 * (VAR_13 + 1.f) - 0.5f;

    VAR_14 = FUNC_2(VAR_12);
    VAR_15 = FUNC_2(VAR_13);

    *VAR_6 = VAR_12 - VAR_14;
    *VAR_7 = VAR_13 - VAR_15;

    for (int VAR_22 = -1; VAR_22 < 3; VAR_22++) {
        for (int VAR_23 = -1; VAR_23 < 3; VAR_23++) {
            int VAR_24 = VAR_14 + VAR_23;
            int VAR_25 = VAR_15 + VAR_22;
            int VAR_26, VAR_27;
            int VAR_28, VAR_29;

            if (VAR_24 >= 0 && VAR_24 < VAR_16 && VAR_25 >= 0 && VAR_25 < VAR_17) {
                VAR_19 = VAR_0->in_cubemap_face_order[VAR_18];

                VAR_20 = VAR_19 % 3;
                VAR_21 = VAR_19 / 3;
                VAR_26 = FUNC_1(VAR_10 * VAR_20);
                VAR_27 = FUNC_1(VAR_11 * VAR_21);
            } else {
                VAR_12 = 2.f * VAR_24 / VAR_16 - 1.f;
                VAR_13 = 2.f * VAR_25 / VAR_17 - 1.f;

                VAR_12 /= VAR_8;
                VAR_13 /= VAR_9;

                FUNC_3(VAR_0, VAR_12, VAR_13, VAR_18, &VAR_12, &VAR_13, &VAR_19);

                VAR_12 *= VAR_8;
                VAR_13 *= VAR_9;

                VAR_20 = VAR_19 % 3;
                VAR_21 = VAR_19 / 3;
                VAR_26 = FUNC_1(VAR_10 * VAR_20);
                VAR_27 = FUNC_1(VAR_11 * VAR_21);
                VAR_28 = FUNC_1(VAR_10 * (VAR_20 + 1)) - VAR_26;
                VAR_29 = FUNC_1(VAR_11 * (VAR_21 + 1)) - VAR_27;

                VAR_24 = FUNC_0(FUNC_4(0.5f * VAR_28 * (VAR_12 + 1.f)), 0, VAR_28 - 1);
                VAR_25 = FUNC_0(FUNC_4(0.5f * VAR_29 * (VAR_13 + 1.f)), 0, VAR_29 - 1);
            }

            VAR_4[VAR_22 + 1][VAR_23 + 1] = VAR_26 + VAR_24;
            VAR_5[VAR_22 + 1][VAR_23 + 1] = VAR_27 + VAR_25;
        }
    }
}

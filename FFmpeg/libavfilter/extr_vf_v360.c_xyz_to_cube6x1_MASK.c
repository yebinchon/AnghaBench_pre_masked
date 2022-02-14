
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {float fin_pad; float in_width; float in_pad; float in_height; int* in_cubemap_face_order; } ;
typedef TYPE_1__ V360Context ;


 int FUNC_0 (int ,int ,int const) ;
 int FUNC_1 (float const) ;
 int FUNC_2 (float) ;
 int FUNC_3 (TYPE_1__ const*,float,float,int,float*,float*,int*) ;
 int FUNC_4 (float) ;
 int FUNC_5 (TYPE_1__ const*,float const*,float*,float*,int*) ;

__attribute__((used)) static void FUNC_6(const V360Context *VAR_0,
                           const float *VAR_1, int VAR_2, int VAR_3,
                           uint16_t VAR_4[4][4], uint16_t VAR_5[4][4], float *VAR_6, float *VAR_7)
{
    const float VAR_8 = VAR_0->fin_pad > 0 ? 1.f - VAR_0->fin_pad / (VAR_0->in_width / 6.f) : 1.f - VAR_0->in_pad;
    const float VAR_9 = VAR_0->fin_pad > 0 ? 1.f - (float)(VAR_0->fin_pad) / VAR_0->in_height : 1.f - VAR_0->in_pad;
    const float VAR_10 = VAR_2 / 6.f;
    const int VAR_11 = VAR_3;
    float VAR_12, VAR_13;
    int VAR_14, VAR_15;
    int VAR_16;
    int VAR_17, VAR_18;

    FUNC_5(VAR_0, VAR_1, &VAR_12, &VAR_13, &VAR_17);

    VAR_12 *= VAR_8;
    VAR_13 *= VAR_9;

    VAR_18 = VAR_0->in_cubemap_face_order[VAR_17];
    VAR_16 = FUNC_1(VAR_10 * (VAR_18 + 1)) - FUNC_1(VAR_10 * VAR_18);

    VAR_12 = 0.5f * VAR_16 * (VAR_12 + 1.f) - 0.5f;
    VAR_13 = 0.5f * VAR_11 * (VAR_13 + 1.f) - 0.5f;

    VAR_14 = FUNC_2(VAR_12);
    VAR_15 = FUNC_2(VAR_13);

    *VAR_6 = VAR_12 - VAR_14;
    *VAR_7 = VAR_13 - VAR_15;

    for (int VAR_19 = -1; VAR_19 < 3; VAR_19++) {
        for (int VAR_20 = -1; VAR_20 < 3; VAR_20++) {
            int VAR_21 = VAR_14 + VAR_20;
            int VAR_22 = VAR_15 + VAR_19;
            int VAR_23;
            int VAR_24;

            if (VAR_21 >= 0 && VAR_21 < VAR_16 && VAR_22 >= 0 && VAR_22 < VAR_11) {
                VAR_18 = VAR_0->in_cubemap_face_order[VAR_17];

                VAR_23 = FUNC_1(VAR_10 * VAR_18);
            } else {
                VAR_12 = 2.f * VAR_21 / VAR_16 - 1.f;
                VAR_13 = 2.f * VAR_22 / VAR_11 - 1.f;

                VAR_12 /= VAR_8;
                VAR_13 /= VAR_9;

                FUNC_3(VAR_0, VAR_12, VAR_13, VAR_17, &VAR_12, &VAR_13, &VAR_18);

                VAR_12 *= VAR_8;
                VAR_13 *= VAR_9;

                VAR_23 = FUNC_1(VAR_10 * VAR_18);
                VAR_24 = FUNC_1(VAR_10 * (VAR_18 + 1)) - VAR_23;

                VAR_21 = FUNC_0(FUNC_4(0.5f * VAR_24 * (VAR_12 + 1.f)), 0, VAR_24 - 1);
                VAR_22 = FUNC_0(FUNC_4(0.5f * VAR_11 * (VAR_13 + 1.f)), 0, VAR_11 - 1);
            }

            VAR_4[VAR_19 + 1][VAR_20 + 1] = VAR_23 + VAR_21;
            VAR_5[VAR_19 + 1][VAR_20 + 1] = VAR_22;
        }
    }
}

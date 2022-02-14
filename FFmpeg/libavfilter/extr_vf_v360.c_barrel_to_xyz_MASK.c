
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int V360Context ;


 float VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (float const) ;
 int FUNC_1 (float*) ;
 float FUNC_2 (float const) ;

__attribute__((used)) static void FUNC_3(const V360Context *VAR_2,
                          int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                          float *VAR_7)
{
    const float VAR_8 = 0.99f;
    float VAR_9, VAR_10, VAR_11;

    if (VAR_3 < 4 * VAR_5 / 5) {
        const float VAR_12 = VAR_1;

        const int VAR_13 = 4 * VAR_5 / 5;
        const int VAR_14 = VAR_6;

        const float VAR_15 = ((2.f * VAR_3) / VAR_13 - 1.f) * VAR_0 / VAR_8;
        const float VAR_16 = ((2.f * VAR_4) / VAR_14 - 1.f) * VAR_12 / VAR_8;

        const float VAR_17 = FUNC_2(VAR_15);
        const float VAR_18 = FUNC_0(VAR_15);
        const float VAR_19 = FUNC_2(VAR_16);
        const float VAR_20 = FUNC_0(VAR_16);

        VAR_9 = VAR_20 * VAR_17;
        VAR_10 = -VAR_19;
        VAR_11 = -VAR_20 * VAR_18;
    } else {
        const int VAR_21 = VAR_5 / 5;
        const int VAR_22 = VAR_6 / 2;

        float VAR_23, VAR_24;

        if (VAR_4 < VAR_22) {
            VAR_23 = 2.f * (VAR_3 - 4 * VAR_21) / VAR_21 - 1.f;
            VAR_24 = 2.f * (VAR_4 ) / VAR_22 - 1.f;

            VAR_23 /= VAR_8;
            VAR_24 /= VAR_8;

            VAR_9 = VAR_23;
            VAR_10 = 1.f;
            VAR_11 = -VAR_24;
        } else {
            VAR_23 = 2.f * (VAR_3 - 4 * VAR_21) / VAR_21 - 1.f;
            VAR_24 = 2.f * (VAR_4 - VAR_22) / VAR_22 - 1.f;

            VAR_23 /= VAR_8;
            VAR_24 /= VAR_8;

            VAR_9 = VAR_23;
            VAR_10 = -1.f;
            VAR_11 = VAR_24;
        }
    }

    VAR_7[0] = VAR_9;
    VAR_7[1] = VAR_10;
    VAR_7[2] = VAR_11;

    FUNC_1(VAR_7);
}

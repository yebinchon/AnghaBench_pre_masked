
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float const) ;
 scalar_t__ FUNC_3 (float,float) ;
 float FUNC_4 (float) ;

__attribute__((used)) static inline float FUNC_5(int VAR_0, int VAR_1, float VAR_2,
                                     const float *VAR_3, float VAR_4) {
    const float VAR_5 = 1.0f / VAR_1;
    const float VAR_6 = 1.0f / (VAR_1 - 1);
    const float VAR_7 = VAR_2;
    float VAR_8 = 0.0f, VAR_9 = 0.0f;
    int VAR_10, VAR_11;
    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        float VAR_12 = 0.0f, VAR_13 = 0.0f, VAR_14 = 0.0f, VAR_15 = 0.0f;
        float VAR_16 = 0;
        for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
            float VAR_17 = FUNC_2(VAR_3[VAR_10*128+VAR_11]);
            VAR_15 = FUNC_0(VAR_15, VAR_17);
            VAR_12 += VAR_17;
            VAR_13 += VAR_17 *= VAR_17;




            if (VAR_17 >= VAR_7) {
                VAR_16 += 1.0f;
            } else {
                if (VAR_4 == 2.f)
                    VAR_16 += (VAR_17 / VAR_7) * (VAR_17 / VAR_7);
                else
                    VAR_16 += FUNC_3(VAR_17 / VAR_7, VAR_4);
            }
        }
        if (VAR_13 > VAR_2) {
            float VAR_18;
            VAR_12 *= VAR_5;


            for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
                float VAR_19 = FUNC_2(VAR_3[VAR_10*128+VAR_11]) - VAR_12;
                VAR_14 += VAR_19*VAR_19;
            }
            VAR_14 = FUNC_4(VAR_14 * VAR_6);

            VAR_13 *= VAR_5;
            VAR_18 = VAR_12 / FUNC_1(VAR_12+4*VAR_14,VAR_15);
            VAR_8 += VAR_13 * FUNC_4(VAR_18) / FUNC_0(0.5f,VAR_16);
            VAR_9 += VAR_13;
        }
    }
    if (VAR_9 > 0) {
        return VAR_8 / VAR_9;
    } else {
        return 1.0f;
    }
}

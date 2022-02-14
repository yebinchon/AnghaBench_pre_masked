
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const float *VAR_0,
                      const float *VAR_1,
                      float *VAR_2,
                      int VAR_3,
                      float *VAR_4)
{
    float VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    float VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_5 = VAR_1[0];
    VAR_6 = VAR_1[1];
    VAR_7 = VAR_1[2];
    VAR_8 = VAR_1[3];
    VAR_9 = VAR_1[4];
    VAR_10 = VAR_4[0];
    VAR_11 = VAR_4[1];
    VAR_12 = VAR_4[2];
    VAR_13 = VAR_4[3];
    VAR_14 = VAR_4[4];

    for (int VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
        float VAR_16 = VAR_0[VAR_15];

        VAR_16 += (VAR_5*VAR_10);
        VAR_16 += (VAR_6*VAR_11);
        VAR_16 += (VAR_7*VAR_12);
        VAR_16 += (VAR_8*VAR_13);
        VAR_16 += (VAR_9*VAR_14);
        VAR_14 = VAR_13;
        VAR_13 = VAR_12;
        VAR_12 = VAR_11;
        VAR_11 = VAR_10;
        VAR_10 = VAR_0[VAR_15];
        VAR_2[VAR_15] = VAR_16;
    }

    VAR_4[0] = VAR_10;
    VAR_4[1] = VAR_11;
    VAR_4[2] = VAR_12;
    VAR_4[3] = VAR_13;
    VAR_4[4] = VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (float const*,float const*,float*,int,int) ;

__attribute__((used)) static int FUNC_1(const float *VAR_1,
                         float *VAR_2,
                         const float *VAR_3,
                         int VAR_4,
                         int VAR_5,
                         int VAR_6)
{
    int VAR_7 = VAR_6 - VAR_5;
    int VAR_8;
    const float *VAR_9;
    float VAR_10[VAR_0>>1];

    if (VAR_4 == 0) {
        VAR_9 = VAR_1;
    } else {
        for (int VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
            VAR_10[VAR_11] = VAR_1[VAR_11];
        for (int VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
            VAR_10[VAR_12] = VAR_1[VAR_12] * VAR_3[VAR_12];
            VAR_10[VAR_6-VAR_12-1] = VAR_1[VAR_6-VAR_12-1] * VAR_3[VAR_12];
        }
        VAR_9 = VAR_10;
    }

    VAR_8 = 0;
    FUNC_0(VAR_9, VAR_9, VAR_2, VAR_7, VAR_5+1);

    for (int VAR_13 = 0; VAR_13 <= VAR_5; VAR_13++) {
        float VAR_14 = 0.f;

        for (int VAR_15 = VAR_13 + VAR_7; VAR_15 < VAR_6; VAR_15++)
            VAR_14 += VAR_9[VAR_15] * VAR_9[VAR_15-VAR_13];
        VAR_2[VAR_13] += VAR_14;
    }

    return VAR_8;
}

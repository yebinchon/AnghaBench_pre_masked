
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float,int) ;
 int FUNC_1 (int ) ;
 float* VAR_0 ;

__attribute__((used)) static void FUNC_2(float *VAR_1, float *VAR_2, int *VAR_3,
                              int *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    float VAR_8, VAR_9, VAR_10, VAR_11;

    for (VAR_5 = 0, VAR_7 = 0; VAR_7 < 4 * 256; VAR_7 += 256, VAR_5++) {
        int VAR_12 = VAR_3[VAR_5];
        int VAR_13 = VAR_4[VAR_5];
        VAR_6 = VAR_7;

        if (VAR_12 != VAR_13) {

            VAR_8 = VAR_0[VAR_12 * 2 ];
            VAR_9 = VAR_0[VAR_12 * 2 + 1];
            VAR_10 = VAR_0[VAR_13 * 2 ];
            VAR_11 = VAR_0[VAR_13 * 2 + 1];


            for (; VAR_6 < VAR_7 + 8; VAR_6++) {
                float VAR_14 = VAR_1[VAR_6];
                float VAR_15 = VAR_2[VAR_6];
                VAR_15 = VAR_14 * FUNC_0(VAR_8, VAR_10, VAR_6 - VAR_7) +
                     VAR_15 * FUNC_0(VAR_9, VAR_11, VAR_6 - VAR_7);
                VAR_1[VAR_6] = VAR_15;
                VAR_2[VAR_6] = VAR_14 * 2.0 - VAR_15;
            }
        }


        switch (VAR_13) {
        case 0:
            for (; VAR_6 < VAR_7 + 256; VAR_6++) {
                float VAR_16 = VAR_1[VAR_6];
                float VAR_17 = VAR_2[VAR_6];
                VAR_1[VAR_6] = VAR_17 * 2.0;
                VAR_2[VAR_6] = (VAR_16 - VAR_17) * 2.0;
            }
            break;
        case 1:
            for (; VAR_6 < VAR_7 + 256; VAR_6++) {
                float VAR_18 = VAR_1[VAR_6];
                float VAR_19 = VAR_2[VAR_6];
                VAR_1[VAR_6] = (VAR_18 + VAR_19) * 2.0;
                VAR_2[VAR_6] = VAR_19 * -2.0;
            }
            break;
        case 2:
        case 3:
            for (; VAR_6 < VAR_7 + 256; VAR_6++) {
                float VAR_20 = VAR_1[VAR_6];
                float VAR_21 = VAR_2[VAR_6];
                VAR_1[VAR_6] = VAR_20 + VAR_21;
                VAR_2[VAR_6] = VAR_20 - VAR_21;
            }
            break;
        default:
            FUNC_1(0);
        }
    }
}

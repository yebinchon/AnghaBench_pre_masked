
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum InterpolateMethod { ____Placeholder_InterpolateMethod } InterpolateMethod ;
typedef enum FillMethod { ____Placeholder_FillMethod } FillMethod ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int FUNC_1 (int) ;
 float FUNC_2 (float,int ,int) ;
 float FUNC_3 (float,int) ;
 int FUNC_4 (float,float,int const*,int,int,int,int ) ;
 int FUNC_5 (float,float,int const*,int,int,int,int ) ;
 int FUNC_6 (float,float,int const*,int,int,int,int ) ;

int FUNC_7(const uint8_t *VAR_1, uint8_t *VAR_2,
                        int VAR_3, int VAR_4,
                        int VAR_5, int VAR_6, const float *VAR_7,
                        enum InterpolateMethod VAR_8,
                        enum FillMethod VAR_9)
{
    int VAR_10, VAR_11;
    float VAR_12, VAR_13;
    uint8_t VAR_14 = 0;
    uint8_t (*VAR_15)(float, float, const uint8_t *, int, int, int, uint8_t) = ((void*)0);

    switch(VAR_8) {
        case 128:
            VAR_15 = FUNC_6;
            break;
        case 130:
            VAR_15 = FUNC_4;
            break;
        case 129:
            VAR_15 = FUNC_5;
            break;
        default:
            return FUNC_0(VAR_0);
    }

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
            VAR_12 = VAR_10 * VAR_7[0] + VAR_11 * VAR_7[1] + VAR_7[2];
            VAR_13 = VAR_10 * VAR_7[3] + VAR_11 * VAR_7[4] + VAR_7[5];

            switch(VAR_9) {
                case 131:
                    VAR_14 = VAR_1[VAR_11 * VAR_3 + VAR_10];
                    break;
                case 133:
                    VAR_13 = FUNC_2(VAR_13, 0, VAR_6 - 1);
                    VAR_12 = FUNC_2(VAR_12, 0, VAR_5 - 1);
                    VAR_14 = VAR_1[(int)VAR_13 * VAR_3 + (int)VAR_12];
                    break;
                case 132:
                    VAR_12 = FUNC_3(VAR_12, VAR_5-1);
                    VAR_13 = FUNC_3(VAR_13, VAR_6-1);

                    FUNC_1(VAR_12 >= 0 && VAR_13 >= 0);
                    FUNC_1(VAR_12 < VAR_5 && VAR_13 < VAR_6);
                    VAR_14 = VAR_1[(int)VAR_13 * VAR_3 + (int)VAR_12];
            }

            VAR_2[VAR_11 * VAR_4 + VAR_10] = VAR_15(VAR_12, VAR_13, VAR_1, VAR_5, VAR_6, VAR_3, VAR_14);
        }
    }
    return 0;
}

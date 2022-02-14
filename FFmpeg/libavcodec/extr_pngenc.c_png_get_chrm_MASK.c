
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVColorPrimaries { ____Placeholder_AVColorPrimaries } AVColorPrimaries ;
 int FUNC_0 (int *,double) ;

__attribute__((used)) static int FUNC_1(enum AVColorPrimaries VAR_0, uint8_t *VAR_1)
{
    double VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0.3127, VAR_9 = 0.3290;
    switch (VAR_0) {
        case 130:
            VAR_2 = 0.640; VAR_3 = 0.330;
            VAR_4 = 0.300; VAR_5 = 0.600;
            VAR_6 = 0.150; VAR_7 = 0.060;
            break;
        case 131:
            VAR_2 = 0.670; VAR_3 = 0.330;
            VAR_4 = 0.210; VAR_5 = 0.710;
            VAR_6 = 0.140; VAR_7 = 0.080;
            VAR_8 = 0.310; VAR_9 = 0.316;
            break;
        case 132:
            VAR_2 = 0.640; VAR_3 = 0.330;
            VAR_4 = 0.290; VAR_5 = 0.600;
            VAR_6 = 0.150; VAR_7 = 0.060;
            break;
        case 129:
        case 128:
            VAR_2 = 0.630; VAR_3 = 0.340;
            VAR_4 = 0.310; VAR_5 = 0.595;
            VAR_6 = 0.155; VAR_7 = 0.070;
            break;
        case 133:
            VAR_2 = 0.708; VAR_3 = 0.292;
            VAR_4 = 0.170; VAR_5 = 0.797;
            VAR_6 = 0.131; VAR_7 = 0.046;
            break;
        default:
            return 0;
    }

    FUNC_0(VAR_1 , VAR_8); FUNC_0(VAR_1 + 4 , VAR_9);
    FUNC_0(VAR_1 + 8 , VAR_2); FUNC_0(VAR_1 + 12, VAR_3);
    FUNC_0(VAR_1 + 16, VAR_4); FUNC_0(VAR_1 + 20, VAR_5);
    FUNC_0(VAR_1 + 24, VAR_6); FUNC_0(VAR_1 + 28, VAR_7);
    return 1;
}

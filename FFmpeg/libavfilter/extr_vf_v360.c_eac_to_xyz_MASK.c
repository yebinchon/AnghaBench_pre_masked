
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int V360Context ;





 float VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float,float) ;
 int FUNC_3 (float*) ;
 float FUNC_4 (float) ;

__attribute__((used)) static void FUNC_5(const V360Context *VAR_1,
                       int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                       float *VAR_6)
{
    const float VAR_7 = 2;
    const float VAR_8 = VAR_7 / VAR_4;
    const float VAR_9 = VAR_7 / VAR_5;

    int VAR_10, VAR_11, VAR_12;

    float VAR_13, VAR_14, VAR_15;

    float VAR_16 = (VAR_2 + 0.5f) / VAR_4;
    float VAR_17 = (VAR_3 + 0.5f) / VAR_5;






    VAR_16 = 3.f * (VAR_16 - VAR_8) / (1.f - 2.f * VAR_8);
    if (VAR_16 < 0.f) {
        VAR_10 = 0;
        VAR_16 -= 0.5f;
    } else if (VAR_16 >= 3.f) {
        VAR_10 = 2;
        VAR_16 -= 2.5f;
    } else {
        VAR_10 = FUNC_1(VAR_16);
        VAR_16 = FUNC_2(VAR_16, 1.f) - 0.5f;
    }


    VAR_11 = FUNC_1(VAR_17 * 2.f);
    VAR_17 = (VAR_17 - VAR_9 - 0.5f * VAR_11) / (0.5f - 2.f * VAR_9) - 0.5f;

    if (VAR_16 >= -0.5f && VAR_16 < 0.5f) {
        VAR_16 = FUNC_4(VAR_0 * VAR_16);
    } else {
        VAR_16 = 2.f * VAR_16;
    }
    if (VAR_17 >= -0.5f && VAR_17 < 0.5f) {
        VAR_17 = FUNC_4(VAR_0 * VAR_17);
    } else {
        VAR_17 = 2.f * VAR_17;
    }

    VAR_12 = VAR_10 + 3 * VAR_11;

    switch (VAR_12) {
    case 130:
        VAR_13 = -1.f;
        VAR_14 = -VAR_17;
        VAR_15 = -VAR_16;
        break;
    case 129:
        VAR_13 = VAR_16;
        VAR_14 = -VAR_17;
        VAR_15 = -1.f;
        break;
    case 128:
        VAR_13 = 1.f;
        VAR_14 = -VAR_17;
        VAR_15 = VAR_16;
        break;
    case 133:
        VAR_13 = -VAR_17;
        VAR_14 = -1.f;
        VAR_15 = VAR_16;
        break;
    case 132:
        VAR_13 = -VAR_17;
        VAR_14 = VAR_16;
        VAR_15 = 1.f;
        break;
    case 131:
        VAR_13 = -VAR_17;
        VAR_14 = 1.f;
        VAR_15 = -VAR_16;
        break;
    default:
        FUNC_0(0);
    }

    VAR_6[0] = VAR_13;
    VAR_6[1] = VAR_14;
    VAR_6[2] = VAR_15;

    FUNC_3(VAR_6);
}

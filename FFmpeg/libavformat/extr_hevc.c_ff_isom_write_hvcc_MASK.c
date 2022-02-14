
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int HEVCDecoderConfigurationRecord ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int) ;





 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int const*,int**,int*) ;
 int FUNC_6 (int*,int ,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

int FUNC_10(AVIOContext *VAR_1, const uint8_t *VAR_2,
                       int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    uint8_t *VAR_6, *VAR_7, *VAR_8 = ((void*)0);
    HEVCDecoderConfigurationRecord VAR_9;

    FUNC_8(&VAR_9);

    if (VAR_3 < 6) {

        VAR_5 = VAR_0;
        goto end;
    } else if (*VAR_2 == 1) {

        FUNC_4(VAR_1, VAR_2, VAR_3);
        goto end;
    } else if (!(FUNC_0(VAR_2) == 1 || FUNC_1(VAR_2) == 1)) {

        VAR_5 = VAR_0;
        goto end;
    }

    VAR_5 = FUNC_5(VAR_2, &VAR_8, &VAR_3);
    if (VAR_5 < 0)
        goto end;

    VAR_6 = VAR_8;
    VAR_7 = VAR_8 + VAR_3;

    while (VAR_7 - VAR_6 > 4) {
        uint32_t VAR_10 = FUNC_2(FUNC_1(VAR_6), VAR_7 - VAR_6 - 4);
        uint8_t VAR_11 = (VAR_6[4] >> 1) & 0x3f;

        VAR_6 += 4;

        switch (VAR_11) {
        case 128:
        case 129:
        case 132:
        case 131:
        case 130:
            VAR_5 = FUNC_6(VAR_6, VAR_10, VAR_4, &VAR_9);
            if (VAR_5 < 0)
                goto end;
            break;
        default:
            break;
        }

        VAR_6 += VAR_10;
    }

    VAR_5 = FUNC_9(VAR_1, &VAR_9);

end:
    FUNC_7(&VAR_9);
    FUNC_3(VAR_8);
    return VAR_5;
}

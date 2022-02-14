
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int) ;



 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int const*,int**,int*) ;

int FUNC_7(AVIOContext *VAR_0, const uint8_t *VAR_1,
                       int VAR_2, int VAR_3, int *VAR_4)
{
    int VAR_5 = 0, VAR_6 = 0;
    uint8_t *VAR_7, *VAR_8, *VAR_9 = ((void*)0);

    if (!VAR_3) {
        VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_2);
        goto end;
    }

    VAR_6 = FUNC_6(VAR_1, &VAR_9, &VAR_2);
    if (VAR_6 < 0)
        goto end;

    VAR_6 = 0;
    VAR_7 = VAR_9;
    VAR_8 = VAR_9 + VAR_2;

    while (VAR_8 - VAR_7 > 4) {
        uint32_t VAR_10 = FUNC_1(FUNC_0(VAR_7), VAR_8 - VAR_7 - 4);
        uint8_t VAR_11 = (VAR_7[4] >> 1) & 0x3f;

        VAR_7 += 4;

        switch (VAR_11) {
        case 128:
        case 129:
        case 130:
            VAR_5++;
            break;
        default:
            VAR_6 += 4 + VAR_10;
            FUNC_3(VAR_0, VAR_10);
            FUNC_4(VAR_0, VAR_7, VAR_10);
            break;
        }

        VAR_7 += VAR_10;
    }

end:
    FUNC_2(VAR_9);
    if (VAR_4)
        *VAR_4 = VAR_5;
    return VAR_6;
}

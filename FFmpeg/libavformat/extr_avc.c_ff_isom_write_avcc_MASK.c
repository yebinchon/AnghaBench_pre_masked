
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int**) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int const*,int**,int*) ;

int FUNC_10(AVIOContext *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    AVIOContext *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    uint8_t *VAR_9 = ((void*)0), *VAR_10, *VAR_11 = ((void*)0);
    uint8_t *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    uint32_t VAR_14 = 0, VAR_15 = 0;
    int VAR_16, VAR_17 = 0, VAR_18 = 0;

    if (VAR_6 <= 6)
        return VAR_0;


    if (FUNC_1(VAR_5) != 0x00000001 &&
        FUNC_0(VAR_5) != 0x000001) {
        FUNC_8(VAR_4, VAR_5, VAR_6);
        return 0;
    }

    VAR_16 = FUNC_9(VAR_5, &VAR_9, &VAR_6);
    if (VAR_16 < 0)
        return VAR_16;
    VAR_11 = VAR_9;
    VAR_10 = VAR_9 + VAR_6;

    VAR_16 = FUNC_5(&VAR_7);
    if (VAR_16 < 0)
        goto fail;
    VAR_16 = FUNC_5(&VAR_8);
    if (VAR_16 < 0)
        goto fail;


    while (VAR_10 - VAR_9 > 4) {
        uint32_t VAR_19;
        uint8_t VAR_20;
        VAR_19 = FUNC_2(FUNC_1(VAR_9), VAR_10 - VAR_9 - 4);
        VAR_9 += 4;
        VAR_20 = VAR_9[0] & 0x1f;

        if (VAR_20 == 7) {
            VAR_17++;
            if (VAR_19 > VAR_3 || VAR_17 >= VAR_2) {
                VAR_16 = VAR_0;
                goto fail;
            }
            FUNC_7(VAR_7, VAR_19);
            FUNC_8(VAR_7, VAR_9, VAR_19);
        } else if (VAR_20 == 8) {
            VAR_18++;
            if (VAR_19 > VAR_3 || VAR_18 >= VAR_1) {
                VAR_16 = VAR_0;
                goto fail;
            }
            FUNC_7(VAR_8, VAR_19);
            FUNC_8(VAR_8, VAR_9, VAR_19);
        }

        VAR_9 += VAR_19;
    }
    VAR_14 = FUNC_4(VAR_7, &VAR_12);
    VAR_15 = FUNC_4(VAR_8, &VAR_13);

    if (VAR_14 < 6 || !VAR_15) {
        VAR_16 = VAR_0;
        goto fail;
    }

    FUNC_6(VAR_4, 1);
    FUNC_6(VAR_4, VAR_12[3]);
    FUNC_6(VAR_4, VAR_12[4]);
    FUNC_6(VAR_4, VAR_12[5]);
    FUNC_6(VAR_4, 0xff);
    FUNC_6(VAR_4, 0xe0 | VAR_17);

    FUNC_8(VAR_4, VAR_12, VAR_14);
    FUNC_6(VAR_4, VAR_18);
    FUNC_8(VAR_4, VAR_13, VAR_15);

fail:
    if (!VAR_12)
        FUNC_4(VAR_7, &VAR_12);
    if (!VAR_13)
        FUNC_4(VAR_8, &VAR_13);
    FUNC_3(VAR_12);
    FUNC_3(VAR_13);
    FUNC_3(VAR_11);

    return VAR_16;
}

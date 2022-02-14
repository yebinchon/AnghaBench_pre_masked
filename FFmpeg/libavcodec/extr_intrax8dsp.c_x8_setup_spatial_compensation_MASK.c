
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_6, uint8_t *VAR_7,
                                          ptrdiff_t VAR_8, int *VAR_9,
                                          int *VAR_10, int VAR_11)
{
    uint8_t *VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15, VAR_16;
    uint8_t VAR_17;

    if ((VAR_11 & 3) == 3) {
        *VAR_10 = 0x80 * (8 + 1 + 8 + 2);
        *VAR_9 = 0;
        FUNC_3(VAR_7, 0x80, 16 + 1 + 16 + 8);


        return;
    }

    VAR_15 = 256;
    VAR_16 = -1;

    VAR_13 = 0;

    if (!(VAR_11 & 1)) {
        VAR_12 = VAR_6 - 1;
        for (VAR_14 = 7; VAR_14 >= 0; VAR_14--) {
            VAR_17 = *(VAR_12 - 1);
            VAR_7[VAR_0 + VAR_14] = VAR_17;
            VAR_17 = *VAR_12;

            VAR_13 += VAR_17;
            VAR_15 = FUNC_1(VAR_15, VAR_17);
            VAR_16 = FUNC_0(VAR_16, VAR_17);
            VAR_7[VAR_1 + VAR_14] = VAR_17;

            VAR_12 += VAR_8;
        }
    }

    if (!(VAR_11 & 2)) {
        VAR_12 = VAR_6 - VAR_8;
        for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
            VAR_17 = *(VAR_12 + VAR_14);
            VAR_13 += VAR_17;
            VAR_15 = FUNC_1(VAR_15, VAR_17);
            VAR_16 = FUNC_0(VAR_16, VAR_17);
        }
        if (VAR_11 & 4) {
            FUNC_3(VAR_7 + VAR_4, VAR_17, 8);
            FUNC_2(VAR_7 + VAR_3, VAR_12, 8);
        } else {
            FUNC_2(VAR_7 + VAR_3, VAR_12, 16);
        }

        FUNC_2(VAR_7 + VAR_5, VAR_12 - VAR_8, 8);
    }

    if (VAR_11 & 3) {
        int VAR_18 = (VAR_13 + 4) >> 3;

        if (VAR_11 & 1)
            FUNC_3(VAR_7 + VAR_0, VAR_18, 8 + 8 + 1);
        else
            FUNC_3(VAR_7 + VAR_2, VAR_18, 1 + 16 + 8);

        VAR_13 += VAR_18 * 9;
    } else {

        uint8_t VAR_19 = *(VAR_6 - 1 - VAR_8);
        VAR_7[VAR_2] = VAR_19;
        VAR_13 += VAR_19;

    }
    *VAR_9 = VAR_16 - VAR_15;
    VAR_13 += *(VAR_7 + VAR_4) + *(VAR_7 + VAR_4 + 1);
    *VAR_10 = VAR_13;
}

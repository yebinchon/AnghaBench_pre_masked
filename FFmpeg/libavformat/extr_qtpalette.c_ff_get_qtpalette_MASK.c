
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

int FUNC_5(int VAR_6, AVIOContext *VAR_7, uint32_t *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    FUNC_3(VAR_7, 82, VAR_1);


    VAR_9 = FUNC_1(VAR_7);
    VAR_10 = VAR_9 & 0x1F;
    VAR_12 = VAR_9 & 0x20;


    VAR_11 = FUNC_1(VAR_7);


    if (VAR_12 && VAR_6 == VAR_0)
        return 0;


    if ((VAR_10 == 1 || VAR_10 == 2 || VAR_10 == 4 || VAR_10 == 8)) {
        uint32_t VAR_14, VAR_15, VAR_16;
        uint32_t VAR_17, VAR_18, VAR_19;



        if (VAR_12 && VAR_10 > 1 && VAR_11) {
            int VAR_20, VAR_21;

            VAR_14 = 1 << VAR_10;
            VAR_20 = 255;
            VAR_21 = 256 / (VAR_14 - 1);
            for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
                VAR_17 = VAR_18 = VAR_19 = VAR_20;
                VAR_8[VAR_13] = (0xFFU << 24) | (VAR_17 << 16) | (VAR_18 << 8) | (VAR_19);
                VAR_20 -= VAR_21;
                if (VAR_20 < 0)
                    VAR_20 = 0;
            }
        } else if (VAR_11) {



            const uint8_t *VAR_22;
            VAR_14 = 1 << VAR_10;
            if (VAR_10 == 1)
                VAR_22 = VAR_3;
            else if (VAR_10 == 2)
                VAR_22 = VAR_5;
            else if (VAR_10 == 4)
                VAR_22 = VAR_2;
            else
                VAR_22 = VAR_4;
            for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
                VAR_17 = VAR_22[VAR_13 * 3 + 0];
                VAR_18 = VAR_22[VAR_13 * 3 + 1];
                VAR_19 = VAR_22[VAR_13 * 3 + 2];
                VAR_8[VAR_13] = (0xFFU << 24) | (VAR_17 << 16) | (VAR_18 << 8) | (VAR_19);
            }
        } else {


            VAR_15 = FUNC_2(VAR_7);
            FUNC_1(VAR_7);
            VAR_16 = FUNC_1(VAR_7);
            if ((VAR_15 <= 255) && (VAR_16 <= 255)) {
                for (VAR_13 = VAR_15; VAR_13 <= VAR_16; VAR_13++) {



                    FUNC_4(VAR_7, 2);
                    VAR_17 = FUNC_0(VAR_7);
                    FUNC_0(VAR_7);
                    VAR_18 = FUNC_0(VAR_7);
                    FUNC_0(VAR_7);
                    VAR_19 = FUNC_0(VAR_7);
                    FUNC_0(VAR_7);
                    VAR_8[VAR_13] = (0xFFU << 24) | (VAR_17 << 16) | (VAR_18 << 8) | (VAR_19);
                }
            }
        }

        return 1;
    }

    return 0;
}

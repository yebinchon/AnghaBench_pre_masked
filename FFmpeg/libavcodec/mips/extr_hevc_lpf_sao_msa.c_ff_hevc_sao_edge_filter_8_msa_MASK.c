
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int,int *,int,int) ;
 int FUNC_1 (int *,int,int *,int,int *,int) ;
 int FUNC_2 (int *,int,int *,int,int *,int) ;
 int FUNC_3 (int *,int,int *,int,int *,int,int) ;
 int FUNC_4 (int *,int,int *,int,int *,int) ;
 int FUNC_5 (int *,int,int *,int,int *,int) ;
 int FUNC_6 (int *,int,int *,int,int *,int,int) ;
 int FUNC_7 (int *,int,int *,int,int *,int) ;
 int FUNC_8 (int *,int,int *,int,int *,int) ;
 int FUNC_9 (int *,int,int *,int,int *,int,int) ;
 int FUNC_10 (int *,int,int *,int,int *,int) ;
 int FUNC_11 (int *,int,int *,int,int *,int) ;

void FUNC_12(uint8_t *VAR_2, uint8_t *VAR_3,
                                   ptrdiff_t VAR_4,
                                   int16_t *VAR_5,
                                   int VAR_6, int VAR_7, int VAR_8)
{
    ptrdiff_t VAR_9 = (2 * VAR_1 + VAR_0) / sizeof(uint8_t);

    switch (VAR_6) {
    case 0:
        if (VAR_7 >> 4) {
            FUNC_0(VAR_2, VAR_4,
                                                        VAR_3, VAR_9,
                                                        VAR_5,
                                                        VAR_7 - (VAR_7 % 16),
                                                        VAR_8);
            VAR_2 += VAR_7 - (VAR_7 % 16);
            VAR_3 += VAR_7 - (VAR_7 % 16);
            VAR_7 %= 16;
        }

        if (VAR_7 >> 3) {
            FUNC_2(VAR_2, VAR_4,
                                                    VAR_3, VAR_9,
                                                    VAR_5, VAR_8);
            VAR_2 += 8;
            VAR_3 += 8;
            VAR_7 %= 8;
        }

        if (VAR_7) {
            FUNC_1(VAR_2, VAR_4,
                                                    VAR_3, VAR_9,
                                                    VAR_5, VAR_8);
        }
        break;

    case 1:
        if (VAR_7 >> 4) {
            FUNC_9(VAR_2, VAR_4,
                                                         VAR_3, VAR_9,
                                                         VAR_5,
                                                         VAR_7 - (VAR_7 % 16),
                                                         VAR_8);
            VAR_2 += VAR_7 - (VAR_7 % 16);
            VAR_3 += VAR_7 - (VAR_7 % 16);
            VAR_7 %= 16;
        }

        if (VAR_7 >> 3) {
            FUNC_11(VAR_2, VAR_4,
                                                     VAR_3, VAR_9,
                                                     VAR_5, VAR_8);
            VAR_2 += 8;
            VAR_3 += 8;
            VAR_7 %= 8;
        }

        if (VAR_7) {
            FUNC_10(VAR_2, VAR_4,
                                                     VAR_3, VAR_9,
                                                     VAR_5, VAR_8);
        }
        break;

    case 2:
        if (VAR_7 >> 4) {
            FUNC_6(VAR_2, VAR_4,
                                                         VAR_3, VAR_9,
                                                         VAR_5,
                                                         VAR_7 - (VAR_7 % 16),
                                                         VAR_8);
            VAR_2 += VAR_7 - (VAR_7 % 16);
            VAR_3 += VAR_7 - (VAR_7 % 16);
            VAR_7 %= 16;
        }

        if (VAR_7 >> 3) {
            FUNC_8(VAR_2, VAR_4,
                                                     VAR_3, VAR_9,
                                                     VAR_5, VAR_8);
            VAR_2 += 8;
            VAR_3 += 8;
            VAR_7 %= 8;
        }

        if (VAR_7) {
            FUNC_7(VAR_2, VAR_4,
                                                     VAR_3, VAR_9,
                                                     VAR_5, VAR_8);
        }
        break;

    case 3:
        if (VAR_7 >> 4) {
            FUNC_3(VAR_2, VAR_4,
                                                          VAR_3, VAR_9,
                                                          VAR_5,
                                                          VAR_7 - (VAR_7 % 16),
                                                          VAR_8);
            VAR_2 += VAR_7 - (VAR_7 % 16);
            VAR_3 += VAR_7 - (VAR_7 % 16);
            VAR_7 %= 16;
        }

        if (VAR_7 >> 3) {
            FUNC_5(VAR_2, VAR_4,
                                                      VAR_3, VAR_9,
                                                      VAR_5, VAR_8);
            VAR_2 += 8;
            VAR_3 += 8;
            VAR_7 %= 8;
        }

        if (VAR_7) {
            FUNC_4(VAR_2, VAR_4,
                                                      VAR_3, VAR_9,
                                                      VAR_5, VAR_8);
        }
        break;
    }
}

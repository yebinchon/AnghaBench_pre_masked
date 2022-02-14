
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void* const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_1, uint8_t *VAR_2, int VAR_3,
                                   const uint8_t **VAR_4, int VAR_5,
                                   int VAR_6, uint8_t *VAR_7, int VAR_8)
{
    GetBitContext VAR_9;

    int VAR_10;
    int VAR_11;
    int VAR_12 = VAR_8;

    FUNC_4(&VAR_9, *VAR_4, VAR_5 << 3);

    VAR_2 += VAR_8;

    while (FUNC_3(&VAR_9) < VAR_5 << 3 && VAR_12 < VAR_3) {
        VAR_10 = FUNC_1(&VAR_9, 4);

        if (VAR_10) {
            if (VAR_6 != 1 || VAR_10 != 1) {
                if (VAR_7)
                    *VAR_2++ = VAR_7[VAR_10];
                else
                    *VAR_2++ = VAR_10;
            }
            VAR_12++;
        } else {
            VAR_10 = FUNC_2(&VAR_9);
            if (VAR_10 == 0) {
                VAR_11 = FUNC_1(&VAR_9, 3);

                if (VAR_11 == 0) {
                    (*VAR_4) += (FUNC_3(&VAR_9) + 7) >> 3;
                    return VAR_12;
                }

                VAR_11 += 2;

                if (VAR_7)
                    VAR_10 = VAR_7[0];
                else
                    VAR_10 = 0;

                while (VAR_11-- > 0 && VAR_12 < VAR_3) {
                    *VAR_2++ = VAR_10;
                    VAR_12++;
                }
            } else {
                VAR_10 = FUNC_2(&VAR_9);
                if (VAR_10 == 0) {
                    VAR_11 = FUNC_1(&VAR_9, 2) + 4;
                    VAR_10 = FUNC_1(&VAR_9, 4);

                    if (VAR_6 == 1 && VAR_10 == 1)
                        VAR_12 += VAR_11;
                    else {
                        if (VAR_7)
                            VAR_10 = VAR_7[VAR_10];
                        while (VAR_11-- > 0 && VAR_12 < VAR_3) {
                            *VAR_2++ = VAR_10;
                            VAR_12++;
                        }
                    }
                } else {
                    VAR_10 = FUNC_1(&VAR_9, 2);
                    if (VAR_10 == 2) {
                        VAR_11 = FUNC_1(&VAR_9, 4) + 9;
                        VAR_10 = FUNC_1(&VAR_9, 4);

                        if (VAR_6 == 1 && VAR_10 == 1)
                            VAR_12 += VAR_11;
                        else {
                            if (VAR_7)
                                VAR_10 = VAR_7[VAR_10];
                            while (VAR_11-- > 0 && VAR_12 < VAR_3) {
                                *VAR_2++ = VAR_10;
                                VAR_12++;
                            }
                        }
                    } else if (VAR_10 == 3) {
                        VAR_11 = FUNC_1(&VAR_9, 8) + 25;
                        VAR_10 = FUNC_1(&VAR_9, 4);

                        if (VAR_6 == 1 && VAR_10 == 1)
                            VAR_12 += VAR_11;
                        else {
                            if (VAR_7)
                                VAR_10 = VAR_7[VAR_10];
                            while (VAR_11-- > 0 && VAR_12 < VAR_3) {
                                *VAR_2++ = VAR_10;
                                VAR_12++;
                            }
                        }
                    } else if (VAR_10 == 1) {
                        if (VAR_7)
                            VAR_10 = VAR_7[0];
                        else
                            VAR_10 = 0;
                        VAR_11 = 2;
                        while (VAR_11-- > 0 && VAR_12 < VAR_3) {
                            *VAR_2++ = VAR_10;
                            VAR_12++;
                        }
                    } else {
                        if (VAR_7)
                            VAR_10 = VAR_7[0];
                        else
                            VAR_10 = 0;
                        *VAR_2++ = VAR_10;
                        VAR_12 ++;
                    }
                }
            }
        }
    }

    if (FUNC_1(&VAR_9, 8))
        FUNC_0(VAR_1, VAR_0, "line overflow\n");

    (*VAR_4) += (FUNC_3(&VAR_9) + 7) >> 3;

    return VAR_12;
}

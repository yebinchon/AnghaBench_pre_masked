
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buffer_start; scalar_t__ buffer_end; } ;
typedef TYPE_1__ PutByteContext ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(GetByteContext *VAR_1, PutByteContext *VAR_2)
{
    unsigned VAR_3 = 0, VAR_4 = 1, VAR_5 = 0;
    int VAR_6, VAR_7, VAR_8;

    while (FUNC_1(VAR_1) > 0) {
        GetByteContext VAR_9;

        while (FUNC_1(VAR_1) > 0) {
            if (VAR_4) {
                VAR_4 = 0;
                if (FUNC_5(VAR_1) > 17) {
                    VAR_7 = FUNC_0(VAR_1) - 17;
                    if (VAR_7 < 4) {
                        do {
                            FUNC_6(VAR_2, FUNC_0(VAR_1));
                            --VAR_7;
                        } while (VAR_7);
                        VAR_5 = FUNC_5(VAR_1);
                        continue;
                    } else {
                        do {
                            FUNC_6(VAR_2, FUNC_0(VAR_1));
                            --VAR_7;
                        } while (VAR_7);
                        VAR_5 = FUNC_5(VAR_1);
                        if (VAR_5 < 0x10) {
                            FUNC_9(VAR_1, 1);
                            VAR_8 = - (VAR_5 >> 2) - 4 * FUNC_0(VAR_1) - 2049;

                            FUNC_4(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
                            FUNC_8(&VAR_9, FUNC_11(VAR_2) + VAR_8, VAR_0);

                            FUNC_6(VAR_2, FUNC_0(&VAR_9));
                            FUNC_6(VAR_2, FUNC_0(&VAR_9));
                            FUNC_6(VAR_2, FUNC_0(&VAR_9));
                            VAR_7 = VAR_5 & 3;
                            if (!VAR_7) {
                                VAR_3 = 1;
                            } else {
                                do {
                                    FUNC_6(VAR_2, FUNC_0(VAR_1));
                                    --VAR_7;
                                } while (VAR_7);
                                VAR_5 = FUNC_5(VAR_1);
                            }
                            continue;
                        }
                    }
                    VAR_3 = 0;
                }
                VAR_3 = 1;
            }
            if (VAR_3) {
                VAR_3 = 0;
                VAR_5 = FUNC_5(VAR_1);
                if (VAR_5 < 0x10) {
                    FUNC_9(VAR_1, 1);
                    if (!VAR_5) {
                        if (!FUNC_5(VAR_1)) {
                            do {
                                FUNC_9(VAR_1, 1);
                                VAR_5 += 255;
                            } while (!FUNC_5(VAR_1) && FUNC_1(VAR_1) > 0);
                        }
                        VAR_5 += FUNC_0(VAR_1) + 15;
                    }
                    FUNC_7(VAR_2, FUNC_3(VAR_1));
                    for (VAR_6 = VAR_5 - 1; VAR_6 > 0; --VAR_6)
                        FUNC_6(VAR_2, FUNC_0(VAR_1));
                    VAR_5 = FUNC_5(VAR_1);
                    if (VAR_5 < 0x10) {
                        FUNC_9(VAR_1, 1);
                        VAR_8 = - (VAR_5 >> 2) - 4 * FUNC_0(VAR_1) - 2049;

                        FUNC_4(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
                        FUNC_8(&VAR_9, FUNC_11(VAR_2) + VAR_8, VAR_0);

                        FUNC_6(VAR_2, FUNC_0(&VAR_9));
                        FUNC_6(VAR_2, FUNC_0(&VAR_9));
                        FUNC_6(VAR_2, FUNC_0(&VAR_9));
                        VAR_7 = VAR_5 & 3;
                        if (!VAR_7) {
                            VAR_3 = 1;
                        } else {
                            do {
                                FUNC_6(VAR_2, FUNC_0(VAR_1));
                                --VAR_7;
                            } while (VAR_7);
                            VAR_5 = FUNC_5(VAR_1);
                        }
                        continue;
                    }
                }
            }

            if (VAR_5 >= 0x40) {
                FUNC_9(VAR_1, 1);
                VAR_8 = - ((VAR_5 >> 2) & 7) - 1 - 8 * FUNC_0(VAR_1);
                VAR_7 = (VAR_5 >> 5) - 1;

                FUNC_4(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
                FUNC_8(&VAR_9, FUNC_11(VAR_2) + VAR_8, VAR_0);

                FUNC_6(VAR_2, FUNC_0(&VAR_9));
                FUNC_6(VAR_2, FUNC_0(&VAR_9));
                do {
                    FUNC_6(VAR_2, FUNC_0(&VAR_9));
                    --VAR_7;
                } while (VAR_7);

                VAR_7 = VAR_5 & 3;

                if (!VAR_7) {
                    VAR_3 = 1;
                } else {
                    do {
                        FUNC_6(VAR_2, FUNC_0(VAR_1));
                        --VAR_7;
                    } while (VAR_7);
                    VAR_5 = FUNC_5(VAR_1);
                }
                continue;
            } else if (VAR_5 < 0x20) {
                break;
            }
            VAR_7 = VAR_5 & 0x1F;
            FUNC_9(VAR_1, 1);
            if (!VAR_7) {
                if (!FUNC_5(VAR_1)) {
                    do {
                        FUNC_9(VAR_1, 1);
                        VAR_7 += 255;
                    } while (!FUNC_5(VAR_1) && FUNC_1(VAR_1) > 0);
                }
                VAR_7 += FUNC_0(VAR_1) + 31;
            }
            VAR_6 = FUNC_2(VAR_1);
            VAR_8 = - (VAR_6 >> 2) - 1;

            FUNC_4(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
            FUNC_8(&VAR_9, FUNC_11(VAR_2) + VAR_8, VAR_0);

            if (VAR_7 < 6 || FUNC_11(VAR_2) - FUNC_10(&VAR_9) < 4) {
                FUNC_6(VAR_2, FUNC_0(&VAR_9));
                FUNC_6(VAR_2, FUNC_0(&VAR_9));
                do {
                    FUNC_6(VAR_2, FUNC_0(&VAR_9));
                    --VAR_7;
                } while (VAR_7);
            } else {
                FUNC_7(VAR_2, FUNC_3(&VAR_9));
                for (VAR_7 = VAR_7 - 2; VAR_7; --VAR_7)
                    FUNC_6(VAR_2, FUNC_0(&VAR_9));
            }
            VAR_7 = VAR_6 & 3;
            if (!VAR_7) {
                VAR_3 = 1;
            } else {
                do {
                    FUNC_6(VAR_2, FUNC_0(VAR_1));
                    --VAR_7;
                } while (VAR_7);
                VAR_5 = FUNC_5(VAR_1);
            }
        }
        FUNC_9(VAR_1, 1);
        if (VAR_5 < 0x10) {
            VAR_8 = -(VAR_5 >> 2) - 1 - 4 * FUNC_0(VAR_1);

            FUNC_4(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
            FUNC_8(&VAR_9, FUNC_11(VAR_2) + VAR_8, VAR_0);

            FUNC_6(VAR_2, FUNC_0(&VAR_9));
            FUNC_6(VAR_2, FUNC_0(&VAR_9));
            VAR_7 = VAR_5 & 3;
            if (!VAR_7) {
                VAR_3 = 1;
            } else {
                do {
                    FUNC_6(VAR_2, FUNC_0(VAR_1));
                    --VAR_7;
                } while (VAR_7);
                VAR_5 = FUNC_5(VAR_1);
            }
            continue;
        }
        VAR_7 = VAR_5 & 7;
        if (!VAR_7) {
            if (!FUNC_5(VAR_1)) {
                do {
                    FUNC_9(VAR_1, 1);
                    VAR_7 += 255;
                } while (!FUNC_5(VAR_1) && FUNC_1(VAR_1) > 0);
            }
            VAR_7 += FUNC_0(VAR_1) + 7;
        }
        VAR_6 = FUNC_2(VAR_1);
        VAR_8 = FUNC_11(VAR_2) - 2048 * (VAR_5 & 8);
        VAR_8 = VAR_8 - (VAR_6 >> 2);
        if (VAR_8 == FUNC_11(VAR_2))
            break;

        VAR_8 = VAR_8 - 0x4000;
        FUNC_4(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
        FUNC_8(&VAR_9, VAR_8, VAR_0);

        if (VAR_7 < 6 || FUNC_11(VAR_2) - FUNC_10(&VAR_9) < 4) {
            FUNC_6(VAR_2, FUNC_0(&VAR_9));
            FUNC_6(VAR_2, FUNC_0(&VAR_9));
            do {
                FUNC_6(VAR_2, FUNC_0(&VAR_9));
                --VAR_7;
            } while (VAR_7);
        } else {
            FUNC_7(VAR_2, FUNC_3(&VAR_9));
            for (VAR_7 = VAR_7 - 2; VAR_7; --VAR_7)
                FUNC_6(VAR_2, FUNC_0(&VAR_9));
        }

        VAR_7 = VAR_6 & 3;
        if (!VAR_7) {
            VAR_3 = 1;
        } else {
            do {
                FUNC_6(VAR_2, FUNC_0(VAR_1));
                --VAR_7;
            } while (VAR_7);
            VAR_5 = FUNC_5(VAR_1);
        }
    }

    return 0;
}

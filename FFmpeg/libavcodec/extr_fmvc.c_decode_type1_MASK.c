
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
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(GetByteContext *VAR_1, PutByteContext *VAR_2)
{
    unsigned VAR_3 = 0, VAR_4;
    int VAR_5 = 0;
    int VAR_6, VAR_7;

    while (FUNC_1(VAR_1) > 0) {
        GetByteContext VAR_8;

        while (FUNC_1(VAR_1) > 0) {
            while (FUNC_1(VAR_1) > 0) {
                VAR_3 = FUNC_0(VAR_1);
                VAR_5 = VAR_3 >= 0x20;
                if (VAR_5)
                    break;
                if (VAR_3)
                    break;
                VAR_3 = FUNC_0(VAR_1);
                if (VAR_3 < 0xF8) {
                    VAR_3 += 32;
                    break;
                }
                VAR_6 = VAR_3 - 0xF8;
                if (VAR_6) {
                    VAR_4 = 256;
                    do {
                        VAR_4 *= 2;
                        --VAR_6;
                    } while (VAR_6);
                } else {
                    VAR_4 = 280;
                }
                do {
                    FUNC_6(VAR_2, FUNC_2(VAR_1));
                    FUNC_6(VAR_2, FUNC_2(VAR_1));
                    VAR_4 -= 8;
                } while (VAR_4 && FUNC_1(VAR_1) > 0);
            }

            if (!VAR_5) {
                do {
                    FUNC_5(VAR_2, FUNC_0(VAR_1));
                    --VAR_3;
                } while (VAR_3 && FUNC_1(VAR_1) > 0);

                while (FUNC_1(VAR_1) > 0) {
                    GetByteContext VAR_9;

                    VAR_3 = FUNC_0(VAR_1);
                    if (VAR_3 >= 0x20)
                        break;
                    FUNC_3(&VAR_9, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);

                    VAR_7 = -(VAR_3 | 32 * FUNC_0(VAR_1)) - 1;
                    FUNC_7(&VAR_9, FUNC_10(VAR_2) + VAR_7, VAR_0);
                    FUNC_5(VAR_2, FUNC_0(&VAR_9));
                    FUNC_5(VAR_2, FUNC_0(&VAR_9));
                    FUNC_5(VAR_2, FUNC_0(&VAR_9));
                    FUNC_5(VAR_2, FUNC_0(VAR_1));
                }
            }
            VAR_5 = 0;
            if (VAR_3 < 0x40)
                break;
            FUNC_3(&VAR_8, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
            VAR_7 = (-((VAR_3 & 0x1F) | 32 * FUNC_0(VAR_1)) - 1);
            FUNC_7(&VAR_8, FUNC_10(VAR_2) + VAR_7, VAR_0);
            FUNC_5(VAR_2, FUNC_0(&VAR_8));
            FUNC_5(VAR_2, FUNC_0(&VAR_8));
            VAR_4 = (VAR_3 >> 5) - 1;
            do {
                FUNC_5(VAR_2, FUNC_0(&VAR_8));
                --VAR_4;
            } while (VAR_4 && FUNC_1(&VAR_8) > 0);
        }
        VAR_4 = VAR_3 & 0x1F;
        if (!VAR_4) {
            if (!FUNC_4(VAR_1)) {
                do {
                    FUNC_8(VAR_1, 1);
                    VAR_4 += 255;
                } while (!FUNC_4(VAR_1) && FUNC_1(VAR_1) > 0);
            }
            VAR_4 += FUNC_0(VAR_1) + 31;
        }
        VAR_7 = -FUNC_0(VAR_1);
        FUNC_3(&VAR_8, VAR_2->buffer_start, VAR_2->buffer_end - VAR_2->buffer_start);
        FUNC_7(&VAR_8, FUNC_10(VAR_2) + VAR_7 - (FUNC_0(VAR_1) << 8), VAR_0);
        if (FUNC_10(VAR_2) == FUNC_9(&VAR_8))
            break;
        if (VAR_4 < 5 || FUNC_10(VAR_2) - FUNC_9(&VAR_8) < 4) {
            FUNC_5(VAR_2, FUNC_0(&VAR_8));
            FUNC_5(VAR_2, FUNC_0(&VAR_8));
            FUNC_5(VAR_2, FUNC_0(&VAR_8));
        } else {
            FUNC_6(VAR_2, FUNC_2(&VAR_8));
            VAR_4--;
        }
        do {
            FUNC_5(VAR_2, FUNC_0(&VAR_8));
            VAR_4--;
        } while (VAR_4 && FUNC_1(&VAR_8) > 0);
    }

    return 0;
}

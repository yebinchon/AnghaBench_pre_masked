
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int table; } ;
struct TYPE_3__ {int table; } ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *,char*,int,int) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int *,int *,int*,int**,int const*,int*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_5, GetBitContext *VAR_6,
                                 unsigned int VAR_7, int *VAR_8,
                                 const int *VAR_9, const int *VAR_10)
{
    int VAR_11 = 0, VAR_12 = 0, VAR_13;
    int VAR_14 = *VAR_10++;
    unsigned int VAR_15 = 0, VAR_16 = 0;

    while (VAR_15 < VAR_7) {
        int VAR_17 = FUNC_4(VAR_6, VAR_3.table, 9, 1);
        if (VAR_17 == -1) {
            FUNC_0(VAR_5, VAR_2, "Incorrect mode VLC\n");
            return VAR_0;
        }
        if (!VAR_17) {
            if (VAR_14 < VAR_7)
                VAR_14 += *VAR_10++;
            VAR_16 = VAR_14 - VAR_15;
            VAR_15 = VAR_14;
            if (VAR_14 < VAR_7)
                VAR_14 += *VAR_10++;
            if (VAR_15 > VAR_7) {
                FUNC_0(VAR_5, VAR_2, "Run went out of bounds\n");
                return VAR_0;
            }
            VAR_12 += VAR_16;
        } else if (VAR_17 == 1) {
            int VAR_18;
            for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
                VAR_16 = 0;
                for (;;) {
                    VAR_13 = FUNC_4(VAR_6, VAR_4[VAR_11].table, 9, 2);
                    if (VAR_13 == -1) {
                        FUNC_0(VAR_5, VAR_2, "Incorrect code\n");
                        return VAR_0;
                    }
                    VAR_16 += VAR_13;
                    if (VAR_13 < 64)
                        break;
                }
                *VAR_8++ = VAR_16 + VAR_12;
                if (VAR_8 >= VAR_9) {
                    FUNC_0(VAR_5, VAR_2, "Run overrun\n");
                    return VAR_0;
                }
                VAR_12 = 0;
                VAR_15 += VAR_16;
                if (VAR_15 > VAR_7 || VAR_16 > VAR_7) {
                    FUNC_0(VAR_5, VAR_2, "Run went out of bounds\n");
                    return VAR_0;
                }
                VAR_11 = !VAR_11;
            }
        } else if (VAR_17 == 9 || VAR_17 == 10) {
            int VAR_19 = FUNC_3(VAR_6, 3);
            if (VAR_17 == 9 && VAR_19 == 7) {
                int VAR_20;
                int VAR_21 = VAR_7 - VAR_15;

                if (VAR_12) {
                    FUNC_0(VAR_5, VAR_2, "saved run %d on entering uncompressed mode\n", VAR_12);
                    return VAR_0;
                }
                VAR_20 = FUNC_2(VAR_5, VAR_6, &VAR_21, &VAR_8, VAR_9, &VAR_11);
                VAR_15 = VAR_7 - VAR_21;
                if (VAR_20 < 0) {
                    return VAR_20;
                } else if (VAR_20)
                    break;
            } else {
                FUNC_1(VAR_5, "Special mode %d xxx=%d support", VAR_17, VAR_19);
                return VAR_1;
            }
        } else {
            VAR_16 = VAR_14 - VAR_15 + (VAR_17 - 5);
            VAR_14 -= *--VAR_10;
            VAR_15 += VAR_16;
            if (VAR_15 > VAR_7 || VAR_16 > VAR_7) {
                FUNC_0(VAR_5, VAR_2, "Run went out of bounds\n");
                return VAR_0;
            }
            *VAR_8++ = VAR_16 + VAR_12;
            if (VAR_8 >= VAR_9) {
                FUNC_0(VAR_5, VAR_2, "Run overrun\n");
                return VAR_0;
            }
            VAR_12 = 0;
            VAR_11 = !VAR_11;
        }

        while (VAR_15 < VAR_7 && VAR_14 <= VAR_15) {
            VAR_14 += *VAR_10++;
            VAR_14 += *VAR_10++;
        }
    }
    *VAR_8++ = VAR_12;
    if (VAR_12) {
        if (VAR_8 >= VAR_9) {
            FUNC_0(VAR_5, VAR_2, "Run overrun\n");
            return -1;
        }
        *VAR_8++ = 0;
    }
    return 0;
}

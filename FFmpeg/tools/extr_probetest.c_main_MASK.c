
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; unsigned int buf_size; char* filename; int member_0; } ;
typedef int PutBitContext ;
typedef TYPE_1__ AVProbeData ;
typedef int AVLFG ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int* FUNC_4 (int*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int*,unsigned int) ;
 int FUNC_8 (int*,int ,scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_11 (int *,int,unsigned int) ;
 int FUNC_12 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (char*,char*) ;

int FUNC_14(int VAR_4, char **VAR_5)
{
    unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    AVProbeData VAR_11 = { 0 };
    AVLFG VAR_12;
    PutBitContext VAR_13;
    int VAR_14= 4097;
    int VAR_15 = 65537;
    int VAR_16;

    for (VAR_16 = VAR_7 = 1; VAR_7<VAR_4; VAR_7++) {
        if (!FUNC_13(VAR_5[VAR_7], "-f") && VAR_7+1<VAR_4 && !VAR_2) {
            VAR_2 = VAR_5[++VAR_7];
        } else if (FUNC_12(VAR_5[VAR_7])>0 && VAR_16 == 1) {
            VAR_14 = FUNC_12(VAR_5[VAR_7]);
            VAR_16++;
        } else if (FUNC_12(VAR_5[VAR_7])>0 && VAR_16 == 2) {
            VAR_15 = FUNC_12(VAR_5[VAR_7]);
            VAR_16++;
        } else {
            FUNC_6(VAR_3, "probetest [-f <input format>] [<retry_count> [<max_size>]]\n");
            return 1;
        }
    }

    if (VAR_15 > 1000000000U/8) {
        FUNC_6(VAR_3, "max_size out of bounds\n");
        return 1;
    }

    if (VAR_14 > 1000000000U) {
        FUNC_6(VAR_3, "retry_count out of bounds\n");
        return 1;
    }

    FUNC_3(&VAR_12, 0xdeadbeef);

    VAR_11.buf = ((void*)0);
    for (VAR_9 = 1; VAR_9 < VAR_15; VAR_9 *= 2) {
        VAR_11.buf_size = VAR_9;
        VAR_11.buf = FUNC_4(VAR_11.buf, VAR_9 + VAR_0);
        VAR_11.filename = "";

        if (!VAR_11.buf) {
            FUNC_6(VAR_3, "out of memory\n");
            return 1;
        }

        FUNC_8(VAR_11.buf, 0, VAR_9 + VAR_0);

        FUNC_6(VAR_3, "testing size=%d\n", VAR_9);

        for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10 += FUNC_1(VAR_9, 32)) {
            for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
                for (VAR_6 = 0; VAR_6 < 4096; VAR_6++) {
                    unsigned VAR_17 = 0;
                    FUNC_7(&VAR_13, VAR_11.buf, VAR_9);
                    switch (VAR_8) {
                    case 0:
                        for (VAR_7 = 0; VAR_7 < VAR_9 * 8; VAR_7++)
                            FUNC_11(&VAR_13, 1, (FUNC_2(&VAR_12) & 0xFFFFFFFF) > VAR_6 << 20);
                        break;
                    case 1:
                        for (VAR_7 = 0; VAR_7 < VAR_9 * 8; VAR_7++) {
                            unsigned int VAR_18 = VAR_17 ? VAR_6 & 0x3F : (VAR_6 >> 6);
                            unsigned int VAR_19 = (FUNC_2(&VAR_12) & 0xFFFFFFFF) > VAR_18 << 26;
                            FUNC_11(&VAR_13, 1, VAR_19);
                            VAR_17 = VAR_19;
                        }
                        break;
                    case 2:
                        for (VAR_7 = 0; VAR_7 < VAR_9 * 8; VAR_7++) {
                            unsigned int VAR_20 = (VAR_6 >> (VAR_17 * 3)) & 7;
                            unsigned int VAR_21 = (FUNC_2(&VAR_12) & 0xFFFFFFFF) > VAR_20 << 29;
                            FUNC_11(&VAR_13, 1, VAR_21);
                            VAR_17 = (2 * VAR_17 + VAR_21) & 3;
                        }
                        break;
                    case 3:
                        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
                            int VAR_22 = 0;
                            while (VAR_6 & 63) {
                                VAR_22 = (FUNC_2(&VAR_12) & 0xFFFFFFFF) >> 24;
                                if (VAR_22 >= 'a' && VAR_22 <= 'z' && (VAR_6 & 1))
                                    break;
                                else if (VAR_22 >= 'A' && VAR_22 <= 'Z' && (VAR_6 & 2))
                                    break;
                                else if (VAR_22 >= '0' && VAR_22 <= '9' && (VAR_6 & 4))
                                    break;
                                else if (VAR_22 == ' ' && (VAR_6 & 8))
                                    break;
                                else if (VAR_22 == 0 && (VAR_6 & 16))
                                    break;
                                else if (VAR_22 == 1 && (VAR_6 & 32))
                                    break;
                            }
                            VAR_11.buf[VAR_7] = VAR_22;
                        }
                    }
                    FUNC_5(&VAR_13);
                    FUNC_10(&VAR_11, VAR_8, VAR_6, VAR_9);
                }
            }
        }
    }
    if(FUNC_0())
        FUNC_9();
    return VAR_1;
}

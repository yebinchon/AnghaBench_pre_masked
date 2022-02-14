
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int tagbuf ;
typedef int int8_t ;
typedef int const int16_t ;
struct TYPE_3__ {int mask; int test; char* format; } ;
typedef int Q68State ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char const*,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

const char *FUNC_9(Q68State *VAR_1, uint32_t VAR_2,
                            int *VAR_3)
{
    const uint32_t VAR_4 = VAR_2;
    static char VAR_5[1000];

    if (VAR_2 % 2 != 0) {
        if (VAR_3) {
            *VAR_3 = 1;
        }
        return "???";
    }

    uint16_t VAR_6 = FUNC_3(VAR_1, VAR_2);
    VAR_2 += 2;
    const char *VAR_7 = ((void*)0);
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_0); VAR_8++) {
        if ((VAR_6 & VAR_0[VAR_8].mask) == VAR_0[VAR_8].test) {
            VAR_7 = VAR_0[VAR_8].format;
            break;
        }
    }
    if (!VAR_7) {
        if (VAR_3) {
            *VAR_3 = 1;
        }
        return "???";
    }

    int VAR_9 = 0;
    int VAR_10 = 0;
    while (VAR_7[VAR_10] != 0) {
        if (VAR_7[VAR_10] == '<') {
            char VAR_11[100];
            int VAR_12 = VAR_10+1;
            for (; VAR_7[VAR_12] != 0 && VAR_7[VAR_12] != '>'; VAR_12++) {
                if (VAR_12 - (VAR_10+1) >= sizeof(VAR_11)) {
                    break;
                }
            }
            FUNC_6(VAR_11, &VAR_7[VAR_10+1], VAR_12 - (VAR_10+1));
            VAR_11[VAR_12 - (VAR_10+1)] = 0;
            if (VAR_7[VAR_12] != 0) {
                VAR_12++;
            }
            VAR_10 = VAR_12;
            if (FUNC_8(VAR_11,"ea",2) == 0) {
                int VAR_13, VAR_14;
                char VAR_15;
                if (FUNC_8(VAR_11,"ea2",3) == 0) {
                    VAR_13 = VAR_6>>6 & 7;
                    VAR_14 = VAR_6>>9 & 7;
                    VAR_15 = VAR_11[4];
                } else {
                    VAR_13 = VAR_6>>3 & 7;
                    VAR_14 = VAR_6>>0 & 7;
                    VAR_15 = VAR_11[3];
                }
                switch (VAR_13) {
                  case 0:
                    do { VAR_9 += snprintf(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "D%d" , VAR_14); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                    break;
                  case 1:
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "A%d" , VAR_14); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                    break;
                  case 2:
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "(A%d)" , VAR_14); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                    break;
                  case 3:
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "(A%d)+" , VAR_14); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                    break;
                  case 4:
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "-(A%d)" , VAR_14); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                    break;
                  case 5: {
                    int16_t VAR_16 = FUNC_2(VAR_1, VAR_2);
                    VAR_2 += 2;
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d(A%d)" , VAR_16, VAR_14); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                    break;
                  }
                  case 6: {
                    uint16_t VAR_17 = FUNC_3(VAR_1, VAR_2);
                    VAR_2 += 2;
                    const int VAR_18 = VAR_17>>15;
                    const int VAR_19 = VAR_17>>12 & 7;
                    const int VAR_20 = VAR_17>>11;
                    const int8_t VAR_21 = VAR_17 & 0xFF;
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d(A%d,%c%d.%c)" , VAR_21, VAR_14, VAR_18 ? 'A' : 'D', VAR_19, VAR_20 ? 'l' : 'w'); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);

                    break;
                  }
                  case 7:
                    switch (VAR_14) {
                      case 0: {
                        const uint16_t VAR_22 = FUNC_3(VAR_1, VAR_2);
                        VAR_2 += 2;
                        do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "($%X).w" , VAR_22); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                        break;
                      }
                      case 1: {
                        const uint32_t VAR_23 = FUNC_4(VAR_1, VAR_2);
                        VAR_2 += 4;
                        do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "($%X).l" , VAR_23); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                        break;
                      }
                      case 2: {
                        int16_t VAR_24 = FUNC_2(VAR_1, VAR_2);
                        VAR_2 += 2;
                        do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "$%X(PC)" , (VAR_4+2) + VAR_24); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                        break;
                      }
                      case 3: {
                        uint16_t VAR_25 = FUNC_3(VAR_1, VAR_2);
                        VAR_2 += 2;
                        const int VAR_26 = VAR_25>>15;
                        const int VAR_27 = VAR_25>>12 & 7;
                        const int VAR_28 = VAR_25>>11;
                        const int8_t VAR_29 = VAR_25 & 0xFF;
                        do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "$%X(PC,%c%d.%c)" , (VAR_4+2) + VAR_29, VAR_26 ? 'A' : 'D', VAR_27, VAR_28 ? 'l' : 'w'); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);

                        break;
                      }
                      case 4: {
                        uint32_t VAR_30;
                        if (VAR_15 == 'l') {
                            VAR_30 = FUNC_4(VAR_1, VAR_2);
                            VAR_2 += 4;
                        } else {
                            VAR_30 = FUNC_3(VAR_1, VAR_2);
                            VAR_2 += 2;
                        }
                        do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "#%s%X" , VAR_30<10 ? "" : "$", VAR_30); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                        break;
                      }
                      default:
                        do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "???"); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                        break;
                    }
                }
            } else if (FUNC_7(VAR_11,"reg") == 0) {
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , VAR_6>>9 & 7); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_7(VAR_11,"reg0") == 0) {
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , VAR_6>>0 & 7); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_7(VAR_11,"count") == 0) {
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , VAR_6>>9 & 7 ?: 8); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_7(VAR_11,"trap") == 0) {
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , VAR_6>>0 & 15); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_7(VAR_11,"quick8") == 0) {
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , (int8_t)(VAR_6 & 0xFF)); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_8(VAR_11,"imm8",4) == 0) {
                uint8_t VAR_31 = FUNC_3(VAR_1, VAR_2);
                VAR_31 &= 0xFF;
                VAR_2 += 2;
                if (VAR_11[4] == 'd') {
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , VAR_31); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                } else if (VAR_11[4] == 'x') {
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "$%02X" , VAR_31); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                } else {
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%s%X" , VAR_31<10 ? "" : "$", VAR_31); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                }
            } else if (FUNC_8(VAR_11,"imm16",5) == 0) {
                uint16_t VAR_32 = FUNC_3(VAR_1, VAR_2);
                VAR_2 += 2;
                if (VAR_11[5] == 'd') {
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%d" , VAR_32); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                } else if (VAR_11[5] == 'x') {
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "$%04X" , VAR_32); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                } else {
                    do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%s%X" , VAR_32<10 ? "" : "$", VAR_32); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
                }
            } else if (FUNC_7(VAR_11,"pcrel8") == 0) {
                int8_t VAR_33 = VAR_6 & 0xFF;
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "$%X" , (VAR_4+2) + VAR_33); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_7(VAR_11,"pcrel16") == 0) {
                int16_t VAR_34 = FUNC_2(VAR_1, VAR_2);
                VAR_2 += 2;
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "$%X" , (VAR_4+2) + VAR_34); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else if (FUNC_7(VAR_11,"reglist") == 0
                       || FUNC_7(VAR_11,"tsilger") == 0) {
                uint16_t VAR_35 = FUNC_3(VAR_1, VAR_2);
                VAR_2 += 2;
                if (FUNC_7(VAR_11,"tsilger") == 0) {

                    uint16_t VAR_36 = VAR_35;
                    VAR_35 = 0;
                    while (VAR_36) {
                        VAR_35 <<= 1;
                        if (VAR_36 & 1) {
                            VAR_35 |= 1;
                        }
                        VAR_36 >>= 1;
                    }
                }
                char VAR_37[3*16];
                unsigned int VAR_38 = 0;
                unsigned int VAR_39 = 0;
                unsigned int VAR_40 = 0;
                while (VAR_35) {
                    if (VAR_35 & 1) {
                        if (VAR_39) {
                            if (VAR_38 >= 3 && VAR_37[VAR_38-3] == '-') {
                                VAR_38 -= 2;
                            } else {
                                VAR_37[VAR_38++] = '-';
                            }
                        } else {
                            if (VAR_38 > 0) {
                                VAR_37[VAR_38++] = '/';
                            }
                        }
                        VAR_37[VAR_38++] = VAR_40<8 ? 'D' : 'A';
                        VAR_37[VAR_38++] = '0' + (VAR_40 % 8);
                    }
                    VAR_39 = VAR_35 & 1;
                    VAR_40++;
                    VAR_35 >>= 1;
                }
                VAR_37[VAR_38] = 0;
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "%s" , VAR_37); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            } else {
                do { VAR_9 += FUNC_0(&VAR_5[VAR_9], sizeof(VAR_5)-VAR_9, "<%s>" , VAR_11); if (VAR_9 > sizeof(VAR_5)-1) { VAR_9 = sizeof(VAR_5)-1; } } while (0);
            }
        } else {
            do { if (VAR_9 < sizeof(VAR_5)-1) { VAR_5[VAR_9++] = (VAR_7[VAR_10]); VAR_5[VAR_9] = 0; } } while (0);
            VAR_10++;
        }
    }

    if (VAR_3) {
        *VAR_3 = (VAR_2 - VAR_4) / 2;
    }
    return VAR_5;
}

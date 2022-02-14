
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long int_val; int suffix; int kind; int mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_11 ;
 TYPE_1__ VAR_12 ;
 char FUNC_2 (char) ;

void FUNC_3(void) {
    int VAR_13 = 10;
    const char *VAR_14 = VAR_11;
    if (*VAR_11 == '0') {
        VAR_11++;
        if (FUNC_2(*VAR_11) == 'x') {
            VAR_11++;
            VAR_12.mod = VAR_1;
            VAR_13 = 16;
            VAR_14 = VAR_11;
        } else if (FUNC_2(*VAR_11) == 'b') {
            VAR_11++;
            VAR_12.mod = VAR_0;
            VAR_13 = 2;
            VAR_14 = VAR_11;
        } else if (FUNC_1(*VAR_11)) {
            VAR_12.mod = VAR_2;
            VAR_13 = 8;
            VAR_14 = VAR_11;
        }
    }
    unsigned long long VAR_15 = 0;
    for (;;) {
        if (*VAR_11 == '_') {
            VAR_11++;
            continue;
        }
        int VAR_16 = VAR_10[(unsigned char)*VAR_11];
        if (VAR_16 == 0 && *VAR_11 != '0') {
            break;
        }
        if (VAR_16 >= VAR_13) {
            FUNC_0("Digit '%c' out of range for base %d", *VAR_11, VAR_13);
            VAR_16 = 0;
        }
        if (VAR_15 > (VAR_9 - VAR_16)/VAR_13) {
            FUNC_0("Integer literal overflow");
            while (FUNC_1(*VAR_11)) {
                VAR_11++;
            }
            VAR_15 = 0;
            break;
        }
        VAR_15 = VAR_15*VAR_13 + VAR_16;
        VAR_11++;
    }
    if (VAR_11 == VAR_14) {
        FUNC_0("Expected base %d digit, got '%c'", VAR_13, *VAR_11);
    }
    VAR_12.kind = VAR_8;
    VAR_12.int_val = VAR_15;
    if (FUNC_2(*VAR_11) == 'u') {
        VAR_12.suffix = VAR_5;
        VAR_11++;
        if (FUNC_2(*VAR_11) == 'l') {
            VAR_12.suffix = VAR_6;
            VAR_11++;
            if (FUNC_2(*VAR_11) == 'l') {
                VAR_12.suffix = VAR_7;
                VAR_11++;
            }
        }
    } else if (FUNC_2(*VAR_11) == 'l') {
        VAR_12.suffix = VAR_3;
        VAR_11++;
        if (FUNC_2(*VAR_11) == 'l') {
            VAR_12.suffix = VAR_4;
            VAR_11++;
        }
    }
}

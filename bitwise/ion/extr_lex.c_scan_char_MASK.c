
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_val; int mod; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int* VAR_2 ;
 int FUNC_2 () ;
 char* VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_3(void) {
    FUNC_0(*VAR_3 == '\'');
    VAR_3++;
    int VAR_5 = 0;
    if (*VAR_3 == '\'') {
        FUNC_1("Char literal cannot be empty");
        VAR_3++;
    } else if (*VAR_3 == '\n') {
        FUNC_1("Char literal cannot contain newline");
    } else if (*VAR_3 == '\\') {
        VAR_3++;
        if (*VAR_3 == 'x') {
            VAR_5 = FUNC_2();
        } else {
            VAR_5 = VAR_2[(unsigned char)*VAR_3];
            if (VAR_5 == 0 && *VAR_3 != '0') {
                FUNC_1("Invalid char literal escape '\\%c'", *VAR_3);
            }
            VAR_3++;
        }
    } else {
        VAR_5 = *VAR_3;
        VAR_3++;
    }
    if (*VAR_3 != '\'') {
        FUNC_1("Expected closing char quote, got '%c'", *VAR_3);
    } else {
        VAR_3++;
    }
    VAR_4.kind = VAR_1;
    VAR_4.int_val = VAR_5;
    VAR_4.mod = VAR_0;
}

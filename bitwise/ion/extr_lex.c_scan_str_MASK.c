
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; } ;
struct TYPE_4__ {char* str_val; int kind; int mod; TYPE_1__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (char*,...) ;
 char* VAR_2 ;
 char FUNC_3 () ;
 char* VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_4(void) {
    FUNC_0(*VAR_3 == '"');
    VAR_3++;
    char *VAR_5 = ((void*)0);
    if (VAR_3[0] == '"' && VAR_3[1] == '"') {
        VAR_3 += 2;
        while (*VAR_3) {
            if (VAR_3[0] == '"' && VAR_3[1] == '"' && VAR_3[2] == '"') {
                VAR_3 += 3;
                break;
            }
            if (*VAR_3 != '\r') {

                FUNC_1(VAR_5, *VAR_3);
            }
            if (*VAR_3 == '\n') {
                VAR_4.pos.line++;
            }
            VAR_3++;
        }
        if (!*VAR_3) {
            FUNC_2("Unexpected end of file within multi-line string literal");
        }
        VAR_4.mod = VAR_0;
    } else {
        while (*VAR_3 && *VAR_3 != '"') {
            char VAR_6 = *VAR_3;
            if (VAR_6 == '\n') {
                FUNC_2("String literal cannot contain newline");
                break;
            } else if (VAR_6 == '\\') {
                VAR_3++;
                if (*VAR_3 == 'x') {
                    VAR_6 = FUNC_3();
                } else {
                    VAR_6 = VAR_2[(unsigned char)*VAR_3];
                    if (VAR_6 == 0 && *VAR_3 != '0') {
                        FUNC_2("Invalid string literal escape '\\%c'", *VAR_3);
                    }
                    VAR_3++;
                }
            } else {
                VAR_3++;
            }
            FUNC_1(VAR_5, VAR_6);
        }
        if (*VAR_3) {
            VAR_3++;
        } else {
            FUNC_2("Unexpected end of file within string literal");
        }
    }
    FUNC_1(VAR_5, 0);
    VAR_4.kind = VAR_1;
    VAR_4.str_val = VAR_5;
}

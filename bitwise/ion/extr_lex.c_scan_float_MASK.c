
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double float_val; int suffix; int kind; } ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_3 ;
 double FUNC_2 (char const*,int *) ;
 TYPE_1__ VAR_4 ;
 char FUNC_3 (char) ;

void FUNC_4(void) {
    const char *VAR_5 = VAR_3;
    while (FUNC_1(*VAR_3)) {
        VAR_3++;
    }
    if (*VAR_3 == '.') {
        VAR_3++;
    }
    while (FUNC_1(*VAR_3)) {
        VAR_3++;
    }
    if (FUNC_3(*VAR_3) == 'e') {
        VAR_3++;
        if (*VAR_3 == '+' || *VAR_3 == '-') {
            VAR_3++;
        }
        if (!FUNC_1(*VAR_3)) {
            FUNC_0("Expected digit after float literal exponent, found '%c'.", *VAR_3);
        }
        while (FUNC_1(*VAR_3)) {
            VAR_3++;
        }
    }
    double VAR_6 = FUNC_2(VAR_5, ((void*)0));
    if (VAR_6 == VAR_0) {
        FUNC_0("Float literal overflow");
    }
    VAR_4.kind = VAR_2;
    VAR_4.float_val = VAR_6;
    if (FUNC_3(*VAR_3) == 'd') {
        VAR_4.suffix = VAR_1;
        VAR_3++;
    }
}

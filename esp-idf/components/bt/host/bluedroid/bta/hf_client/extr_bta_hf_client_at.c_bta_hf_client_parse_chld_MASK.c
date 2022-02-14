
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_4(char *VAR_7)
{
    FUNC_0(VAR_7, "+CHLD:");

    if (*VAR_7 != '(') {
        return ((void*)0);
    }

    VAR_7++;

    while (*VAR_7 != '\0') {
        if (FUNC_3("0", VAR_7, 1) == 0) {
            FUNC_2(VAR_4);
            VAR_7++;
        } else if (FUNC_3("1x", VAR_7, 2) == 0) {
            FUNC_2(VAR_6);
            VAR_7 += 2;
        } else if (FUNC_3("1", VAR_7, 1) == 0) {
            FUNC_2(VAR_5);
            VAR_7++;
        } else if (FUNC_3("2x", VAR_7, 2) == 0) {
            FUNC_2(VAR_3);
            VAR_7 += 2;
        } else if (FUNC_3("2", VAR_7, 1) == 0) {
            FUNC_2(VAR_0);
            VAR_7++;
        } else if (FUNC_3("3", VAR_7, 1) == 0) {
            FUNC_2(VAR_1);
            VAR_7++;
        } else if (FUNC_3("4", VAR_7, 1) == 0) {
            FUNC_2(VAR_2);
            VAR_7++;
        } else {
            return ((void*)0);
        }

        if (*VAR_7 == ',') {
            VAR_7++;
            continue;
        }

        if (*VAR_7 == ')') {
            VAR_7++;
            break;
        }

        return ((void*)0);
    }

    FUNC_1(VAR_7);

    return VAR_7;
}

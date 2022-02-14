
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Pos ;
typedef int Buffer ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

char *FUNC_10(bool *VAR_1) {
    if (!FUNC_3())
        return ((void*)0);
    FUNC_9();
    Pos VAR_2 = FUNC_5(0);
    char VAR_3;
    if (FUNC_7('"')) {
        *VAR_1 = 0;
        VAR_3 = '"';
    } else if (FUNC_7('<')) {
        *VAR_1 = 1;
        VAR_3 = '>';
    } else {
        return ((void*)0);
    }
    Buffer *VAR_4 = FUNC_6();
    while (!FUNC_7(VAR_3)) {
        int VAR_5 = FUNC_8();
        if (VAR_5 == VAR_0 || VAR_5 == '\n')
            FUNC_4(VAR_2, "premature end of header name");
        FUNC_2(VAR_4, VAR_5);
    }
    if (FUNC_1(VAR_4) == 0)
        FUNC_4(VAR_2, "header name should not be empty");
    FUNC_2(VAR_4, '\0');
    return FUNC_0(VAR_4);
}

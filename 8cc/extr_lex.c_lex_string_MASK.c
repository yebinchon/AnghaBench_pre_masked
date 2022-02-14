
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Pos ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

Token *FUNC_8(char *VAR_1) {
    FUNC_6(FUNC_3(VAR_1));
    Token *VAR_2 = FUNC_0();
    FUNC_4('\n');
    Pos VAR_3 = FUNC_2(0);
    if (FUNC_5() != VAR_0)
        FUNC_1(VAR_3, "unconsumed input: %s", VAR_1);
    FUNC_7();
    return VAR_2;
}

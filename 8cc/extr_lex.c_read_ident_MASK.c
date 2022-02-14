
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char) ;
 scalar_t__ FUNC_2 (char) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int ) ;
 unsigned char FUNC_5 () ;
 int FUNC_6 () ;
 char FUNC_7 () ;
 int FUNC_8 (char) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static Token *FUNC_10(char VAR_0) {
    Buffer *VAR_1 = FUNC_3();
    FUNC_1(VAR_1, VAR_0);
    for (;;) {
        VAR_0 = FUNC_7();
        if (FUNC_2(VAR_0) || (VAR_0 & 0x80) || VAR_0 == '_' || VAR_0 == '$') {
            FUNC_1(VAR_1, VAR_0);
            continue;
        }


        if (VAR_0 == '\\' && (FUNC_5() == 'u' || FUNC_5() == 'U')) {
            FUNC_9(VAR_1, FUNC_6());
            continue;
        }
        FUNC_8(VAR_0);
        FUNC_1(VAR_1, '\0');
        return FUNC_4(FUNC_0(VAR_1));
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 unsigned char FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static Token *FUNC_10(int VAR_2) {
    Buffer *VAR_3 = FUNC_4();
    for (;;) {
        int VAR_4 = FUNC_8();
        if (VAR_4 == VAR_0)
            FUNC_3(VAR_1, "unterminated string");
        if (VAR_4 == '"')
            break;
        if (VAR_4 != '\\') {
            FUNC_2(VAR_3, VAR_4);
            continue;
        }
        bool VAR_5 = (FUNC_6() == 'u' || FUNC_6() == 'U');
        VAR_4 = FUNC_7();
        if (VAR_5) {
            FUNC_9(VAR_3, VAR_4);
            continue;
        }
        FUNC_2(VAR_3, VAR_4);
    }
    FUNC_2(VAR_3, '\0');
    return FUNC_5(FUNC_0(VAR_3), FUNC_1(VAR_3), VAR_2);
}

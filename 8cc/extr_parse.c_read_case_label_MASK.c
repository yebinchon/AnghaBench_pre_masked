
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int,int,char*) ;
 char* FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static Node *FUNC_10(Token *VAR_2) {
    if (!VAR_1)
        FUNC_2(VAR_2, "stray case label");
    char *VAR_3 = FUNC_5();
    int VAR_4 = FUNC_7();
    if (FUNC_6(VAR_0)) {
        int VAR_5 = FUNC_7();
        FUNC_3(':');
        if (VAR_4 > VAR_5)
            FUNC_2(VAR_2, "case region is not in correct order: %d ... %d", VAR_4, VAR_5);
        FUNC_9(VAR_1, FUNC_4(VAR_4, VAR_5, VAR_3));
    } else {
        FUNC_3(':');
        FUNC_9(VAR_1, FUNC_4(VAR_4, VAR_4, VAR_3));
    }
    FUNC_1(VAR_1);
    return FUNC_8(FUNC_0(VAR_3));
}

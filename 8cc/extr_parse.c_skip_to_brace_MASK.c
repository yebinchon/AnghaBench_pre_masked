
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Node ;


 int FUNC_0 (char) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_8() {
    for (;;) {
        if (FUNC_3('}'))
            return;
        if (FUNC_3('.')) {
            FUNC_1();
            FUNC_0('=');
        }
        Token *VAR_0 = FUNC_5();
        Node *VAR_1 = FUNC_6();
        if (!VAR_1)
            return;
        FUNC_7(VAR_0, "excessive initializer: %s", FUNC_4(VAR_1));
        FUNC_2();
    }
}

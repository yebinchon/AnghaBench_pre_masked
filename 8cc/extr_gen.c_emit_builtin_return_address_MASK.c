
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int args; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(Node *VAR_0) {
    FUNC_7("r11");
    FUNC_0(FUNC_9(VAR_0->args) == 1);
    FUNC_2(FUNC_8(VAR_0->args));
    char *VAR_1 = FUNC_5();
    char *VAR_2 = FUNC_5();
    FUNC_1("mov #rbp, #r11");
    FUNC_4(VAR_1);
    FUNC_1("test #rax, #rax");
    FUNC_1("jz %s", VAR_2);
    FUNC_1("mov (#r11), #r11");
    FUNC_1("sub $1, #rax");
    FUNC_3(VAR_1);
    FUNC_4(VAR_2);
    FUNC_1("mov 8(#r11), #rax");
    FUNC_6("r11");
}

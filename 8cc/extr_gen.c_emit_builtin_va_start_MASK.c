
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int args; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(Node *VAR_4) {
    VAR_1;
    FUNC_0(FUNC_6(VAR_4->args) == 1);
    FUNC_2(FUNC_5(VAR_4->args));
    FUNC_4("rcx");
    FUNC_1("movl $%d, (#rax)", VAR_3 * 8);
    FUNC_1("movl $%d, 4(#rax)", 48 + VAR_2 * 16);
    FUNC_1("lea %d(#rbp), #rcx", -VAR_0);
    FUNC_1("mov #rcx, 16(#rax)");
    FUNC_3("rcx");
}

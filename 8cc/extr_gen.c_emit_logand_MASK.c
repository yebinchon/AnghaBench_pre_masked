
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(Node *VAR_1) {
    VAR_0;
    char *VAR_2 = FUNC_3();
    FUNC_1(VAR_1->left);
    FUNC_0("test #rax, #rax");
    FUNC_0("mov $0, #rax");
    FUNC_0("je %s", VAR_2);
    FUNC_1(VAR_1->right);
    FUNC_0("test #rax, #rax");
    FUNC_0("mov $0, #rax");
    FUNC_0("je %s", VAR_2);
    FUNC_0("mov $1, #rax");
    FUNC_2(VAR_2);
}

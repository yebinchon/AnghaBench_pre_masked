
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(Node *VAR_1) {
    VAR_0;
    FUNC_1(VAR_1->left);
    FUNC_3("rax");
    FUNC_1(VAR_1->right);
    FUNC_2("rcx");
    FUNC_0("or #rcx, #rax");
}

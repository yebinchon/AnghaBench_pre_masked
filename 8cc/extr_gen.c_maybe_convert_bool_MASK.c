
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(Type *VAR_1) {
    if (VAR_1->kind == VAR_0) {
        FUNC_0("test #rax, #rax");
        FUNC_0("setne #al");
    }
}

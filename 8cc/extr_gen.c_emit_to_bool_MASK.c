
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(Type *VAR_2) {
    VAR_1;
    if (FUNC_1(VAR_2)) {
        FUNC_3(1);
        FUNC_0("xorpd #xmm1, #xmm1");
        FUNC_0("%s #xmm1, #xmm0", (VAR_2->kind == VAR_0) ? "ucomiss" : "ucomisd");
        FUNC_0("setne #al");
        FUNC_2(1);
    } else {
        FUNC_0("cmp $0, #rax");
        FUNC_0("setne #al");
    }
    FUNC_0("movzb #al, #eax");
}

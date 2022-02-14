
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; int usig; } ;
typedef TYPE_1__ Type ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(Type *VAR_0) {
    switch(VAR_0->kind) {
    case 133:
    case 132:
        VAR_0->usig ? FUNC_0("movzbq #al, #rax") : FUNC_0("movsbq #al, #rax");
        return;
    case 128:
        VAR_0->usig ? FUNC_0("movzwq #ax, #rax") : FUNC_0("movswq #ax, #rax");
        return;
    case 131:
        VAR_0->usig ? FUNC_0("mov #eax, #eax") : FUNC_0("cltq");
        return;
    case 129:
    case 130:
        return;
    }
}

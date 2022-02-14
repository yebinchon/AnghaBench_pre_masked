
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* ty; } ;
struct TYPE_8__ {TYPE_1__* ptr; } ;
struct TYPE_7__ {int size; } ;
typedef TYPE_3__ Node ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(char VAR_1, Node *VAR_2, Node *VAR_3) {
    VAR_0;
    FUNC_1(VAR_2);
    FUNC_4("rcx");
    FUNC_4("rax");
    FUNC_1(VAR_3);
    int VAR_4 = VAR_2->ty->ptr->size;
    if (VAR_4 > 1)
        FUNC_0("imul $%d, #rax", VAR_4);
    FUNC_0("mov #rax, #rcx");
    FUNC_3("rax");
    switch (VAR_1) {
    case '+': FUNC_0("add #rcx, #rax"); break;
    case '-': FUNC_0("sub #rcx, #rax"); break;
    default: FUNC_2("invalid operator '%d'", VAR_1);
    }
    FUNC_3("rcx");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kind; char* glabel; TYPE_1__* ty; int lvarinit; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_2__ Node ;




 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(Node *VAR_0, int VAR_1) {
    switch (VAR_0->kind) {
    case 128: {
        char *VAR_2 = FUNC_4();
        FUNC_1(".data %d", VAR_1 + 1);
        FUNC_2(VAR_2);
        FUNC_0(VAR_0->lvarinit, VAR_0->ty->size, 0, VAR_1 + 1);
        FUNC_1(".data %d", VAR_1);
        FUNC_1(".quad %s", VAR_2);
        return;
    }
    case 129:
        FUNC_1(".quad %s", VAR_0->glabel);
        return;
    default:
        FUNC_3("internal error");
    }
}

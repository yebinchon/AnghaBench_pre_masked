
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {int name; int kind; int base; int pos; } ;
typedef TYPE_3__ Typespec ;
struct TYPE_27__ {int num_elems; } ;
typedef TYPE_4__ Type ;
struct TYPE_25__ {TYPE_3__* right; int op; TYPE_3__* left; } ;
struct TYPE_24__ {char* name; TYPE_3__* expr; int is_undef; TYPE_3__* type; } ;
struct TYPE_28__ {int kind; TYPE_2__ assign; TYPE_1__ init; TYPE_3__* expr; } ;
typedef TYPE_5__ Stmt ;
typedef int Expr ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (int ,int ,int ,int ) ;
 TYPE_3__* FUNC_8 (int ,int ,int *) ;
 TYPE_4__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (TYPE_4__*) ;
 TYPE_4__* FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,char*) ;
 int FUNC_14 (TYPE_3__*,char*) ;
 TYPE_4__* FUNC_15 (TYPE_4__*) ;

void FUNC_16(Stmt *VAR_2) {
    switch (VAR_2->kind) {
    case 129:
        FUNC_1(VAR_2->expr);
        break;
    case 128:
        if (VAR_2->init.type) {
            Typespec *VAR_3 = VAR_2->init.type;
            bool VAR_4 = FUNC_5(VAR_2->init.type);
            if (VAR_4 && !VAR_2->init.expr) {
                Type *VAR_5 = FUNC_4(VAR_2->init.type);
                FUNC_2("%s = 0", FUNC_13(FUNC_11(VAR_5), VAR_2->init.name));
            } else {
                if (VAR_4 && FUNC_6(FUNC_4(VAR_2->init.expr))) {
                    FUNC_2("%s", FUNC_13(FUNC_4(VAR_2->init.expr), VAR_2->init.name));
                    if (VAR_2->init.expr) {
                        if (!VAR_2->init.is_undef) {
                            FUNC_2(" = ");
                            FUNC_1(VAR_2->init.expr);
                        }
                    } else {
                        FUNC_2(" = {0}");
                    }
                } else {
                    if (VAR_4) {
                        Expr *VAR_6 = FUNC_7(VAR_3->pos, FUNC_4(VAR_2->init.expr)->num_elems, 0, 0);
                        VAR_3 = FUNC_8(VAR_3->pos, VAR_3->base, VAR_6);
                    }
                    FUNC_2("%s", FUNC_14(VAR_2->init.type, VAR_2->init.name));
                    if (VAR_2->init.expr) {
                        if (!VAR_2->init.is_undef) {
                            FUNC_2(" = ");
                            FUNC_1(VAR_2->init.expr);
                        }
                    } else if (!VAR_2->init.is_undef) {
                        FUNC_2(" = {0}");
                    }
                }
            }
        } else {
            FUNC_2("%s = ", FUNC_13(FUNC_15(FUNC_4(VAR_2->init.expr)), VAR_2->init.name));
            FUNC_1(VAR_2->init.expr);
        }
        break;
    case 130: {
        Type *VAR_7 = FUNC_9(VAR_2->assign.left);
        if (VAR_7) {
            FUNC_0(VAR_2->assign.op == VAR_1);
            Type *VAR_8 = FUNC_4(VAR_2->assign.left);
            if (VAR_2->assign.left->kind == VAR_0) {
                const char *VAR_9 = FUNC_3(VAR_2->assign.left, VAR_2->assign.left->name);
                FUNC_2("%s = (char *)(%s) + ", VAR_9, VAR_9);
                FUNC_1(VAR_2->assign.right);
            } else {


                FUNC_2("do { %s = (%s)&(", FUNC_13(FUNC_12(VAR_8), "__pp"), FUNC_13(FUNC_12(VAR_8), ""));
                FUNC_1(VAR_2->assign.left);
                FUNC_2("); *__pp = (%s)(*(char **)__pp + ", FUNC_13(VAR_8, ""));
                FUNC_1(VAR_2->assign.right);
                FUNC_2("); } while(0)");
            }
        } else {
            FUNC_1(VAR_2->assign.left);
            FUNC_2(" %s ", FUNC_10(VAR_2->assign.op));
            FUNC_1(VAR_2->assign.right);
        }
        break;
    }
    default:
        FUNC_0(0);
    }
}

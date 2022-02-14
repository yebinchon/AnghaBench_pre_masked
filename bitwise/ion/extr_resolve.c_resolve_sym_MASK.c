
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int Type ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {int type; } ;
struct TYPE_17__ {scalar_t__ kind; scalar_t__ is_incomplete; int pos; TYPE_2__ enum_decl; TYPE_1__ typedef_decl; } ;
struct TYPE_16__ {scalar_t__ state; int kind; int type; int val; int home_package; TYPE_4__* decl; scalar_t__ reachable; } ;
typedef TYPE_3__ Sym ;
typedef int Package ;
typedef TYPE_4__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_9 ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_3__*) ;
 int * VAR_10 ;

void FUNC_15(Sym *VAR_11) {
    if (VAR_11->state == VAR_4) {
        return;
    } else if (VAR_11->state == VAR_5) {
        FUNC_3(VAR_11->decl->pos, "Cyclic dependency");
        return;
    }
    FUNC_0(VAR_11->state == VAR_6);
    FUNC_0(!VAR_11->reachable);
    if (!FUNC_6(VAR_11)) {
        FUNC_1(VAR_8, VAR_11);
        VAR_11->reachable = VAR_7;
    }
    VAR_11->state = VAR_5;
    Decl *VAR_12 = VAR_11->decl;
    Package *VAR_13 = FUNC_2(VAR_11->home_package);
    switch (VAR_11->kind) {
    case 129:
        if (VAR_12 && VAR_12->kind == VAR_2) {
            VAR_11->type = FUNC_12(VAR_12->typedef_decl.type, FUNC_4(VAR_12));
        } else if (VAR_12->kind == VAR_0) {
            Type *VAR_14 = VAR_12->enum_decl.type ? FUNC_11(VAR_12->enum_decl.type) : VAR_10;
            if (!FUNC_5(VAR_14)) {
                FUNC_3(VAR_12->pos, "Base type of enum must be integer type");
            }
            VAR_11->type = FUNC_13(VAR_11, VAR_14);
        } else {
            VAR_11->type = FUNC_14(VAR_11);
        }
        break;
    case 128:
        VAR_11->type = FUNC_10(VAR_12);
        break;
    case 132:
        VAR_11->type = FUNC_8(VAR_12, &VAR_11->val);
        break;
    case 131:
        VAR_11->type = FUNC_9(VAR_12);
        break;
    case 130:

        break;
    default:
        FUNC_0(0);
        break;
    }
    FUNC_7(VAR_13);
    VAR_11->state = VAR_4;
    if (VAR_12->is_incomplete || (VAR_12->kind != VAR_1 && VAR_12->kind != VAR_3)) {
        FUNC_1(VAR_9, VAR_11);
    }
}

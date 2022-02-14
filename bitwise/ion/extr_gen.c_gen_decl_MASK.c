
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int type; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {int type; } ;
struct TYPE_13__ {int type; int expr; } ;
struct TYPE_17__ {int kind; TYPE_4__ enum_decl; TYPE_3__ typedef_decl; int type; TYPE_2__ var; TYPE_1__ const_decl; int pos; struct TYPE_17__* decl; } ;
typedef TYPE_5__ Sym ;
typedef TYPE_5__ Decl ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 char* FUNC_13 (int ,char*) ;

void FUNC_14(Sym *VAR_0) {
    Decl *VAR_1 = VAR_0->decl;
    if (!VAR_1 || FUNC_9(VAR_1)) {
        return;
    }
    FUNC_4(VAR_1->pos);
    switch (VAR_1->kind) {
    case 135:
        FUNC_7("#define %s (", FUNC_8(VAR_0));
        if (VAR_1->const_decl.type) {
            FUNC_5("(%s)(", FUNC_13(VAR_1->const_decl.type, ""));
        }
        FUNC_2(VAR_1->const_decl.expr);
        if (VAR_1->const_decl.type) {
            FUNC_5(")");
        }
        FUNC_5(")");
        break;
    case 128:
        if (FUNC_10(VAR_1)) {
            FUNC_7("THREADLOCAL");
        }
        FUNC_7("extern ");
        if (VAR_1->var.type && !FUNC_11(VAR_1->var.type)) {
            FUNC_5("%s", FUNC_13(VAR_1->var.type, FUNC_8(VAR_0)));
        } else {
            FUNC_5("%s", FUNC_12(VAR_0->type, FUNC_8(VAR_0)));
        }
        FUNC_5(";");
        break;
    case 133:
        FUNC_3(VAR_1);
        FUNC_5(";");
        break;
    case 131:
    case 129:
        FUNC_1(VAR_1);
        break;
    case 130:
        FUNC_7("typedef %s;", FUNC_13(VAR_1->typedef_decl.type, FUNC_8(VAR_0)));
        break;
    case 134:
        if (VAR_1->enum_decl.type) {
            FUNC_7("typedef %s;", FUNC_13(VAR_1->enum_decl.type, FUNC_8(VAR_1)));
        } else {
            FUNC_7("typedef int %s;", FUNC_8(VAR_1));
        }
        break;
    case 132:

        break;
    default:
        FUNC_0(0);
        break;
    }
    FUNC_6();
}

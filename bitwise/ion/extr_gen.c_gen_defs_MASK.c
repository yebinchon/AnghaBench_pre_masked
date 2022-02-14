
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ expr; scalar_t__ type; } ;
struct TYPE_13__ {int block; } ;
struct TYPE_16__ {scalar_t__ kind; TYPE_2__ var; TYPE_1__ func; scalar_t__ is_incomplete; } ;
struct TYPE_15__ {scalar_t__ state; scalar_t__ reachable; int type; TYPE_4__* decl; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__** FUNC_0 (TYPE_3__**) ;
 char* VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (scalar_t__) ;
 TYPE_3__** VAR_6 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (scalar_t__,int ) ;

void FUNC_15(void) {
    for (Sym **VAR_7 = VAR_6; VAR_7 != FUNC_0(VAR_6); VAR_7++) {
        Sym *VAR_8 = *VAR_7;
        Decl *VAR_9 = VAR_8->decl;
        if (VAR_8->state != VAR_3 || !VAR_9 || VAR_9->is_incomplete || VAR_8->reachable != VAR_2) {
            continue;
        }
        if (VAR_9->kind == VAR_0) {
            bool VAR_10 = FUNC_9(VAR_9);;
            char *VAR_11 = VAR_4;
            if (VAR_10) {
                VAR_4 = ((void*)0);
            }
            if (FUNC_7(VAR_9, VAR_5)) {
                FUNC_6("INLINE");
            }
            if (FUNC_7(VAR_9, FUNC_12("noinline"))) {
                FUNC_6("NOINLINE");
            }
            FUNC_2(VAR_9);
            FUNC_4(" ");
            FUNC_3(VAR_9->func.block);
            FUNC_5();
            if (VAR_10) {
                VAR_4 = VAR_11;
            }
        } else if (VAR_9->kind == VAR_1) {
            if (FUNC_10(VAR_9)) {
                FUNC_6("THREADLOCAL");
            }
            if (VAR_9->var.type && !FUNC_11(VAR_9->var.type)) {
                FUNC_6("%s", FUNC_14(VAR_9->var.type, FUNC_8(VAR_8)));
            } else {
                FUNC_6("%s", FUNC_13(VAR_8->type, FUNC_8(VAR_8)));
            }
            if (VAR_9->var.expr) {
                FUNC_4(" = ");
                FUNC_1(VAR_9->var.expr);
            }
            FUNC_4(";");
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ name; int num_args; TYPE_1__* args; } ;
struct TYPE_11__ {scalar_t__ kind; TYPE_6__ note; int pos; } ;
struct TYPE_10__ {scalar_t__ kind; int name; } ;
struct TYPE_9__ {size_t num_decls; TYPE_4__** decls; } ;
struct TYPE_8__ {TYPE_3__* expr; } ;
typedef TYPE_2__ Package ;
typedef TYPE_3__ Expr ;
typedef TYPE_4__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (TYPE_6__) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

void FUNC_6(Package *VAR_7) {
    for (size_t VAR_8 = 0; VAR_8 < VAR_7->num_decls; VAR_8++) {
        Decl *VAR_9 = VAR_7->decls[VAR_8];
        if (VAR_9->kind == VAR_1) {
            if (!FUNC_1(&VAR_3, VAR_9->note.name)) {
                FUNC_5(VAR_9->pos, "Unknown declaration #directive '%s'", VAR_9->note.name);
            }
            if (VAR_9->note.name == VAR_4) {
                if (VAR_9->note.num_args != 1) {
                    FUNC_0(VAR_9->pos, "#declare_note takes 1 argument");
                }
                Expr *VAR_10 = VAR_9->note.args[0].expr;
                if (VAR_10->kind != VAR_2) {
                    FUNC_0(VAR_9->pos, "#declare_note argument must be name");
                }
                FUNC_2(&VAR_3, VAR_10->name, (void *)1);
            } else if (VAR_9->note.name == VAR_6) {

                if (!VAR_5) {
                    FUNC_3(VAR_9->note);
                }
            }
        } else if (VAR_9->kind == VAR_0) {

        } else {
            FUNC_4(VAR_9);
        }
    }
}

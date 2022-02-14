
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int pos; } ;
struct TYPE_12__ {char* val; } ;
struct TYPE_15__ {scalar_t__ kind; TYPE_2__ str_lit; } ;
struct TYPE_14__ {int num_args; TYPE_1__* args; } ;
struct TYPE_13__ {char* name; char const* external_name; } ;
struct TYPE_11__ {TYPE_5__* expr; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ Note ;
typedef TYPE_5__ Expr ;
typedef TYPE_6__ Decl ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_6__*,int ) ;

void FUNC_2(Decl *VAR_2, Sym *VAR_3) {
    Note *VAR_4 = FUNC_1(VAR_2, VAR_1);
    if (VAR_4) {
        if (VAR_4->num_args > 1) {
            FUNC_0(VAR_2->pos, "@foreign takes 0 or 1 argument");
        }
        const char *VAR_5;
        if (VAR_4->num_args == 0) {
            VAR_5 = VAR_3->name;
        } else {
            Expr *VAR_6 = VAR_4->args[0].expr;
            if (VAR_6->kind != VAR_0) {
                FUNC_0(VAR_2->pos, "@foreign argument 1 must be a string literal");
            }
            VAR_5 = VAR_6->str_lit.val;
        }
        VAR_3->external_name = VAR_5;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; TYPE_3__* expr; } ;
struct TYPE_9__ {scalar_t__ kind; TYPE_1__ field; int name; } ;
struct TYPE_8__ {scalar_t__ kind; int * package; } ;
typedef TYPE_2__ Sym ;
typedef int Package ;
typedef TYPE_3__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int ) ;

Package *FUNC_2(Expr *VAR_3) {
    if (VAR_3->kind == VAR_1) {
        Sym *VAR_4 = FUNC_1(VAR_3->name);
        if (VAR_4 && VAR_4->kind == VAR_2) {
            return VAR_4->package;
        }
    } else if (VAR_3->kind == VAR_0) {
        Package *VAR_5 = FUNC_2(VAR_3->field.expr);
        if (VAR_5) {
            Sym *VAR_6 = FUNC_0(VAR_5, VAR_3->field.name);
            if (VAR_6 && VAR_6->kind == VAR_2) {
                return VAR_6->package;
            }
        }
    }
    return ((void*)0);
}

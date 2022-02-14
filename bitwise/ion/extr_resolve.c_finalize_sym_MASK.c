
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; scalar_t__ kind; int type; TYPE_1__* decl; } ;
struct TYPE_5__ {int is_incomplete; } ;
typedef TYPE_2__ Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Sym *VAR_3) {
    FUNC_0(VAR_3->state == VAR_1);
    if (VAR_3->decl && !VAR_3->decl->is_incomplete) {
        if (VAR_3->kind == VAR_2) {
            FUNC_1(VAR_3->type);
        } else if (VAR_3->kind == VAR_0) {
            FUNC_2(VAR_3);
        }
    }
}

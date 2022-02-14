
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Type ;
struct TYPE_4__ {int name; int is_undef; int expr; int type; } ;
struct TYPE_5__ {scalar_t__ kind; int pos; TYPE_1__ init; } ;
typedef TYPE_2__ Stmt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(Stmt *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    Type *VAR_2 = FUNC_2(VAR_1->pos, VAR_1->init.type, VAR_1->init.expr, 0, VAR_1->init.is_undef);
    if (!FUNC_3(VAR_1->init.name, VAR_2)) {
        FUNC_1(VAR_1->pos, "Shadowed definition of local symbol");
    }
}

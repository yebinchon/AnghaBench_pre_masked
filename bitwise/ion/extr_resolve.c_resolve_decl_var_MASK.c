
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Type ;
struct TYPE_5__ {int expr; int type; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_1__ var; int pos; } ;
typedef TYPE_2__ Decl ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ,int ,int ,int ,int) ;

Type *FUNC_3(Decl *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    return FUNC_2(VAR_1->pos, VAR_1->var.type, VAR_1->var.expr, FUNC_1(VAR_1), 0);
}

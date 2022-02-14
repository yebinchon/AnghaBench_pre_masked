
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int name; int pos; } ;
typedef int Operand ;
typedef TYPE_1__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

Operand FUNC_2(Expr *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    return FUNC_1(VAR_1->pos, VAR_1->name);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t num_args; int args; TYPE_2__* expr; } ;
struct TYPE_9__ {TYPE_1__ call; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

Expr *FUNC_2(SrcPos VAR_1, Expr *VAR_2, Expr **VAR_3, size_t VAR_4) {
    Expr *VAR_5 = FUNC_1(VAR_0, VAR_1);
    VAR_5->call.expr = VAR_2;
    VAR_5->call.args = FUNC_0(VAR_3);
    VAR_5->call.num_args = VAR_4;
    return VAR_5;
}

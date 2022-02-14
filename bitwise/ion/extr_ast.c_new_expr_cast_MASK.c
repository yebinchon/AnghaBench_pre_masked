
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_6__ {TYPE_2__* expr; int * type; } ;
struct TYPE_7__ {TYPE_1__ cast; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, Typespec *VAR_2, Expr *VAR_3) {
    Expr *VAR_4 = FUNC_0(VAR_0, VAR_1);
    VAR_4->cast.type = VAR_2;
    VAR_4->cast.expr = VAR_3;
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * num_elems; struct TYPE_5__* base; } ;
typedef TYPE_1__ Typespec ;
typedef int SrcPos ;
typedef int Expr ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

Typespec *FUNC_1(SrcPos VAR_1, Typespec *VAR_2, Expr *VAR_3) {
    Typespec *VAR_4 = FUNC_0(VAR_0, VAR_1);
    VAR_4->base = VAR_2;
    VAR_4->num_elems = VAR_3;
    return VAR_4;
}

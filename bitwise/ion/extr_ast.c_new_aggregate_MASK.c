
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_items; int items; int kind; int pos; } ;
typedef int SrcPos ;
typedef int AggregateKind ;
typedef int AggregateItem ;
typedef TYPE_1__ Aggregate ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

Aggregate *FUNC_2(SrcPos VAR_0, AggregateKind VAR_1, AggregateItem *VAR_2, size_t VAR_3) {
    Aggregate *VAR_4 = FUNC_1(sizeof(Aggregate));
    VAR_4->pos = VAR_0;
    VAR_4->kind = VAR_1;
    VAR_4->items = FUNC_0(VAR_2);
    VAR_4->num_items = VAR_3;
    return VAR_4;
}

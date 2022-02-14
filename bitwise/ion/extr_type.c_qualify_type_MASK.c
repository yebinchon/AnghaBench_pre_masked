
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; struct TYPE_9__* base; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

Type *FUNC_2(Type *VAR_1, Type *VAR_2) {
    VAR_1 = FUNC_1(VAR_1);
    while (VAR_2->kind == VAR_0) {
        VAR_1 = FUNC_0(VAR_1);
        VAR_2 = VAR_2->base;
    }
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ kind; int nonmodifiable; struct TYPE_10__* base; int align; int size; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

Type *FUNC_4(Type *VAR_2) {
    if (VAR_2->kind == VAR_0) {
        return VAR_2;
    }
    Type *VAR_3 = FUNC_1(&VAR_1, VAR_2);
    if (!VAR_3) {
        FUNC_0(VAR_2);
        VAR_3 = FUNC_3(VAR_0);
        VAR_3->nonmodifiable = 1;
        VAR_3->size = VAR_2->size;
        VAR_3->align = VAR_2->align;
        VAR_3->base = VAR_2;
        FUNC_2(&VAR_1, VAR_2, VAR_3);
    }
    return VAR_3;
}

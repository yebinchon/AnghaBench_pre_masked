
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ kind; scalar_t__ size; scalar_t__ usig; } ;
typedef TYPE_1__ Type ;
struct TYPE_12__ {scalar_t__ size; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static Type *FUNC_5(Type *VAR_1, Type *VAR_2) {
    FUNC_0(FUNC_2(VAR_1));
    FUNC_0(FUNC_2(VAR_2));
    if (VAR_1->kind < VAR_2->kind) {

        Type *VAR_3 = VAR_1;
        VAR_1 = VAR_2;
        VAR_2 = VAR_3;
    }
    if (FUNC_3(VAR_1))
        return VAR_1;
    FUNC_0(FUNC_4(VAR_1) && VAR_1->size >= VAR_0->size);
    FUNC_0(FUNC_4(VAR_2) && VAR_2->size >= VAR_0->size);
    if (VAR_1->size > VAR_2->size)
        return VAR_1;
    FUNC_0(VAR_1->size == VAR_2->size);
    if (VAR_1->usig == VAR_2->usig)
        return VAR_1;
    Type *VAR_4 = FUNC_1(VAR_1);
    VAR_4->usig = 1;
    return VAR_4;
}

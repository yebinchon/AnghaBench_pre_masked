
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; struct TYPE_9__* ptr; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(Type *VAR_1, Type *VAR_2) {
    if (VAR_1->kind == VAR_0)
        return FUNC_1(VAR_1, VAR_2);
    if (VAR_1->kind != VAR_2->kind)
        return 0;
    if (VAR_1->ptr && VAR_2->ptr)
        return FUNC_3(VAR_1->ptr, VAR_2->ptr);
    if (FUNC_0(VAR_1) && FUNC_0(VAR_2))
        return FUNC_2(VAR_1, VAR_2);
    return 1;
}

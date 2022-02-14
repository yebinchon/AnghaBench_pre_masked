
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static Type *FUNC_2(Type *VAR_2, Vector *VAR_3) {
    if (VAR_2->kind == VAR_1)
        FUNC_0("function returning a function");
    if (VAR_2->kind == VAR_0)
        FUNC_0("function returning an array");
    return FUNC_1(VAR_3, VAR_2);
}

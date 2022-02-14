
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
typedef int Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (char) ;
 int * FUNC_4 () ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static Type *FUNC_7(Type *VAR_1) {
    int VAR_2;
    if (FUNC_3(']')) {
        VAR_2 = -1;
    } else {
        VAR_2 = FUNC_6();
        FUNC_1(']');
    }
    Token *VAR_3 = FUNC_4();
    Type *VAR_4 = FUNC_5(VAR_1, ((void*)0));
    if (VAR_4->kind == VAR_0)
        FUNC_0(VAR_3, "array of functions");
    return FUNC_2(VAR_4, VAR_2);
}

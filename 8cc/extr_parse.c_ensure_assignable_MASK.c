
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(Type *VAR_1, Type *VAR_2) {
    if ((FUNC_1(VAR_1) || VAR_1->kind == VAR_0) &&
        (FUNC_1(VAR_2) || VAR_2->kind == VAR_0))
        return;
    if (FUNC_2(VAR_1, VAR_2))
        return;
    FUNC_0("incompatible kind: <%s> <%s>", FUNC_3(VAR_1), FUNC_3(VAR_2));
}

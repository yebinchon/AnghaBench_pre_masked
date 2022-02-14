
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
typedef int Token ;
struct TYPE_4__ {scalar_t__ nargs; } ;
typedef TYPE_1__ Macro ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ,char) ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static Vector *FUNC_6(Token *VAR_0, Macro *VAR_1) {
    if (VAR_1->nargs == 0 && FUNC_2(FUNC_4(), ')')) {



        return FUNC_3();
    }
    Vector *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (FUNC_5(VAR_2) != VAR_1->nargs)
        FUNC_1(VAR_0, "macro argument number does not match");
    return VAR_2;
}

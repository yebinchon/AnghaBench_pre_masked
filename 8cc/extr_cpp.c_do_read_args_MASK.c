
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
typedef int Token ;
struct TYPE_3__ {int nargs; scalar_t__ is_varg; } ;
typedef TYPE_1__ Macro ;


 int * FUNC_0 () ;
 int * FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static Vector *FUNC_4(Token *VAR_0, Macro *VAR_1) {
    Vector *VAR_2 = FUNC_0();
    bool VAR_3 = 0;
    while (!VAR_3) {
        bool VAR_4 = (VAR_1->is_varg && FUNC_2(VAR_2) + 1 == VAR_1->nargs);
        FUNC_3(VAR_2, FUNC_1(VAR_0, &VAR_3, VAR_4));
    }
    if (VAR_1->is_varg && FUNC_2(VAR_2) == VAR_1->nargs - 1)
        FUNC_3(VAR_2, FUNC_0());
    return VAR_2;
}

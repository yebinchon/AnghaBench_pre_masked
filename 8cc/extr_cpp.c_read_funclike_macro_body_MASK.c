
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {scalar_t__ kind; int space; int sval; } ;
typedef TYPE_1__ Token ;
typedef int Map ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static Vector *FUNC_5(Map *VAR_2) {
    Vector *VAR_3 = FUNC_2();
    for (;;) {
        Token *VAR_4 = FUNC_1();
        if (VAR_4->kind == VAR_1)
            return VAR_3;
        if (VAR_4->kind == VAR_0) {
            Token *VAR_5 = FUNC_3(VAR_2, VAR_4->sval);
            if (VAR_5) {
                VAR_5 = FUNC_0(VAR_5);
                VAR_5->space = VAR_4->space;
                FUNC_4(VAR_3, VAR_5);
                continue;
            }
        }
        FUNC_4(VAR_3, VAR_4);
    }
}

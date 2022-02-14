
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static Vector *FUNC_7(Vector *VAR_1, Token *VAR_2) {
    FUNC_3(FUNC_6(VAR_1));
    Vector *VAR_3 = FUNC_0();
    for (;;) {
        Token *VAR_4 = FUNC_2();
        if (VAR_4->kind == VAR_0)
            break;
        FUNC_5(VAR_3, VAR_4);
    }
    FUNC_1(VAR_3, VAR_2);
    FUNC_4();
    return VAR_3;
}

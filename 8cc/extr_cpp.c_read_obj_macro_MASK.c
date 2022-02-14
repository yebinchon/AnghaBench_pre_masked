
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(char *VAR_2) {
    Vector *VAR_3 = FUNC_3();
    for (;;) {
        Token *VAR_4 = FUNC_1();
        if (VAR_4->kind == VAR_0)
            break;
        FUNC_5(VAR_3, VAR_4);
    }
    FUNC_0(VAR_3);
    FUNC_4(VAR_1, VAR_2, FUNC_2(VAR_3));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sval; int space; } ;
typedef TYPE_1__ Token ;


 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6() {
    Token *VAR_0 = FUNC_3();
    Token *VAR_1 = FUNC_1();
    if (FUNC_0(VAR_1, '(') && !VAR_1->space) {
        FUNC_2(VAR_0);
        return;
    }
    FUNC_5(VAR_1);
    FUNC_4(VAR_0->sval);
}

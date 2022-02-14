
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; int * hideset; scalar_t__ bol; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;

Token *FUNC_5() {
    Token *VAR_1;
    for (;;) {
        VAR_1 = FUNC_4();
        if (VAR_1->bol && FUNC_1(VAR_1, '#') && VAR_1->hideset == ((void*)0)) {
            FUNC_3(VAR_1);
            continue;
        }
        FUNC_0(VAR_1->kind < VAR_0);
        return FUNC_2(VAR_1);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; scalar_t__ space; scalar_t__ bol; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 () ;
 char* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4() {
    for (;;) {
        Token *VAR_1 = FUNC_2();
        if (VAR_1->kind == VAR_0)
            break;
        if (VAR_1->bol)
            FUNC_1("\n");
        if (VAR_1->space)
            FUNC_1(" ");
        FUNC_1("%s", FUNC_3(VAR_1));
    }
    FUNC_1("\n");
    FUNC_0(0);
}

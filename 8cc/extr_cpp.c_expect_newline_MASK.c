
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3() {
    Token *VAR_1 = FUNC_1();
    if (VAR_1->kind != VAR_0)
        FUNC_0(VAR_1, "newline expected, but got %s", FUNC_2(VAR_1));
}

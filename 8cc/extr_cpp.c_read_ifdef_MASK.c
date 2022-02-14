
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int sval; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6() {
    Token *VAR_2 = FUNC_3();
    if (VAR_2->kind != VAR_0)
        FUNC_1(VAR_2, "identifier expected, but got %s", FUNC_5(VAR_2));
    FUNC_2();
    FUNC_0(FUNC_4(VAR_1, VAR_2->sval));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(Token *VAR_2) {
    FUNC_1('(');
    Token *VAR_3 = FUNC_4();
    if (VAR_3->kind != VAR_1)
        FUNC_0(VAR_3, "_Pragma takes a string literal, but got %s", FUNC_5(VAR_3));
    FUNC_1(')');
    FUNC_3(VAR_3);
    FUNC_2(VAR_2, VAR_0, "1");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int sval; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static Token *FUNC_6() {
    Token *VAR_4 = FUNC_3();
    if (FUNC_2(VAR_4, '(')) {
        VAR_4 = FUNC_3();
        FUNC_1(')');
    }
    if (VAR_4->kind != VAR_0)
        FUNC_0(VAR_4, "identifier expected, but got %s", FUNC_5(VAR_4));
    return FUNC_4(VAR_3, VAR_4->sval) ? VAR_1 : VAR_2;
}

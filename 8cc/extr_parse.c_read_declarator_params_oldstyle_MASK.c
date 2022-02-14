
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_5__ {scalar_t__ kind; int sval; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(Vector *VAR_2) {
    for (;;) {
        Token *VAR_3 = FUNC_2();
        if (VAR_3->kind != VAR_0)
            FUNC_1(VAR_3, "identifier expected, but got %s", FUNC_4(VAR_3));
        FUNC_5(VAR_2, FUNC_0(VAR_1, VAR_3->sval));
        if (FUNC_3(')'))
            return;
        if (!FUNC_3(','))
            FUNC_1(VAR_3, "comma expected, but got %s", FUNC_4(FUNC_2()));
    }
}

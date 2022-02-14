
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_5__ {int space; } ;
typedef TYPE_1__ Token ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(Vector *VAR_0, Token *VAR_1) {
    if (FUNC_2(VAR_0) == 0)
        return;
    Token *VAR_2 = FUNC_0(FUNC_1(VAR_0));
    VAR_2->space = VAR_1->space;
    FUNC_3(VAR_0, 0, VAR_2);
}

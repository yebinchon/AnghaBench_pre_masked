
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {scalar_t__ kind; int space; int bol; } ;
typedef TYPE_1__ Token ;
struct TYPE_8__ {int column; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 TYPE_6__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

Token *FUNC_5() {
    Vector *VAR_3 = FUNC_4(VAR_1);
    if (FUNC_2(VAR_3) > 0)
        return FUNC_3(VAR_3);
    if (FUNC_2(VAR_1) > 1)
        return VAR_2;
    bool VAR_4 = (FUNC_0()->column == 1);
    Token *VAR_5 = FUNC_1();
    while (VAR_5->kind == VAR_0) {
        VAR_5 = FUNC_1();
        VAR_5->space = 1;
    }
    VAR_5->bol = VAR_4;
    return VAR_5;
}

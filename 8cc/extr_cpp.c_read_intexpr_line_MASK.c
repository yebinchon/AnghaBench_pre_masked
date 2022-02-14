
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static Vector *FUNC_5() {
    Vector *VAR_3 = FUNC_1();
    for (;;) {
        Token *VAR_4 = FUNC_3();
        if (VAR_4->kind == VAR_1)
            return VAR_3;
        if (FUNC_0(VAR_4, "defined")) {
            FUNC_4(VAR_3, FUNC_2());
        } else if (VAR_4->kind == VAR_0) {


            FUNC_4(VAR_3, VAR_2);
        } else {
            FUNC_4(VAR_3, VAR_4);
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9(Vector *VAR_2) {
    Token *VAR_3 = FUNC_4();
    if (VAR_3->kind == VAR_1)
        FUNC_0("premature end of input");
    FUNC_2();
    if (FUNC_1(VAR_3)) {
        FUNC_5(VAR_2, 0);
    } else if (FUNC_3(VAR_0)) {
        FUNC_6();
    } else {
        Node *VAR_4 = FUNC_7();
        if (VAR_4)
            FUNC_8(VAR_2, VAR_4);
    }
}

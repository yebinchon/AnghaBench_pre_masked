
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int id; } ;
typedef TYPE_1__ Token ;
typedef int Node ;







 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_13() {
    Token *VAR_3 = FUNC_0();
    if (VAR_3->kind == VAR_2) {
        switch (VAR_3->id) {
        case 131: return FUNC_5();
        case 132: return FUNC_1();
        case 129: return FUNC_9(VAR_1);
        case 130: return FUNC_9(VAR_0);
        case 128: return FUNC_3(VAR_3);
        case '&': return FUNC_6();
        case '*': return FUNC_8(VAR_3);
        case '+': return FUNC_2();
        case '-': return FUNC_11();
        case '~': return FUNC_7(VAR_3);
        case '!': return FUNC_10();
        }
    }
    FUNC_12(VAR_3);
    return FUNC_4();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int id; } ;
typedef TYPE_1__ Token ;
typedef int Node ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (char) ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 () ;
 int * FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 (TYPE_1__*) ;
 int * FUNC_14 () ;
 int * FUNC_15 () ;
 int * FUNC_16 () ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_18() {
    Token *VAR_2 = FUNC_1();
    if (VAR_2->kind == VAR_1) {
        switch (VAR_2->id) {
        case '{': return FUNC_5();
        case 131: return FUNC_12();
        case 133: return FUNC_10();
        case 128: return FUNC_16();
        case 134: return FUNC_8();
        case 130: return FUNC_14();
        case 129: return FUNC_15();
        case 137: return FUNC_4(VAR_2);
        case 135: return FUNC_7(VAR_2);
        case 138: return FUNC_3(VAR_2);
        case 136: return FUNC_6(VAR_2);
        case 132: return FUNC_11();
        }
    }
    if (VAR_2->kind == VAR_0 && FUNC_2(':'))
        return FUNC_13(VAR_2);
    FUNC_17(VAR_2);
    Node *VAR_3 = FUNC_9();
    FUNC_0(';');
    return VAR_3;
}

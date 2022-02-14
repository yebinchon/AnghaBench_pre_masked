
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_16__ {int ty; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int ,char,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_7 (int ) ;
 char* VAR_1 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char) ;
 char* FUNC_10 () ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 () ;
 int * FUNC_13 () ;
 int FUNC_14 () ;
 TYPE_1__* FUNC_15 () ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_19() {
    FUNC_9('(');
    Node *VAR_2 = FUNC_7(FUNC_14());
    FUNC_8(VAR_2);
    FUNC_9(')');

    char *VAR_3 = FUNC_10();
    FUNC_1(VAR_3);
    Node *VAR_4 = FUNC_15();
    Vector *VAR_5 = FUNC_13();
    Node *VAR_6 = FUNC_6(VAR_2->ty, FUNC_12());
    FUNC_18(VAR_5, FUNC_2(VAR_2->ty, '=', VAR_6, VAR_2));
    for (int VAR_7 = 0; VAR_7 < FUNC_17(VAR_0); VAR_7++)
        FUNC_18(VAR_5, FUNC_11(VAR_6, FUNC_16(VAR_0, VAR_7)));
    FUNC_18(VAR_5, FUNC_5(VAR_1 ? VAR_1 : VAR_3));
    if (VAR_4)
        FUNC_18(VAR_5, VAR_4);
    FUNC_18(VAR_5, FUNC_4(VAR_3));
    FUNC_0();
    return FUNC_3(VAR_5);
}

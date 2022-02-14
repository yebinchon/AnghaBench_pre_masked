
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_15__ {int ty; } ;
typedef TYPE_1__ Node ;
typedef int Map ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char*) ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (int ) ;
 int * VAR_0 ;
 char* FUNC_9 () ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 () ;
 TYPE_1__* FUNC_12 () ;
 TYPE_1__* FUNC_13 () ;
 TYPE_1__* FUNC_14 () ;
 int VAR_1 ;
 int FUNC_15 (int *,TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_16() {
    FUNC_7('(');
    char *VAR_2 = FUNC_9();
    char *VAR_3 = FUNC_9();
    char *VAR_4 = FUNC_9();
    Map *VAR_5 = VAR_0;
    VAR_0 = FUNC_10(VAR_0);
    Node *VAR_6 = FUNC_13();
    Node *VAR_7 = FUNC_12();
    if (VAR_7 && FUNC_8(VAR_7->ty))
        VAR_7 = FUNC_3(VAR_1, VAR_7);
    FUNC_7(';');
    Node *VAR_8 = FUNC_12();
    FUNC_7(')');
    FUNC_1(VAR_3, VAR_4);
    Node *VAR_9 = FUNC_14();
    FUNC_0();
    VAR_0 = VAR_5;

    Vector *VAR_10 = FUNC_11();
    if (VAR_6)
        FUNC_15(VAR_10, VAR_6);
    FUNC_15(VAR_10, FUNC_4(VAR_2));
    if (VAR_7)
        FUNC_15(VAR_10, FUNC_5(VAR_7, ((void*)0), FUNC_6(VAR_4)));
    if (VAR_9)
        FUNC_15(VAR_10, VAR_9);
    FUNC_15(VAR_10, FUNC_4(VAR_3));
    if (VAR_8)
        FUNC_15(VAR_10, VAR_8);
    FUNC_15(VAR_10, FUNC_6(VAR_2));
    FUNC_15(VAR_10, FUNC_4(VAR_4));
    return FUNC_2(VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* sval; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_6(Token *VAR_1) {
    char *VAR_2 = VAR_1->sval;
    if (FUNC_2(VAR_0, VAR_2))
        FUNC_1(VAR_1, "duplicate label: %s", FUNC_5(VAR_1));
    Node *VAR_3 = FUNC_0(VAR_2);
    FUNC_3(VAR_0, VAR_2, VAR_3);
    return FUNC_4(VAR_3);
}

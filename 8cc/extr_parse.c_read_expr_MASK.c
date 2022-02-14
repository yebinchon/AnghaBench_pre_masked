
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Node ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;

Node *FUNC_3() {
    Token *VAR_0 = FUNC_1();
    Node *VAR_1 = FUNC_2();
    if (!VAR_1)
        FUNC_0(VAR_0, "expression expected");
    return VAR_1;
}

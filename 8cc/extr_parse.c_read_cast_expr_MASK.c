
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;
typedef int Token ;
typedef int Node ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;

__attribute__((used)) static Node *FUNC_11() {
    Token *VAR_1 = FUNC_2();
    if (FUNC_3(VAR_1, '(') && FUNC_4(FUNC_5())) {
        Type *VAR_2 = FUNC_6();
        FUNC_1(')');
        if (FUNC_3(FUNC_5(), '{')) {
            Node *VAR_3 = FUNC_7(VAR_2);
            return FUNC_8(VAR_3);
        }
        return FUNC_0(VAR_0, VAR_2, FUNC_11());
    }
    FUNC_10(VAR_1);
    return FUNC_9();
}

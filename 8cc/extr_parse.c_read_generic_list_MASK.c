
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Type ;
typedef int Token ;
typedef int Node ;


 char VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (char) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static Vector *FUNC_9(Node **VAR_1) {
    Vector *VAR_2 = FUNC_3();
    for (;;) {
        if (FUNC_4(')'))
            return VAR_2;
        Token *VAR_3 = FUNC_5();
        if (FUNC_4(VAR_0)) {
            if (*VAR_1)
                FUNC_0(VAR_3, "default expression specified twice");
            FUNC_1(':');
            *VAR_1 = FUNC_6();
        } else {
            Type *VAR_4 = FUNC_7();
            FUNC_1(':');
            Node *VAR_5 = FUNC_6();
            FUNC_8(VAR_2, FUNC_2(VAR_4, VAR_5));
        }
        FUNC_4(',');
    }
}

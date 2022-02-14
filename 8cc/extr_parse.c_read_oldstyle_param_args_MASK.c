
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Map ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,char) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static Vector *FUNC_7() {
    Map *VAR_1 = VAR_0;
    VAR_0 = ((void*)0);
    Vector *VAR_2 = FUNC_3();
    for (;;) {
        if (FUNC_1(FUNC_4(), '{'))
            break;
        if (!FUNC_2(FUNC_4()))
            FUNC_0(FUNC_4(), "K&R-style declarator expected, but got %s", FUNC_6(FUNC_4()));
        FUNC_5(VAR_2, 0);
    }
    VAR_0 = VAR_1;
    return VAR_2;
}

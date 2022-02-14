
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(Vector *VAR_1) {
    if (FUNC_3(VAR_1) == 0)
        return;
    if (FUNC_1(FUNC_2(VAR_1), VAR_0))
        FUNC_0(FUNC_2(VAR_1), "'##' cannot appear at start of macro expansion");
    if (FUNC_1(FUNC_4(VAR_1), VAR_0))
        FUNC_0(FUNC_4(VAR_1), "'##' cannot appear at end of macro expansion");
}

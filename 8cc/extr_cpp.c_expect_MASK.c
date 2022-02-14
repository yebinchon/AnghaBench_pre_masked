
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;


 int FUNC_0 (int *,char*,char,int ) ;
 int FUNC_1 (int *,char) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(char VAR_0) {
    Token *VAR_1 = FUNC_2();
    if (!FUNC_1(VAR_1, VAR_0))
        FUNC_0(VAR_1, "%c expected, but got %s", VAR_0, FUNC_3(VAR_1));
}

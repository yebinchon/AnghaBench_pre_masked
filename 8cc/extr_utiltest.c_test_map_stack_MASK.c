
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Map ;


 int FUNC_0 (int,int) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,void*) ;

__attribute__((used)) static void FUNC_5() {
    Map *VAR_0 = FUNC_1();
    FUNC_4(VAR_0, "x", (void *)1);
    FUNC_4(VAR_0, "y", (void *)2);
    FUNC_0(1, (int)(intptr_t)FUNC_3(VAR_0, "x"));

    Map *VAR_1 = FUNC_2(VAR_0);
    FUNC_0(1, (int)(intptr_t)FUNC_3(VAR_1, "x"));
    FUNC_4(VAR_1, "x", (void *)3);
    FUNC_0(3, (int)(intptr_t)FUNC_3(VAR_1, "x"));
    FUNC_0(1, (int)(intptr_t)FUNC_3(VAR_0, "x"));
}

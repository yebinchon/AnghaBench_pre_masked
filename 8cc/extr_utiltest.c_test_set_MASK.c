
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Set ;


 int FUNC_0 (int,int ) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5() {
    Set *VAR_0 = ((void*)0);
    FUNC_0(0, FUNC_2(VAR_0, "abc"));
    VAR_0 = FUNC_1(VAR_0, "abc");
    VAR_0 = FUNC_1(VAR_0, "def");
    FUNC_0(1, FUNC_2(VAR_0, "abc"));
    FUNC_0(1, FUNC_2(VAR_0, "def"));
    FUNC_0(0, FUNC_2(VAR_0, "xyz"));
    Set *VAR_1 = ((void*)0);
    VAR_1 = FUNC_1(VAR_1, "abc");
    VAR_1 = FUNC_1(VAR_1, "DEF");
    FUNC_0(1, FUNC_2(FUNC_4(VAR_0, VAR_1), "abc"));
    FUNC_0(1, FUNC_2(FUNC_4(VAR_0, VAR_1), "def"));
    FUNC_0(1, FUNC_2(FUNC_4(VAR_0, VAR_1), "DEF"));
    FUNC_0(1, FUNC_2(FUNC_3(VAR_0, VAR_1), "abc"));
    FUNC_0(0, FUNC_2(FUNC_3(VAR_0, VAR_1), "def"));
    FUNC_0(0, FUNC_2(FUNC_3(VAR_0, VAR_1), "DEF"));
}

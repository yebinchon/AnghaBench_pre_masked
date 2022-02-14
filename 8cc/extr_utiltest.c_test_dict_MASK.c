
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dict ;


 int FUNC_0 (int,long) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,void*) ;
 int * FUNC_5 () ;
 long FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7() {
    Dict *VAR_0 = FUNC_5();
    FUNC_1(FUNC_2(VAR_0, "abc"));
    FUNC_4(VAR_0, "abc", (void *)50);
    FUNC_4(VAR_0, "xyz", (void *)70);
    FUNC_0(50, (long)FUNC_2(VAR_0, "abc"));
    FUNC_0(70, (long)FUNC_2(VAR_0, "xyz"));
    FUNC_0(2, FUNC_6(FUNC_3(VAR_0)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(char *VAR_1) {
    if (!FUNC_1(VAR_1, "error"))
        VAR_0 = 1;
    else if (FUNC_1(VAR_1, "all"))
        FUNC_0("unknown -W option: %s", VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0) {
    if (FUNC_1(VAR_0, "64"))
        FUNC_0("Only 64 is allowed for -m, but got %s", VAR_0);
}

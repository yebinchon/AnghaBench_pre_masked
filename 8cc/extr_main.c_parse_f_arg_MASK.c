
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(char *VAR_3) {
    if (!FUNC_0(VAR_3, "dump-ast"))
        VAR_0 = 1;
    else if (!FUNC_0(VAR_3, "dump-stack"))
        VAR_2 = 1;
    else if (!FUNC_0(VAR_3, "no-dump-source"))
        VAR_1 = 0;
    else
        FUNC_1(1);
}

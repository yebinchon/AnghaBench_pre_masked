
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;

void FUNC_4(char *VAR_0, int VAR_1, char *VAR_2, char *VAR_3) {
    if (!FUNC_3(VAR_2, VAR_3))
        return;
    FUNC_2();
    FUNC_1("%s:%d: \"%s\" expected, but got \"%s\"\n", VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_0(1);
}

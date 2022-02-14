
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5)
{
    VAR_0 = FUNC_2();
    if (VAR_0 < 0) {
        FUNC_4("fork");
        FUNC_1(1);
    }

    if (VAR_0 > 0) {
        FUNC_3("%s %s %s %s %s\n", VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        FUNC_3("start server pid=%d\n", VAR_0);
        FUNC_5(100000);
        return;
    }



    FUNC_0(VAR_1, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;

void
FUNC_5()
{
    char *VAR_0 = FUNC_0();
    int VAR_1 = FUNC_2(VAR_0);
    FUNC_3(VAR_1, "put 0 0 1 1\r\n");
    FUNC_3(VAR_1, "a\r\n");
    FUNC_1(VAR_1, "INSERTED 1\r\n");

    FUNC_3(VAR_1, "peek 1\r\n");
    FUNC_1(VAR_1, "FOUND 1 1\r\n");
    FUNC_1(VAR_1, "a\r\n");

    FUNC_4(VAR_0);
}

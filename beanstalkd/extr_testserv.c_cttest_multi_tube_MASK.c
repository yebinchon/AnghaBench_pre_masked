
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;

void
FUNC_4()
{
    int VAR_0 = FUNC_0();
    int VAR_1 = FUNC_2(VAR_0);
    FUNC_3(VAR_1, "use abc\r\n");
    FUNC_1(VAR_1, "USING abc\r\n");
    FUNC_3(VAR_1, "put 999999 0 0 0\r\n");
    FUNC_3(VAR_1, "\r\n");
    FUNC_1(VAR_1, "INSERTED 1\r\n");
    FUNC_3(VAR_1, "use def\r\n");
    FUNC_1(VAR_1, "USING def\r\n");
    FUNC_3(VAR_1, "put 99 0 0 0\r\n");
    FUNC_3(VAR_1, "\r\n");
    FUNC_1(VAR_1, "INSERTED 2\r\n");
    FUNC_3(VAR_1, "watch abc\r\n");
    FUNC_1(VAR_1, "WATCHING 2\r\n");
    FUNC_3(VAR_1, "watch def\r\n");
    FUNC_1(VAR_1, "WATCHING 3\r\n");
    FUNC_3(VAR_1, "reserve\r\n");
    FUNC_1(VAR_1, "RESERVED 2 0\r\n");
}

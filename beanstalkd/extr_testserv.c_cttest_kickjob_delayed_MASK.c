
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

    FUNC_3(VAR_1, "put 0 0 1 1\r\n");
    FUNC_3(VAR_1, "A\r\n");
    FUNC_1(VAR_1, "INSERTED 1\r\n");
    FUNC_3(VAR_1, "put 0 10 1 1\r\n");
    FUNC_3(VAR_1, "B\r\n");
    FUNC_1(VAR_1, "INSERTED 2\r\n");

    FUNC_3(VAR_1, "kick-job 1\r\n");
    FUNC_1(VAR_1, "NOT_FOUND\r\n");
    FUNC_3(VAR_1, "kick-job 2\r\n");
    FUNC_1(VAR_1, "KICKED\r\n");
    FUNC_3(VAR_1, "kick-job 2\r\n");
    FUNC_1(VAR_1, "NOT_FOUND\r\n");
}

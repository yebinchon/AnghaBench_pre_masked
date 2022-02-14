
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;

void
FUNC_5()
{
    int VAR_0 = FUNC_0();
    int VAR_1 = FUNC_3(VAR_0);


    FUNC_4(VAR_1, "put 0 0 1 1\r\n");
    FUNC_4(VAR_1, "A\r\n");
    FUNC_1(VAR_1, "INSERTED 1\r\n");
    FUNC_4(VAR_1, "reserve-job 1\r\n");
    FUNC_1(VAR_1, "RESERVED 1 1\r\n");
    FUNC_1(VAR_1, "A\r\n");
    FUNC_4(VAR_1, "bury 1 1\r\n");
    FUNC_1(VAR_1, "BURIED\r\n");


    FUNC_4(VAR_1, "put 0 0 1 1\r\n");
    FUNC_4(VAR_1, "B\r\n");
    FUNC_1(VAR_1, "INSERTED 2\r\n");
    FUNC_4(VAR_1, "reserve-job 2\r\n");
    FUNC_1(VAR_1, "RESERVED 2 1\r\n");
    FUNC_1(VAR_1, "B\r\n");
    FUNC_4(VAR_1, "bury 2 1\r\n");
    FUNC_1(VAR_1, "BURIED\r\n");


    FUNC_4(VAR_1, "reserve-job 2\r\n");
    FUNC_1(VAR_1, "RESERVED 2 1\r\n");
    FUNC_1(VAR_1, "B\r\n");
    FUNC_4(VAR_1, "reserve-job 1\r\n");
    FUNC_1(VAR_1, "RESERVED 1 1\r\n");
    FUNC_1(VAR_1, "A\r\n");


    FUNC_4(VAR_1, "release 1 1 0\r\n");
    FUNC_1(VAR_1, "RELEASED\r\n");
    FUNC_4(VAR_1, "release 2 1 0\r\n");
    FUNC_1(VAR_1, "RELEASED\r\n");
    FUNC_4(VAR_1, "stats-job 1\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\nstate: ready\n");
    FUNC_4(VAR_1, "stats-job 2\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\nstate: ready\n");

}

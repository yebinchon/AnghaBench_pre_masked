
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;

void
FUNC_6()
{
    int VAR_0 = FUNC_0();
    int VAR_1 = FUNC_3(VAR_0);

    FUNC_4(VAR_1, "put 0 5 1 1\r\n");
    FUNC_4(VAR_1, "a\r\n");
    FUNC_1(VAR_1, "INSERTED 1\r\n");

    FUNC_4(VAR_1, "stats-job 1\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\nstate: delayed\n");

    FUNC_4(VAR_1, "reserve-job 1\r\n");
    FUNC_1(VAR_1, "RESERVED 1 1\r\n");
    FUNC_1(VAR_1, "a\r\n");


    FUNC_5(100000);
    FUNC_4(VAR_1, "stats-job 1\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\nstate: reserved\n");




    FUNC_4(VAR_1, "reserve-with-timeout 1\r\n");
    FUNC_1(VAR_1, "DEADLINE_SOON\r\n");


    FUNC_4(VAR_1, "stats-job 1\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\nstate: reserved\n");



    FUNC_5(1000000);

    FUNC_4(VAR_1, "put 0 0 1 1\r\n");
    FUNC_4(VAR_1, "B\r\n");
    FUNC_1(VAR_1, "INSERTED 2\r\n");

    FUNC_4(VAR_1, "stats-job 1\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\nstate: ready\n");
}

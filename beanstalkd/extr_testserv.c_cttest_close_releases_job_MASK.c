
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;

void
FUNC_6()
{
    int VAR_0 = FUNC_0();
    int VAR_1 = FUNC_4(VAR_0);
    int VAR_2 = FUNC_4(VAR_0);
    FUNC_5(VAR_1, "reserve-with-timeout 1\r\n");

    FUNC_5(VAR_2, "put 0 0 100 1\r\n");
    FUNC_5(VAR_2, "a\r\n");
    FUNC_1(VAR_2, "INSERTED 1\r\n");

    FUNC_1(VAR_1, "RESERVED 1 1\r\n");
    FUNC_1(VAR_1, "a\r\n");

    FUNC_5(VAR_2, "stats-job 1\r\n");
    FUNC_2(VAR_2, "OK ");
    FUNC_2(VAR_2, "\nstate: reserved\n");


    FUNC_3(VAR_1);



    FUNC_5(VAR_2, "reserve-with-timeout 1\r\n");
    FUNC_1(VAR_2, "RESERVED 1 1\r\n");
    FUNC_1(VAR_2, "a\r\n");
}

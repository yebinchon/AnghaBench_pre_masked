
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
    FUNC_4(VAR_1, "put 0 1 1 0\r\n");
    FUNC_4(VAR_1, "\r\n");
    FUNC_1(VAR_1, "INSERTED 1\r\n");

    FUNC_4(VAR_1, "stats-tube default\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\ncurrent-jobs-ready: 0\n");

    FUNC_4(VAR_1, "stats-tube default\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\ncurrent-jobs-delayed: 1\n");

    FUNC_4(VAR_1, "stats-tube default\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\ntotal-jobs: 1\n");

    FUNC_5(1010000);



    FUNC_4(VAR_1, "stats-tube default\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\ncurrent-jobs-ready: 1\n");

    FUNC_4(VAR_1, "stats-tube default\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\ncurrent-jobs-delayed: 0\n");

    FUNC_4(VAR_1, "stats-tube default\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_2(VAR_1, "\ntotal-jobs: 1\n");
}

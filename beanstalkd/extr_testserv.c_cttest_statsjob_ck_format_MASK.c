
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
    FUNC_3(VAR_1, "stats-job 111ABC\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");
    FUNC_3(VAR_1, "stats-job 111 222\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");
    FUNC_3(VAR_1, "stats-job 111\r\n");
    FUNC_1(VAR_1, "NOT_FOUND\r\n");
}

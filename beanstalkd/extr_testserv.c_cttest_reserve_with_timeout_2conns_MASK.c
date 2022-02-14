
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;

void
FUNC_4()
{
    int VAR_2, VAR_3;

    VAR_0 = 10;

    int VAR_4 = FUNC_0();
    VAR_2 = FUNC_2(VAR_4);
    VAR_3 = FUNC_2(VAR_4);
    FUNC_3(VAR_2, "watch foo\r\n");
    FUNC_1(VAR_2, "WATCHING 2\r\n");
    FUNC_3(VAR_2, "reserve-with-timeout 1\r\n");
    FUNC_3(VAR_3, "watch foo\r\n");
    FUNC_1(VAR_3, "WATCHING 2\r\n");
    VAR_1 = 1100000000;
    FUNC_1(VAR_2, "TIMED_OUT\r\n");
}

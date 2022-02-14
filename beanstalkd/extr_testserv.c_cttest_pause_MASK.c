
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;

void
FUNC_6()
{
    int64 VAR_0;

    int VAR_1 = FUNC_0();
    int VAR_2 = FUNC_3(VAR_1);
    FUNC_4(VAR_2, "put 0 0 0 1\r\n");
    FUNC_4(VAR_2, "x\r\n");
    FUNC_2(VAR_2, "INSERTED 1\r\n");
    VAR_0 = FUNC_5();
    FUNC_4(VAR_2, "pause-tube default 1\r\n");
    FUNC_2(VAR_2, "PAUSED\r\n");
    FUNC_4(VAR_2, "reserve\r\n");
    FUNC_2(VAR_2, "RESERVED 1 1\r\n");
    FUNC_2(VAR_2, "x\r\n");
    FUNC_1(FUNC_5() - VAR_0 >= 1000000000);
}

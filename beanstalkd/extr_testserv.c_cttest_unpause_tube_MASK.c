
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
    int VAR_0, VAR_1;

    int VAR_2 = FUNC_0();
    VAR_0 = FUNC_2(VAR_2);
    VAR_1 = FUNC_2(VAR_2);

    FUNC_3(VAR_0, "put 0 0 0 0\r\n");
    FUNC_3(VAR_0, "\r\n");
    FUNC_1(VAR_0, "INSERTED 1\r\n");

    FUNC_3(VAR_0, "pause-tube default 86400\r\n");
    FUNC_1(VAR_0, "PAUSED\r\n");

    FUNC_3(VAR_1, "reserve\r\n");

    FUNC_3(VAR_0, "pause-tube default 0\r\n");
    FUNC_1(VAR_0, "PAUSED\r\n");



    FUNC_1(VAR_1, "RESERVED 1 0\r\n");
    FUNC_1(VAR_1, "\r\n");
}


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


    FUNC_3(VAR_1, "release 18446744073709551616 1 1\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");
    FUNC_3(VAR_1, "release 184467440737095516160000000000000000000000000000 1 1\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");
    FUNC_3(VAR_1, "release foo111\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");
    FUNC_3(VAR_1, "release 111foo\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");


    FUNC_3(VAR_1, "release 18446744073709551615 abc 1\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");


    FUNC_3(VAR_1, "release 18446744073709551615 1 abc\r\n");
    FUNC_1(VAR_1, "BAD_FORMAT\r\n");
}

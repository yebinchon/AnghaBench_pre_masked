
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

    FUNC_4(VAR_1, "watch w\r\n");
    FUNC_1(VAR_1, "WATCHING 2\r\n");

    FUNC_4(VAR_1, "use u\r\n");
    FUNC_1(VAR_1, "USING u\r\n");

    FUNC_4(VAR_1, "list-tubes\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_1(VAR_1,
           "---\n"
           "- default\n"
           "- w\n"
           "- u\n\r\n");

    FUNC_4(VAR_1, "list-tube-used\r\n");
    FUNC_1(VAR_1, "USING u\r\n");

    FUNC_4(VAR_1, "list-tubes-watched\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_1(VAR_1,
           "---\n"
           "- default\n"
           "- w\n\r\n");

    FUNC_4(VAR_1, "ignore default\r\n");
    FUNC_1(VAR_1, "WATCHING 1\r\n");

    FUNC_4(VAR_1, "list-tubes-watched\r\n");
    FUNC_2(VAR_1, "OK ");
    FUNC_1(VAR_1,
           "---\n"
           "- w\n\r\n");

    FUNC_4(VAR_1, "ignore w\r\n");
    FUNC_1(VAR_1, "NOT_IGNORED\r\n");
}

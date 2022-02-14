
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char,int const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;

void
FUNC_5()
{

    VAR_1 = VAR_0;
    int VAR_2 = FUNC_0();
    int VAR_3 = FUNC_3(VAR_2);
    FUNC_4(VAR_3, "put 0 0 0 1073741825\r\n");

    const int VAR_4 = 1024*1024;
    char VAR_5[VAR_4+1];
    FUNC_2(VAR_5, 'a', VAR_4);
    VAR_5[VAR_4] = 0;

    int VAR_6;
    for (VAR_6=0; VAR_6<VAR_0; VAR_6+=VAR_4) {
        FUNC_4(VAR_3, VAR_5);
    }
    FUNC_4(VAR_3, "x");
    FUNC_4(VAR_3, "\r\n");
    FUNC_1(VAR_3, "JOB_TOO_BIG\r\n");
}

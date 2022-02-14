
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

int
FUNC_2(void)
{
    VAR_0 = FUNC_0();
    if (VAR_0 == -1) {
        FUNC_1("kqueue");
        return -1;
    }
    return 0;
}

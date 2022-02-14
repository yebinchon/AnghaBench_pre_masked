
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*) ;
 char* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

void
FUNC_4()
{
    char *VAR_0;

    VAR_0 = FUNC_1("hello, %s %d", "world", 5);
    FUNC_0(FUNC_3("hello, world 5", VAR_0) == 0, "got \"%s\"", VAR_0);
    FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
    int VAR_4 = FUNC_6();
    FUNC_1(2000);
    FUNC_2("Start control_task cpu=%d\n", VAR_4);
    int64_t VAR_5 = FUNC_0();

    FUNC_4();
    FUNC_1(VAR_2 * 1000 + VAR_0 * 1000);
    FUNC_3();

    VAR_1 = (FUNC_0() - VAR_5) / 1000;
    FUNC_2("Finish control_task cpu=%d, time=%d ms\n", VAR_4, VAR_1);
    FUNC_5(((void*)0));
}

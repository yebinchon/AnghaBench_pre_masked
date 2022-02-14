
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

void FUNC_4(void *VAR_4)
{
    FUNC_2("Task 'failed_assert_task' start.\n");
    while (1) {
        FUNC_3(1000 / VAR_2);
        FUNC_2("Task 'failed_assert_task' run.\n");
        if(VAR_1 & VAR_0) {
            FUNC_2("Assert.\n");
            FUNC_0(0);
        }
    }
    FUNC_1(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimerHandle_t ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int *,char*,int,int *,int,int *,int) ;
 int FUNC_4 (char*,int,int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_9)
{
    VAR_3 = 0;
    VAR_2 = 0;

    FUNC_1("Test for CPU%d\n", VAR_9);
    TimerHandle_t VAR_10 = FUNC_4("count_time", 1, VAR_4, ((void*)0), VAR_7);
    FUNC_6( VAR_10, VAR_5);
    FUNC_3(&VAR_0, "control_task", 8192, ((void*)0), 5, ((void*)0), VAR_9);

    FUNC_2(VAR_8 * 2 / VAR_6);
    FUNC_5(VAR_10, VAR_5);
    FUNC_1("Finish duration_timer_ms=%d ms\n", VAR_3);

    FUNC_0(2, VAR_8 * 2, VAR_3);
    FUNC_0(5, VAR_8 + VAR_1, VAR_2);

    FUNC_1("\n");
}

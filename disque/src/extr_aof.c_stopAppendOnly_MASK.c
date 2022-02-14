
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aof_state; int aof_fd; int aof_selected_db; int aof_child_pid; int aof_rewrite_time_start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,long) ;
 int FUNC_9 (int*,int ,int *) ;

void FUNC_10(void) {
    FUNC_7(VAR_3.aof_state != VAR_0);
    FUNC_5(1);
    FUNC_3(VAR_3.aof_fd);
    FUNC_4(VAR_3.aof_fd);

    VAR_3.aof_fd = -1;
    VAR_3.aof_selected_db = -1;
    VAR_3.aof_state = VAR_0;

    if (VAR_3.aof_child_pid != -1) {
        int VAR_4;

        FUNC_8(VAR_1,"Killing running AOF rewrite child: %ld",
            (long) VAR_3.aof_child_pid);
        if (FUNC_6(VAR_3.aof_child_pid,VAR_2) != -1)
            FUNC_9(&VAR_4,0,((void*)0));

        FUNC_2();
        FUNC_1(VAR_3.aof_child_pid);
        VAR_3.aof_child_pid = -1;
        VAR_3.aof_rewrite_time_start = -1;

        FUNC_0();
    }
}

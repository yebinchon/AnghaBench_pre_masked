
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aof_state; int aof_child_pid; int pidfile; scalar_t__ daemonize; int aof_filename; int aof_fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_9) {
    int VAR_10 = VAR_9 & VAR_6;

    FUNC_4(VAR_5,"User requested shutdown...");



    if (VAR_8.aof_state != VAR_0) {


        if (VAR_8.aof_child_pid != -1) {


            if (VAR_8.aof_state == VAR_1) {
                FUNC_4(VAR_5, "Writing initial AOF, can't exit.");
                return VAR_2;
            }
            FUNC_4(VAR_5,
                "There is a child rewriting the AOF. Killing it!");
            FUNC_2(VAR_8.aof_child_pid,VAR_7);
        }

        FUNC_4(VAR_4,"Calling fsync() on the AOF file.");
        FUNC_0(VAR_8.aof_fd);
    }


    if (VAR_10) {
        if (FUNC_3(VAR_8.aof_filename,0) == VAR_2)
            return VAR_2;
    }

    if (VAR_8.daemonize) {
        FUNC_4(VAR_4,"Removing the pid file.");
        FUNC_5(VAR_8.pidfile);
    }


    FUNC_1(1);
    FUNC_4(VAR_5,"Disque is now ready to exit, bye bye...");
    return VAR_3;
}

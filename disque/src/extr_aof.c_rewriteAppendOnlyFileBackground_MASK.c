
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_2__ {int aof_child_pid; long long stat_fork_time; double stat_fork_rate; int aof_selected_db; int aof_rewrite_time_start; scalar_t__ aof_rewrite_scheduled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 long long FUNC_13 () ;
 size_t FUNC_14 () ;
 scalar_t__ FUNC_15 () ;

int FUNC_16(void) {
    pid_t VAR_6;
    long long VAR_7;

    if (VAR_5.aof_child_pid != -1) return VAR_0;
    if (FUNC_0() != VAR_1) return VAR_0;
    VAR_7 = FUNC_13();
    if ((VAR_6 = FUNC_3()) == 0) {
        char VAR_8[256];


        FUNC_1(0);
        FUNC_8("disque-aof-rewrite");
        FUNC_9(VAR_8,256,"temp-rewriteaof-bg-%d.aof", (int) FUNC_4());
        if (FUNC_6(VAR_8,1) == VAR_1) {
            size_t VAR_9 = FUNC_14();

            if (VAR_9) {
                FUNC_7(VAR_2,
                    "AOF rewrite: %zu MB of memory used by copy-on-write",
                    VAR_9/(1024*1024));
            }
            FUNC_2(0);
        } else {
            FUNC_2(1);
        }
    } else {

        VAR_5.stat_fork_time = FUNC_13()-VAR_7;
        VAR_5.stat_fork_rate = (double) FUNC_15() * 1000000 / VAR_5.stat_fork_time / (1024*1024*1024);
        FUNC_5("fork",VAR_5.stat_fork_time/1000);
        if (VAR_6 == -1) {
            FUNC_7(VAR_3,
                "Can't rewrite append only file in background: fork: %s",
                FUNC_10(VAR_4));
            return VAR_0;
        }
        FUNC_7(VAR_2,
            "Background append only file rewriting started by pid %d",VAR_6);
        VAR_5.aof_rewrite_scheduled = 0;
        VAR_5.aof_rewrite_time_start = FUNC_11(((void*)0));
        VAR_5.aof_child_pid = VAR_6;
        FUNC_12();




        VAR_5.aof_selected_db = -1;
        return VAR_1;
    }
    return VAR_1;
}

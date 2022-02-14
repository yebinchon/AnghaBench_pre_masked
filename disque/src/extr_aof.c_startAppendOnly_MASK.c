
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aof_fd; scalar_t__ aof_state; int aof_filename; int unixtime; int aof_last_fsync; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;

int FUNC_6(void) {
    VAR_9.aof_last_fsync = VAR_9.unixtime;
    VAR_9.aof_fd = FUNC_1(VAR_9.aof_filename,VAR_7|VAR_5|VAR_6,0644);
    FUNC_3(VAR_9.aof_state == VAR_0);
    if (VAR_9.aof_fd == -1) {
        FUNC_4(VAR_4,"Disque needs to enable the AOF but can't open the append only file: %s",FUNC_5(VAR_8));
        return VAR_2;
    }
    if (FUNC_2() == VAR_2) {
        FUNC_0(VAR_9.aof_fd);
        FUNC_4(VAR_4,"Disque needs to enable the AOF but can't trigger a background AOF rewrite operation. Check the above logs for more info about the error.");
        return VAR_2;
    }


    VAR_9.aof_state = VAR_1;
    return VAR_3;
}

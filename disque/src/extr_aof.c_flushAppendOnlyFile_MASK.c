
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ssize_t ;
typedef int mstime_t ;
struct TYPE_2__ {scalar_t__ aof_fsync; scalar_t__ aof_flush_postponed_start; scalar_t__ unixtime; int aof_child_pid; int aof_current_size; scalar_t__ aof_last_write_status; scalar_t__ aof_last_fsync; int aof_fd; scalar_t__ aof_no_fsync_on_rewrite; int aof_buf; int aof_last_write_errno; int aof_delayed_fsync; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int) ;
 TYPE_1__ VAR_10 ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;

void FUNC_17(int VAR_11) {
    ssize_t VAR_12;
    int VAR_13 = 0;
    mstime_t VAR_14;

    if (FUNC_12(VAR_10.aof_buf) == 0) return;

    if (VAR_10.aof_fsync == VAR_1)
        VAR_13 = FUNC_2(VAR_3) != 0;

    if (VAR_10.aof_fsync == VAR_1 && !VAR_11) {



        if (VAR_13) {
            if (VAR_10.aof_flush_postponed_start == 0) {


                VAR_10.aof_flush_postponed_start = VAR_10.unixtime;
                return;
            } else if (VAR_10.unixtime - VAR_10.aof_flush_postponed_start < 2) {


                return;
            }


            VAR_10.aof_delayed_fsync++;
            FUNC_14(VAR_7,"Asynchronous AOF fsync is taking too long (disk is busy?). Writing the AOF buffer without waiting for fsync to complete, this may slow down Disque.");
        }
    }






    FUNC_7(VAR_14);
    VAR_12 = FUNC_16(VAR_10.aof_fd,VAR_10.aof_buf,FUNC_12(VAR_10.aof_buf));
    FUNC_6(VAR_14);





    if (VAR_13) {
        FUNC_5("aof-write-pending-fsync",VAR_14);
    } else if (VAR_10.aof_child_pid != -1) {
        FUNC_5("aof-write-active-child",VAR_14);
    } else {
        FUNC_5("aof-write-alone",VAR_14);
    }
    FUNC_5("aof-write",VAR_14);


    VAR_10.aof_flush_postponed_start = 0;

    if (VAR_12 != (signed)FUNC_12(VAR_10.aof_buf)) {
        static time_t VAR_15 = 0;
        int VAR_16 = 0;


        if ((VAR_10.unixtime - VAR_15) > VAR_2) {
            VAR_16 = 1;
            VAR_15 = VAR_10.unixtime;
        }


        if (VAR_12 == -1) {
            if (VAR_16) {
                FUNC_14(VAR_8,"Error writing to the AOF file: %s",
                    FUNC_15(VAR_9));
                VAR_10.aof_last_write_errno = VAR_9;
            }
        } else {
            if (VAR_16) {
                FUNC_14(VAR_8,"Short write while writing to "
                                       "the AOF file: (nwritten=%lld, "
                                       "expected=%lld)",
                                       (long long)VAR_12,
                                       (long long)FUNC_12(VAR_10.aof_buf));
            }

            if (FUNC_4(VAR_10.aof_fd, VAR_10.aof_current_size) == -1) {
                if (VAR_16) {
                    FUNC_14(VAR_8, "Could not remove short write "
                             "from the append-only file.  Disque may refuse "
                             "to load the AOF the next time it starts.  "
                             "ftruncate: %s", FUNC_15(VAR_9));
                }
            } else {


                VAR_12 = -1;
            }
            VAR_10.aof_last_write_errno = VAR_6;
        }


        if (VAR_10.aof_fsync == VAR_0) {




            FUNC_14(VAR_8,"Can't recover from AOF write error when the AOF fsync policy is 'always'. Exiting...");
            FUNC_3(1);
        } else {



            VAR_10.aof_last_write_status = VAR_4;



            if (VAR_12 > 0) {
                VAR_10.aof_current_size += VAR_12;
                FUNC_13(VAR_10.aof_buf,VAR_12,-1);
            }
            return;
        }
    } else {


        if (VAR_10.aof_last_write_status == VAR_4) {
            FUNC_14(VAR_8,
                "AOF write error looks solved, Disque can write again.");
            VAR_10.aof_last_write_status = VAR_5;
        }
    }
    VAR_10.aof_current_size += VAR_12;



    if ((FUNC_12(VAR_10.aof_buf)+FUNC_8(VAR_10.aof_buf)) < 4000) {
        FUNC_9(VAR_10.aof_buf);
    } else {
        FUNC_11(VAR_10.aof_buf);
        VAR_10.aof_buf = FUNC_10();
    }



    if (VAR_10.aof_no_fsync_on_rewrite && VAR_10.aof_child_pid != -1)
        return;


    if (VAR_10.aof_fsync == VAR_0) {


        FUNC_7(VAR_14);
        FUNC_1(VAR_10.aof_fd);
        FUNC_6(VAR_14);
        FUNC_5("aof-fsync-always",VAR_14);
        VAR_10.aof_last_fsync = VAR_10.unixtime;
    } else if ((VAR_10.aof_fsync == VAR_1 &&
                VAR_10.unixtime > VAR_10.aof_last_fsync)) {
        if (!VAR_13) FUNC_0(VAR_10.aof_fd);
        VAR_10.aof_last_fsync = VAR_10.unixtime;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aof_state; scalar_t__ configfile; scalar_t__ aof_enqueue_jobs_once; int aof_filename; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ,char*,float) ;
 float FUNC_3 (int ) ;
 long long FUNC_4 () ;

void FUNC_5(void) {
    long long VAR_6 = FUNC_4();
    if (VAR_5.aof_state == VAR_0 || VAR_5.aof_enqueue_jobs_once) {
        if (FUNC_0(VAR_5.aof_filename) == VAR_1)
            FUNC_2(VAR_2,"DB loaded from append only file: %.3f seconds",(float)(FUNC_4()-VAR_6)/1000000);



        if (VAR_5.aof_enqueue_jobs_once && VAR_5.configfile) {
            VAR_5.aof_enqueue_jobs_once = 0;
            if (FUNC_1(VAR_5.configfile) == -1) {
                FUNC_2(VAR_3,
                    "CONFIG REWRITE failed "
                    "(executed to turn off aof-enqueue-jobs-once): %s",
                    FUNC_3(VAR_4));
            }
        }
    }
}

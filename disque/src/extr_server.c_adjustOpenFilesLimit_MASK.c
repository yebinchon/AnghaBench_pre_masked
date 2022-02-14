
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
typedef scalar_t__ rlim_t ;
struct TYPE_2__ {int maxclients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct rlimit*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ,char*,unsigned long long,...) ;
 int FUNC_3 (int ,struct rlimit*) ;
 unsigned long long FUNC_4 (int) ;

void FUNC_5(void) {
    rlim_t VAR_6 = VAR_5.maxclients+VAR_0;
    struct rlimit VAR_7;

    if (FUNC_1(VAR_3,&VAR_7) == -1) {
        FUNC_2(VAR_2,"Unable to obtain the current NOFILE limit (%s), assuming 1024 and setting the max clients configuration accordingly.",
            FUNC_4(VAR_4));
        VAR_5.maxclients = 1024-VAR_0;
    } else {
        rlim_t VAR_8 = VAR_7.rlim_cur;



        if (VAR_8 < VAR_6) {
            rlim_t VAR_9;
            int VAR_10 = 0;



            VAR_9 = VAR_6;
            while(VAR_9 > VAR_8) {
                rlim_t VAR_11 = 16;

                VAR_7.rlim_cur = VAR_9;
                VAR_7.rlim_max = VAR_9;
                if (FUNC_3(VAR_3,&VAR_7) != -1) break;
                VAR_10 = VAR_4;



                if (VAR_9 < VAR_11) break;
                VAR_9 -= VAR_11;
            }



            if (VAR_9 < VAR_8) VAR_9 = VAR_8;

            if (VAR_9 < VAR_6) {
                int VAR_12 = VAR_5.maxclients;
                VAR_5.maxclients = VAR_9-VAR_0;
                if (VAR_5.maxclients < 1) {
                    FUNC_2(VAR_2,"Your current 'ulimit -n' "
                        "of %llu is not enough for the server to start. "
                        "Please increase your open file limit to at least "
                        "%llu. Exiting.",
                        (unsigned long long) VAR_8,
                        (unsigned long long) VAR_6);
                    FUNC_0(1);
                }
                FUNC_2(VAR_2,"You requested maxclients of %d "
                    "requiring at least %llu max file descriptors.",
                    VAR_12,
                    (unsigned long long) VAR_6);
                FUNC_2(VAR_2,"Server can't set maximum open files "
                    "to %llu because of OS error: %s.",
                    (unsigned long long) VAR_6, FUNC_4(VAR_10));
                FUNC_2(VAR_2,"Current maximum open files is %llu. "
                    "maxclients has been reduced to %d to compensate for "
                    "low ulimit. "
                    "If you need higher maxclients increase 'ulimit -n'.",
                    (unsigned long long) VAR_9, VAR_5.maxclients);
            } else {
                FUNC_2(VAR_1,"Increased maximum number of open files "
                    "to %llu (it was originally set to %llu).",
                    (unsigned long long) VAR_6,
                    (unsigned long long) VAR_8);
            }
        }
    }
}

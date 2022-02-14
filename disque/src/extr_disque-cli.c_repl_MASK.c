
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_2__ {int interactive; char* prompt; scalar_t__ cluster_reissue_command; scalar_t__ cluster_mode; void* hostport; int hostip; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int **,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 long long FUNC_17 () ;
 int FUNC_18 (char*,...) ;
 int * FUNC_19 (int ,char*,int *) ;
 int FUNC_20 () ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int **,int) ;
 int FUNC_23 (int *) ;
 int ** FUNC_24 (char*,int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_25 (int *,char*) ;

__attribute__((used)) static void FUNC_26(void) {
    sds VAR_5 = ((void*)0);
    int VAR_6 = 0;
    char *VAR_7;
    int VAR_8;
    sds *VAR_9;

    VAR_2.interactive = 1;
    FUNC_16(1);
    FUNC_15(VAR_1);


    if (FUNC_9(FUNC_6(VAR_4))) {
        VAR_6 = 1;

        if (FUNC_8("HOME") != ((void*)0)) {
            VAR_5 = FUNC_19(FUNC_20(),"%s/.disque_history",FUNC_8("HOME"));
            FUNC_13(VAR_5);
        }
    }

    FUNC_3();
    while((VAR_7 = FUNC_10(VAR_3 ? VAR_2.prompt : "not connected> ")) != ((void*)0)) {
        if (VAR_7[0] != '\0') {
            VAR_9 = FUNC_24(VAR_7,&VAR_8);
            if (VAR_6) FUNC_12(VAR_7);
            if (VAR_5) FUNC_14(VAR_5);

            if (VAR_9 == ((void*)0)) {
                FUNC_18("Invalid argument(s)\n");
                FUNC_7(VAR_7);
                continue;
            } else if (VAR_8 > 0) {
                if (FUNC_25(VAR_9[0],"quit") == 0 ||
                    FUNC_25(VAR_9[0],"exit") == 0)
                {
                    FUNC_5(0);
                } else if (VAR_8 == 3 && !FUNC_25(VAR_9[0],"connect")) {
                    FUNC_21(VAR_2.hostip);
                    VAR_2.hostip = FUNC_23(VAR_9[1]);
                    VAR_2.hostport = FUNC_0(VAR_9[2]);
                    FUNC_3();
                    FUNC_1(1);
                } else if (VAR_8 == 1 && !FUNC_25(VAR_9[0],"clear")) {
                    FUNC_11();
                } else {
                    long long VAR_10 = FUNC_17(), VAR_11;
                    int VAR_12, VAR_13 = 0;

                    VAR_12 = FUNC_0(VAR_9[0]);
                    if (VAR_8 > 1 && VAR_12) {
                        VAR_13 = 1;
                    } else {
                        VAR_12 = 1;
                    }

                    while (1) {
                        VAR_2.cluster_reissue_command = 0;
                        if (FUNC_4(VAR_8-VAR_13,VAR_9+VAR_13,VAR_12)
                            != VAR_0)
                        {
                            FUNC_1(1);



                            if (FUNC_4(VAR_8-VAR_13,VAR_9+VAR_13,VAR_12)
                                != VAR_0)
                                FUNC_2();
                        }

                        if (VAR_2.cluster_mode && VAR_2.cluster_reissue_command) {
                            FUNC_1(1);
                        } else {
                            break;
                        }
                    }
                    VAR_11 = FUNC_17()-VAR_10;
                    if (VAR_11 >= 500) {
                        FUNC_18("(%.2fs)\n",(double)VAR_11/1000);
                    }
                }
            }

            FUNC_22(VAR_9,VAR_8);
        }

        FUNC_7(VAR_7);
    }
    FUNC_5(0);
}

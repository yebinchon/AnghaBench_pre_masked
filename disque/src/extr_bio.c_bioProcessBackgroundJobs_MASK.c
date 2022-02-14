
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio_job {scalar_t__ arg1; } ;
typedef int sigset_t ;
struct TYPE_4__ {struct bio_job* value; } ;
typedef TYPE_1__ listNode ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (long) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (long) ;
 int VAR_12 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct bio_job*) ;

void *FUNC_18(void *VAR_13) {
    struct bio_job *VAR_14;
    unsigned long VAR_15 = (unsigned long) VAR_13;
    sigset_t VAR_16;



    FUNC_9(VAR_4, ((void*)0));
    FUNC_10(VAR_3, ((void*)0));

    FUNC_7(&VAR_8[VAR_15]);


    FUNC_15(&VAR_16);
    FUNC_14(&VAR_16, VAR_5);
    if (FUNC_11(VAR_6, &VAR_16, ((void*)0)))
        FUNC_12(VAR_2,
            "Warning: can't mask SIGALRM in bio.c thread: %s", FUNC_16(VAR_12));

    while(1) {
        listNode *VAR_17;


        if (FUNC_4(VAR_7[VAR_15]) == 0) {
            FUNC_6(&VAR_9[VAR_15],&VAR_8[VAR_15]);
            continue;
        }

        VAR_17 = FUNC_3(VAR_7[VAR_15]);
        VAR_14 = VAR_17->value;


        FUNC_8(&VAR_8[VAR_15]);


        if (VAR_15 == VAR_1) {
            FUNC_1((long)VAR_14->arg1);
        } else if (VAR_15 == VAR_0) {
            FUNC_0((long)VAR_14->arg1);
        } else {
            FUNC_13("Wrong job type in bioProcessBackgroundJobs().");
        }
        FUNC_17(VAR_14);


        FUNC_5(&VAR_11[VAR_15]);



        FUNC_7(&VAR_8[VAR_15]);
        FUNC_2(VAR_7[VAR_15],VAR_17);
        VAR_10[VAR_15]--;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dictEntry {int dummy; } ;
typedef char* sds ;
typedef int rio ;
typedef int mstime_t ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ job ;
typedef int dictIterator ;
typedef int cmd ;
struct TYPE_6__ {char* aof_child_diff; int aof_pipe_read_ack_from_parent; int aof_pipe_write_ack_to_parent; int aof_pipe_read_data_from_parent; int jobs; scalar_t__ aof_rewrite_incremental_fsync; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct dictEntry*) ;
 struct dictEntry* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *,char*,int) ;
 scalar_t__ FUNC_18 (int *,char*,int) ;
 char* FUNC_19 () ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 char* FUNC_22 (char*,TYPE_1__*,int ) ;
 TYPE_2__ VAR_12 ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (char*,int,char*,int) ;
 double FUNC_25 (int ) ;
 int FUNC_26 (int ,char*,int,int) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (int ,char*,int) ;

int FUNC_29(char *VAR_13, int VAR_14) {
    dictIterator *VAR_15 = ((void*)0);
    rio VAR_16;
    FILE *VAR_17;
    char VAR_18[256];
    char VAR_19;



    FUNC_24(VAR_18,256,"temp-rewriteaof-%d.aof", (int) FUNC_12());
    VAR_17 = FUNC_10(VAR_18,"w");
    if (!VAR_17) {
        FUNC_23(VAR_9, "Opening the temp file for AOF rewrite in rewriteAppendOnlyFile(): %s", FUNC_25(VAR_11));
        return VAR_3;
    }

    if (VAR_14) VAR_12.aof_child_diff = FUNC_19();
    FUNC_15(&VAR_16,VAR_17);
    if (VAR_12.aof_rewrite_incremental_fsync)
        FUNC_16(&VAR_16,VAR_2);



    VAR_15 = FUNC_3(VAR_12.jobs);
    struct dictEntry *VAR_20;
    while((VAR_20 = FUNC_5(VAR_15)) != ((void*)0)) {
        job *VAR_21 = FUNC_4(VAR_20);
        if (VAR_21->state != VAR_6 &&
            VAR_21->state != VAR_7) continue;

        char VAR_22[] = "*2\r\n$7\r\nLOADJOB\r\n";
        sds VAR_23 = FUNC_22(FUNC_19(),VAR_21,VAR_10);
        if (FUNC_17(&VAR_16,VAR_22,sizeof(VAR_22)-1) == 0) goto werr;
        if (FUNC_18(&VAR_16,VAR_23,FUNC_21(VAR_23)) == 0)
            goto werr;
        FUNC_20(VAR_23);
    }
    FUNC_6(VAR_15);
    VAR_15 = ((void*)0);



    if (!VAR_14) goto flush_and_rename;



    if (FUNC_8(VAR_17) == VAR_5) goto werr;
    if (FUNC_11(FUNC_9(VAR_17)) == -1) goto werr;







    int VAR_24 = 0;
    mstime_t VAR_25 = FUNC_13();
    while(FUNC_13()-VAR_25 < 1000 && VAR_24 < 20) {
        if (FUNC_0(VAR_12.aof_pipe_read_data_from_parent, VAR_0, 1) <= 0)
        {
            VAR_24++;
            continue;
        }
        VAR_24 = 0;

        FUNC_2();
    }


    if (FUNC_28(VAR_12.aof_pipe_write_ack_to_parent,"!",1) != 1) goto werr;
    if (FUNC_1(((void*)0),VAR_12.aof_pipe_read_ack_from_parent) != VAR_1)
        goto werr;



    if (FUNC_26(VAR_12.aof_pipe_read_ack_from_parent,&VAR_19,1,5000) != 1 ||
        VAR_19 != '!') goto werr;
    FUNC_23(VAR_8,"Parent agreed to stop sending diffs. Finalizing AOF...");


    FUNC_2();


    FUNC_23(VAR_8,
        "Concatenating %.2f MB of AOF diff received from parent.",
        (double) FUNC_21(VAR_12.aof_child_diff) / (1024*1024));
    if (FUNC_17(&VAR_16,VAR_12.aof_child_diff,FUNC_21(VAR_12.aof_child_diff)) == 0)
        goto werr;

flush_and_rename:

    if (FUNC_8(VAR_17) == VAR_5) goto werr;
    if (FUNC_11(FUNC_9(VAR_17)) == -1) goto werr;
    if (FUNC_7(VAR_17) == VAR_5) goto werr;



    if (FUNC_14(VAR_18,VAR_13) == -1) {
        FUNC_23(VAR_9,"Error moving temp append only file on the final destination: %s", FUNC_25(VAR_11));
        FUNC_27(VAR_18);
        return VAR_3;
    }
    FUNC_23(VAR_8,"SYNC append only file rewrite performed");
    return VAR_4;

werr:
    FUNC_23(VAR_9,"Write error writing append only file on disk: %s", FUNC_25(VAR_11));
    FUNC_7(VAR_17);
    FUNC_27(VAR_18);
    if (VAR_15) FUNC_6(VAR_15);
    return VAR_3;
}

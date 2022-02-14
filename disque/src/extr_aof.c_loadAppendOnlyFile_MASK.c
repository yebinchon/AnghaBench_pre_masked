
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct serverCommand {int (* proc ) (struct client*) ;} ;
struct disque_stat {scalar_t__ st_size; } ;
struct client {int argc; scalar_t__ bufpos; int flags; int reply; TYPE_1__** argv; } ;
typedef char* sds ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int off_t ;
typedef int buf ;
struct TYPE_6__ {int aof_state; int aof_fd; scalar_t__ aof_load_truncated; scalar_t__ aof_current_size; scalar_t__ aof_rewrite_base_size; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct client* FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct disque_stat*) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (char*,int,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,int,int,int *) ;
 int FUNC_12 (struct client*) ;
 int FUNC_13 (struct client*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 struct serverCommand* FUNC_17 (scalar_t__) ;
 int FUNC_18 (int,int ,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (int *,unsigned long) ;
 TYPE_3__ VAR_8 ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (int *) ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 unsigned long FUNC_27 (char*,int *,int) ;
 int FUNC_28 (struct client*) ;
 int FUNC_29 (char*,int) ;
 TYPE_1__** FUNC_30 (int) ;

int FUNC_31(char *VAR_9) {
    struct client *VAR_10;
    FILE *VAR_11 = FUNC_10(VAR_9,"r");
    struct disque_stat VAR_12;
    int VAR_13 = VAR_8.aof_state;
    long VAR_14 = 0;
    off_t VAR_15 = 0;

    if (VAR_11 && FUNC_4(FUNC_9(VAR_11),&VAR_12) != -1 && VAR_12.st_size == 0) {
        VAR_8.aof_current_size = 0;
        FUNC_6(VAR_11);
        return VAR_2;
    }

    if (VAR_11 == ((void*)0)) {
        FUNC_23(VAR_4,"Fatal error: can't open the append log file for reading: %s",FUNC_26(VAR_7));
        FUNC_5(1);
    }



    VAR_8.aof_state = VAR_0;

    VAR_10 = FUNC_2();
    FUNC_24(VAR_11);

    while(1) {
        int VAR_16, VAR_17;
        unsigned long VAR_18;
        robj **VAR_19;
        char VAR_20[128];
        sds VAR_21;
        struct serverCommand *VAR_22;


        if (!(VAR_14++ % 1000)) {
            FUNC_16(FUNC_14(VAR_11));
            FUNC_19();
        }

        if (FUNC_8(VAR_20,sizeof(VAR_20),VAR_11) == ((void*)0)) {
            if (FUNC_7(VAR_11))
                break;
            else
                goto readerr;
        }
        if (VAR_20[0] != '*') goto fmterr;
        if (VAR_20[1] == '\0') goto readerr;
        VAR_16 = FUNC_1(VAR_20+1);
        if (VAR_16 < 1) goto fmterr;

        VAR_19 = FUNC_30(sizeof(robj*)*VAR_16);
        VAR_10->argc = VAR_16;
        VAR_10->argv = VAR_19;

        for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
            if (FUNC_8(VAR_20,sizeof(VAR_20),VAR_11) == ((void*)0)) {
                VAR_10->argc = VAR_17;
                FUNC_13(VAR_10);
                goto readerr;
            }
            if (VAR_20[0] != '$') goto fmterr;
            VAR_18 = FUNC_27(VAR_20+1,((void*)0),10);
            VAR_21 = FUNC_21(((void*)0),VAR_18);
            if (VAR_18 && FUNC_11(VAR_21,VAR_18,1,VAR_11) == 0) {
                FUNC_20(VAR_21);
                VAR_10->argc = VAR_17;
                FUNC_13(VAR_10);
                goto readerr;
            }
            VAR_19[VAR_17] = FUNC_3(VAR_5,VAR_21);
            if (FUNC_11(VAR_20,2,1,VAR_11) == 0) {
                VAR_10->argc = VAR_17+1;
                FUNC_13(VAR_10);
                goto readerr;
            }
        }


        VAR_22 = FUNC_17(VAR_19[0]->ptr);
        if (!VAR_22) {
            FUNC_23(VAR_4,"Unknown command '%s' reading the append only file", (char*)VAR_19[0]->ptr);
            FUNC_5(1);
        }


        VAR_22->proc(VAR_10);


        FUNC_22(VAR_10->bufpos == 0 && FUNC_15(VAR_10->reply) == 0);

        FUNC_22((VAR_10->flags & VAR_1) == 0);



        FUNC_13(VAR_10);
        if (VAR_8.aof_load_truncated) VAR_15 = FUNC_14(VAR_11);
    }

loaded_ok:
    FUNC_6(VAR_11);
    FUNC_12(VAR_10);
    VAR_8.aof_state = VAR_13;
    FUNC_25();
    FUNC_0();
    VAR_8.aof_rewrite_base_size = VAR_8.aof_current_size;
    return VAR_3;

readerr:
    if (!FUNC_7(VAR_11)) {
        FUNC_23(VAR_4,"Unrecoverable error reading the append only file: %s", FUNC_26(VAR_7));
        FUNC_5(1);
    }


    if (VAR_8.aof_load_truncated) {
        FUNC_23(VAR_4,"!!! Warning: short read while loading the AOF file !!!");
        FUNC_23(VAR_4,"!!! Truncating the AOF at offset %llu !!!",
            (unsigned long long) VAR_15);
        if (VAR_15 == -1 || FUNC_29(VAR_9,VAR_15) == -1) {
            if (VAR_15 == -1) {
                FUNC_23(VAR_4,"Last valid command offset is invalid");
            } else {
                FUNC_23(VAR_4,"Error truncating the AOF file: %s",
                    FUNC_26(VAR_7));
            }
        } else {


            if (VAR_8.aof_fd != -1 && FUNC_18(VAR_8.aof_fd,0,VAR_6) == -1) {
                FUNC_23(VAR_4,"Can't seek the end of the AOF file: %s",
                    FUNC_26(VAR_7));
            } else {
                FUNC_23(VAR_4,
                    "AOF loaded anyway because aof-load-truncated is enabled");
                goto loaded_ok;
            }
        }
    }
    FUNC_23(VAR_4,"Unexpected end of file reading the append only file. You can: 1) Make a backup of your AOF file, then use ./disque-check-aof --fix <filename>. 2) Alternatively you can set the 'aof-load-truncated' configuration option to yes and restart the server.");
    FUNC_5(1);

fmterr:
    FUNC_23(VAR_4,"Bad file format reading the append only file: make a backup of your AOF file, then use ./disque-check-aof --fix <filename>");
    FUNC_5(1);
}

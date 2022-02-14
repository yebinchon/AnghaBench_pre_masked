
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef char* sds ;
struct TYPE_9__ {int name; void* pong_received; void* ping_sent; int flags; void* fail_time; scalar_t__ port; int ip; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {TYPE_2__* myself; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,struct stat*) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 void* FUNC_11 () ;
 TYPE_2__* VAR_13 ;
 int FUNC_12 (char**,int) ;
 char** FUNC_13 (char*,int*) ;
 TYPE_3__ VAR_14 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 char* FUNC_18 (char*,char) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (char*) ;
 char* FUNC_21 (char*,char) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (int) ;

int FUNC_24(char *VAR_15) {
    FILE *VAR_16 = FUNC_8(VAR_15,"r");
    struct stat VAR_17;
    char *VAR_18;
    int VAR_19, VAR_20;

    if (VAR_16 == ((void*)0)) {
        if (VAR_12 == VAR_9) {
            return VAR_7;
        } else {
            FUNC_15(VAR_11,
                "Loading the cluster node config from %s: %s",
                VAR_15, FUNC_19(VAR_12));
            FUNC_4(1);
        }
    }



    if (FUNC_9(FUNC_7(VAR_16),&VAR_17) != -1 && VAR_17.st_size == 0) {
        FUNC_5(VAR_16);
        return VAR_7;
    }


    VAR_19 = 1024;
    VAR_18 = FUNC_23(VAR_19);
    while(FUNC_6(VAR_18,VAR_19,VAR_16) != ((void*)0)) {
        int VAR_21;
        sds *VAR_22;
        clusterNode *VAR_23;
        char *VAR_24, *VAR_25;




        if (VAR_18[0] == '\n') continue;


        VAR_22 = FUNC_13(VAR_18,&VAR_21);
        if (VAR_22 == ((void*)0)) goto fmterr;



        if (FUNC_17(VAR_22[0],"vars") == 0) {
            for (VAR_20 = 1; VAR_20 < VAR_21; VAR_20 += 2) {
                if (FUNC_17(VAR_22[VAR_20],"someVarNameHere") == 0) {

                } else {
                    FUNC_15(VAR_11,
                        "Skipping unknown cluster config variable '%s'",
                        VAR_22[VAR_20]);
                }
            }
            FUNC_12(VAR_22,VAR_21);
            continue;
        }


        if (VAR_21 != 6) goto fmterr;


        if (FUNC_20(VAR_22[0]) != VAR_0) goto fmterr;
        VAR_23 = FUNC_2(VAR_22[0]);
        if (!VAR_23) {
            VAR_23 = FUNC_3(VAR_22[0],0);
            FUNC_1(VAR_23);
        }

        if ((VAR_24 = FUNC_21(VAR_22[1],':')) == ((void*)0)) goto fmterr;
        *VAR_24 = '\0';
        FUNC_10(VAR_23->ip,VAR_22[1],FUNC_20(VAR_22[1])+1);
        VAR_23->port = FUNC_0(VAR_24+1);


        VAR_24 = VAR_25 = VAR_22[2];
        while(VAR_24) {
            VAR_24 = FUNC_18(VAR_25,',');
            if (VAR_24) *VAR_24 = '\0';
            if (!FUNC_17(VAR_25,"myself")) {
                FUNC_14(VAR_14.cluster->myself == ((void*)0));
                VAR_13 = VAR_14.cluster->myself = VAR_23;
                VAR_23->flags |= VAR_4;
            } else if (!FUNC_17(VAR_25,"fail?")) {
                VAR_23->flags |= VAR_6;
            } else if (!FUNC_17(VAR_25,"fail")) {
                VAR_23->flags |= VAR_1;
                VAR_23->fail_time = FUNC_11();
            } else if (!FUNC_17(VAR_25,"handshake")) {
                VAR_23->flags |= VAR_2;
            } else if (!FUNC_17(VAR_25,"noaddr")) {
                VAR_23->flags |= VAR_5;
            } else if (!FUNC_17(VAR_25,"leaving")) {
                VAR_23->flags |= VAR_3;
            } else if (!FUNC_17(VAR_25,"noflags")) {

            } else {
                FUNC_16("Unknown flag in disque cluster config file");
            }
            if (VAR_24) VAR_25 = VAR_24+1;
        }


        if (FUNC_0(VAR_22[3])) VAR_23->ping_sent = FUNC_11();
        if (FUNC_0(VAR_22[4])) VAR_23->pong_received = FUNC_11();

        FUNC_12(VAR_22,VAR_21);
    }

    if (VAR_14.cluster->myself == ((void*)0)) goto fmterr;

    FUNC_22(VAR_18);
    FUNC_5(VAR_16);

    FUNC_15(VAR_10,"Node configuration loaded, I'm %.40s", VAR_13->name);
    return VAR_8;

fmterr:
    FUNC_15(VAR_11,
        "Unrecoverable error: corrupted cluster config file.");
    FUNC_22(VAR_18);
    if (VAR_16) FUNC_5(VAR_16);
    FUNC_4(1);
}

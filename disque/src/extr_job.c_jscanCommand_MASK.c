
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct jscanFilter {int* state; int numstates; TYPE_5__* queue; } ;
typedef int listNode ;
typedef int list ;
typedef int job ;
typedef int filter ;
struct TYPE_15__ {int argc; TYPE_5__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_18__ {char* ptr; } ;
struct TYPE_17__ {int jobs; } ;
struct TYPE_16__ {int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 unsigned long FUNC_6 (int ,unsigned long,int ,void**) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_5__*,long*,int *) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct jscanFilter*,int ,int) ;
 scalar_t__ FUNC_16 (TYPE_1__*,TYPE_5__*,unsigned long*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_17 (char*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_18 (char*,char*) ;

void FUNC_19(client *VAR_8) {
    struct jscanFilter VAR_9;
    int VAR_10 = 0;
    long VAR_11 = VAR_2;
    long VAR_12;
    unsigned long VAR_13 = 0;
    int VAR_14 = 0, VAR_15;
    int VAR_16 = VAR_4;

    FUNC_15(&VAR_9,0,sizeof(VAR_9));


    for (VAR_15 = 1; VAR_15 < VAR_8->argc; VAR_15++) {
        int VAR_17 = VAR_8->argc - VAR_15 -1;
        char *VAR_18 = VAR_8->argv[VAR_15]->ptr;

        if (!FUNC_18(VAR_18,"count") && VAR_17) {
            if (FUNC_7(VAR_8, VAR_8->argv[VAR_15+1], &VAR_11, ((void*)0)) !=
                VAR_1) return;
            VAR_15++;
        } else if (!FUNC_18(VAR_18,"busyloop")) {
            VAR_10 = 1;
        } else if (!FUNC_18(VAR_18,"queue") && VAR_17) {
            VAR_9.queue = VAR_8->argv[VAR_15+1];
            VAR_15++;
        } else if (!FUNC_18(VAR_18,"state") && VAR_17) {
            int VAR_19 = FUNC_8(VAR_8->argv[VAR_15+1]->ptr);
            if (VAR_19 == -1) {
                FUNC_2(VAR_8,"Invalid job state name");
                return;
            }
            VAR_9.state[VAR_19] = 1;
            VAR_9.numstates++;
            VAR_15++;
        } else if (!FUNC_18(VAR_18,"reply") && VAR_17) {
            if (!FUNC_18(VAR_8->argv[VAR_15+1]->ptr,"id")) {
                VAR_16 = VAR_4;
            } else if (!FUNC_18(VAR_8->argv[VAR_15+1]->ptr,"all")) {
                VAR_16 = VAR_3;
            } else {
                FUNC_2(VAR_8,"Invalid REPLY type, try ID or ALL");
                return;
            }
            VAR_15++;
        } else {
            if (VAR_14 != 0) {
                FUNC_0(VAR_8,VAR_7.syntaxerr);
                return;
            }
            if (FUNC_16(VAR_8,VAR_8->argv[VAR_15],&VAR_13) == VAR_0)
                return;
            VAR_14 = 1;
        }
    }


    VAR_12 = VAR_11*10;




    void *VAR_20[2];
    list *VAR_21 = FUNC_9();
    VAR_20[0] = VAR_21;
    VAR_20[1] = &VAR_9;
    do {
        VAR_13 = FUNC_6(VAR_6.jobs,VAR_13,VAR_5,VAR_20);
    } while (VAR_13 &&
             (VAR_10 ||
              (VAR_12-- &&
               FUNC_12(VAR_21) < (unsigned long)VAR_11)));


    FUNC_5(VAR_8, 2);
    FUNC_1(VAR_8,VAR_13);

    FUNC_5(VAR_8, FUNC_12(VAR_21));
    listNode *VAR_22;
    while ((VAR_22 = FUNC_11(VAR_21)) != ((void*)0)) {
        job *VAR_23 = FUNC_13(VAR_22);
        if (VAR_16 == VAR_4) FUNC_3(VAR_8,VAR_23);
        else if (VAR_16 == VAR_3) FUNC_4(VAR_8,VAR_23);
        else FUNC_17("Unknown JSCAN reply type");
        FUNC_10(VAR_21, VAR_22);
    }
    FUNC_14(VAR_21);
}

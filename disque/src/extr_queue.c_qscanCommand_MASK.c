
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct qscanFilter {int member_0; int member_1; int member_2; long minlen; long maxlen; long importrate; } ;
typedef int robj ;
typedef int listNode ;
typedef int list ;
struct TYPE_13__ {int argc; TYPE_6__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_16__ {char* ptr; } ;
struct TYPE_15__ {int queues; } ;
struct TYPE_14__ {int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int ,unsigned long,int ,void**) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_6__*,long*,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_1__*,TYPE_6__*,unsigned long*) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_14 (char*,char*) ;

void FUNC_15(client *VAR_6) {
    struct qscanFilter VAR_7 = {-1,-1,-1};
    int VAR_8 = 0;
    long VAR_9 = VAR_2;
    long VAR_10;
    unsigned long VAR_11 = 0;
    int VAR_12 = 0, VAR_13;


    for (VAR_13 = 1; VAR_13 < VAR_6->argc; VAR_13++) {
        int VAR_14 = VAR_6->argc - VAR_13 -1;
        char *VAR_15 = VAR_6->argv[VAR_13]->ptr;

        if (!FUNC_14(VAR_15,"count") && VAR_14) {
            if (FUNC_6(VAR_6, VAR_6->argv[VAR_13+1], &VAR_9, ((void*)0)) !=
                VAR_1) return;
            VAR_13++;
        } else if (!FUNC_14(VAR_15,"busyloop")) {
            VAR_8 = 1;
        } else if (!FUNC_14(VAR_15,"minlen") && VAR_14) {
            if (FUNC_6(VAR_6, VAR_6->argv[VAR_13+1],&VAR_7.minlen,((void*)0)) !=
                VAR_1) return;
            VAR_13++;
        } else if (!FUNC_14(VAR_15,"maxlen") && VAR_14) {
            if (FUNC_6(VAR_6, VAR_6->argv[VAR_13+1],&VAR_7.maxlen,((void*)0)) !=
                VAR_1) return;
            VAR_13++;
        } else if (!FUNC_14(VAR_15,"importrate") && VAR_14) {
            if (FUNC_6(VAR_6, VAR_6->argv[VAR_13+1],
                &VAR_7.importrate,((void*)0)) != VAR_1) return;
            VAR_13++;
        } else {
            if (VAR_12 != 0) {
                FUNC_0(VAR_6,VAR_5.syntaxerr);
                return;
            }
            if (FUNC_13(VAR_6,VAR_6->argv[VAR_13],&VAR_11) == VAR_0)
                return;
            VAR_12 = 1;
        }
    }


    VAR_10 = VAR_9*10;




    void *VAR_16[2];
    list *VAR_17 = FUNC_7();
    VAR_16[0] = VAR_17;
    VAR_16[1] = &VAR_7;
    do {
        VAR_11 = FUNC_5(VAR_4.queues,VAR_11,VAR_3,VAR_16);
    } while (VAR_11 &&
             (VAR_8 ||
              (VAR_10-- &&
               FUNC_10(VAR_17) < (unsigned long)VAR_9)));


    FUNC_3(VAR_6, 2);
    FUNC_2(VAR_6,VAR_11);

    FUNC_3(VAR_6, FUNC_10(VAR_17));
    listNode *VAR_18;
    while ((VAR_18 = FUNC_9(VAR_17)) != ((void*)0)) {
        robj *VAR_19 = FUNC_11(VAR_18);
        FUNC_1(VAR_6, VAR_19);
        FUNC_4(VAR_19);
        FUNC_8(VAR_17, VAR_18);
    }
    FUNC_12(VAR_17);
}

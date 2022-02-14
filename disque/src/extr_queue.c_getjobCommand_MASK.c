
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_22__ {int flags; } ;
typedef TYPE_2__ queue ;
typedef int mstime_t ;
typedef int job ;
struct TYPE_23__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_3__ client ;
struct TYPE_24__ {int leavingerr; int nullmultibulk; int syntaxerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__**,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,long long*) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,int *,int ) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int * FUNC_11 (TYPE_2__*,unsigned long*) ;
 int FUNC_12 (TYPE_3__*,void*,long long) ;
 TYPE_4__ VAR_7 ;
 int FUNC_13 (char*,char*) ;

void FUNC_14(client *VAR_8) {
    mstime_t VAR_9 = 0;
    long long VAR_10 = 1, VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;
    robj **VAR_14 = ((void*)0);
    int VAR_15, VAR_16 = 0;


    for (VAR_15 = 1; VAR_15 < VAR_8->argc; VAR_15++) {
        char *VAR_17 = VAR_8->argv[VAR_15]->ptr;
        int VAR_18 = VAR_15 == VAR_8->argc-1;
        if (!FUNC_13(VAR_17,"nohang")) {
            VAR_12 = 1;
        } else if (!FUNC_13(VAR_17,"withcounters")) {
            VAR_13 = 1;
        } else if (!FUNC_13(VAR_17,"timeout") && !VAR_18) {
            if (FUNC_6(VAR_8,VAR_8->argv[VAR_15+1],&VAR_9,
                VAR_6) != VAR_0) return;
            VAR_15++;
        } else if (!FUNC_13(VAR_17,"count") && !VAR_18) {
            int VAR_19 = FUNC_5(VAR_8->argv[VAR_15+1],&VAR_10);
            if (VAR_19 != VAR_0 || VAR_10 <= 0) {
                FUNC_2(VAR_8,"COUNT must be a number greater than zero");
                return;
            }
            VAR_15++;
        } else if (!FUNC_13(VAR_17,"from")) {
            VAR_14 = VAR_8->argv+VAR_15+1;
            VAR_16 = VAR_8->argc - VAR_15 - 1;
            break;
        } else {
            FUNC_1(VAR_8,VAR_7.syntaxerr);
            return;
        }
    }


    if (VAR_14 == ((void*)0) || VAR_16 == 0) {
        FUNC_1(VAR_8,VAR_7.syntaxerr);
        return;
    }



    void *VAR_20 = ((void*)0);

    while(1) {
        long VAR_21 = VAR_11;
        for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
            unsigned long VAR_22;
            queue *VAR_23 = FUNC_7(VAR_14[VAR_15]);
            job *VAR_24 = ((void*)0);
            if (VAR_23 && !(VAR_23->flags & VAR_5))
                VAR_24 = FUNC_11(VAR_23,&VAR_22);

            if (!VAR_24) {
                if (!VAR_23)
                    FUNC_10(VAR_14[VAR_15],VAR_3);
                else
                    FUNC_9(VAR_23,VAR_3);
                continue;
            } else if (VAR_24 && VAR_22 == 0) {
                FUNC_9(VAR_23,VAR_4);
            }
            if (!VAR_20) VAR_20 = FUNC_0(VAR_8);
            FUNC_3(VAR_8,VAR_24,VAR_13 ? VAR_2 :
                                             VAR_1);
            VAR_10--;
            VAR_11++;
            if (VAR_10 == 0) break;
        }


        if (VAR_10 == 0 || VAR_21 == VAR_11) break;
    }

    if (VAR_20) {
        FUNC_12(VAR_8,VAR_20,VAR_11);
        return;
    }


    if (VAR_12) {
        FUNC_1(VAR_8,VAR_7.nullmultibulk);
        return;
    }




    if (FUNC_8()) {
        FUNC_1(VAR_8,VAR_7.leavingerr);
        return;
    }


    FUNC_4(VAR_8,VAR_14,VAR_16,VAR_9,
            VAR_13 ? VAR_2 : VAR_1);
}

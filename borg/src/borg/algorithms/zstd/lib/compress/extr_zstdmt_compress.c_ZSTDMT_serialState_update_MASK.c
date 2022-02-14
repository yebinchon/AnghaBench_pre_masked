
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int enableLdm; } ;
struct TYPE_12__ {scalar_t__ checksumFlag; } ;
struct TYPE_13__ {scalar_t__ jobSize; TYPE_8__ ldmParams; TYPE_1__ fParams; } ;
struct TYPE_17__ {int window; } ;
struct TYPE_14__ {unsigned int nextJobID; TYPE_2__ params; int mutex; int cond; int xxhState; int ldmWindowMutex; int ldmWindowCond; TYPE_6__ ldmState; int ldmWindow; } ;
typedef TYPE_3__ serialState_t ;
struct TYPE_15__ {scalar_t__ pos; scalar_t__ size; scalar_t__ capacity; int * seq; } ;
typedef TYPE_4__ rawSeqStore_t ;
struct TYPE_16__ {scalar_t__ size; int start; } ;
typedef TYPE_5__ range_t ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t const) ;
 size_t FUNC_4 (TYPE_6__*,TYPE_4__*,TYPE_8__*,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *,int *,scalar_t__) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(serialState_t* VAR_0,
                                      ZSTD_CCtx* VAR_1, rawSeqStore_t VAR_2,
                                      range_t VAR_3, unsigned VAR_4)
{

    FUNC_2(&VAR_0->mutex);
    while (VAR_0->nextJobID < VAR_4) {
        FUNC_0(5, "wait for serialState->cond");
        FUNC_7(&VAR_0->cond, &VAR_0->mutex);
    }

    if (VAR_0->nextJobID == VAR_4) {

        if (VAR_0->params.ldmParams.enableLdm) {
            size_t VAR_5;
            FUNC_11(VAR_2.seq != ((void*)0) && VAR_2.pos == 0 &&
                   VAR_2.size == 0 && VAR_2.capacity > 0);
            FUNC_11(VAR_3.size <= VAR_0->params.jobSize);
            FUNC_10(&VAR_0->ldmState.window, VAR_3.start, VAR_3.size);
            VAR_5 = FUNC_4(
                &VAR_0->ldmState, &VAR_2,
                &VAR_0->params.ldmParams, VAR_3.start, VAR_3.size);

            FUNC_11(!FUNC_3(VAR_5)); (void)VAR_5;



            FUNC_2(&VAR_0->ldmWindowMutex);
            VAR_0->ldmWindow = VAR_0->ldmState.window;
            FUNC_6(&VAR_0->ldmWindowCond);
            FUNC_8(&VAR_0->ldmWindowMutex);
        }
        if (VAR_0->params.fParams.checksumFlag && VAR_3.size > 0)
            FUNC_1(&VAR_0->xxhState, VAR_3.start, VAR_3.size);
    }

    VAR_0->nextJobID++;
    FUNC_5(&VAR_0->cond);
    FUNC_8(&VAR_0->mutex);

    if (VAR_2.size > 0) {
        size_t const VAR_6 = FUNC_9(
            VAR_1, VAR_2.seq, VAR_2.size);
        FUNC_11(VAR_0->params.ldmParams.enableLdm);
        FUNC_11(!FUNC_3(VAR_6));
        (void)VAR_6;
    }
}

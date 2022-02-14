
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * customFree; int * customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_13__ {int allJobsCompleted; int jobIDMask; int seqPool; int cctxPool; int bufPool; int jobs; int factory; int roundBuff; int serial; TYPE_1__ cMem; int params; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ,TYPE_1__) ;
 int FUNC_3 (int *,unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (unsigned int,TYPE_1__) ;
 int FUNC_5 (unsigned int,TYPE_1__) ;
 int FUNC_6 (int*,TYPE_1__) ;
 int FUNC_7 (unsigned int,TYPE_1__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int,TYPE_1__) ;
 int FUNC_11 (int) ;
 int VAR_1 ;

ZSTDMT_CCtx* FUNC_12(unsigned VAR_2, ZSTD_customMem VAR_3)
{
    ZSTDMT_CCtx* VAR_4;
    U32 VAR_5 = VAR_2 + 2;
    int VAR_6;
    FUNC_0(3, "ZSTDMT_createCCtx_advanced (nbWorkers = %u)", VAR_2);

    if (VAR_2 < 1) return ((void*)0);
    VAR_2 = FUNC_1(VAR_2 , VAR_0);
    if ((VAR_3.customAlloc!=((void*)0)) ^ (VAR_3.customFree!=((void*)0)))

        return ((void*)0);

    VAR_4 = (ZSTDMT_CCtx*) FUNC_10(sizeof(ZSTDMT_CCtx), VAR_3);
    if (!VAR_4) return ((void*)0);
    FUNC_3(&VAR_4->params, VAR_2);
    VAR_4->cMem = VAR_3;
    VAR_4->allJobsCompleted = 1;
    VAR_4->factory = FUNC_2(VAR_2, 0, VAR_3);
    VAR_4->jobs = FUNC_6(&VAR_5, VAR_3);
    FUNC_11(VAR_5 > 0); FUNC_11((VAR_5 & (VAR_5 - 1)) == 0);
    VAR_4->jobIDMask = VAR_5 - 1;
    VAR_4->bufPool = FUNC_4(VAR_2, VAR_3);
    VAR_4->cctxPool = FUNC_5(VAR_2, VAR_3);
    VAR_4->seqPool = FUNC_7(VAR_2, VAR_3);
    VAR_6 = FUNC_9(&VAR_4->serial);
    VAR_4->roundBuff = VAR_1;
    if (!VAR_4->factory | !VAR_4->jobs | !VAR_4->bufPool | !VAR_4->cctxPool | !VAR_4->seqPool | VAR_6) {
        FUNC_8(VAR_4);
        return ((void*)0);
    }
    FUNC_0(3, "mt_cctx created, for %u threads", VAR_2);
    return VAR_4;
}

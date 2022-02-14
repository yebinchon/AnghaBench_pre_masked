
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_CCtx ;
struct TYPE_3__ {scalar_t__ availCCtx; scalar_t__ totalCCtx; int poolMutex; int ** cctx; } ;
typedef TYPE_1__ ZSTDMT_CCtxPool ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(ZSTDMT_CCtxPool* VAR_0, ZSTD_CCtx* VAR_1)
{
    if (VAR_1==((void*)0)) return;
    FUNC_2(&VAR_0->poolMutex);
    if (VAR_0->availCCtx < VAR_0->totalCCtx)
        VAR_0->cctx[VAR_0->availCCtx++] = VAR_1;
    else {

        FUNC_0(4, "CCtx pool overflow : free cctx");
        FUNC_1(VAR_1);
    }
    FUNC_3(&VAR_0->poolMutex);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int opaque; scalar_t__ (* customAlloc ) (int ,int) ;int customFree; } ;
typedef TYPE_1__ ZSTDv07_customMem ;
struct TYPE_11__ {int stage; int * zd; int customMem; } ;
typedef TYPE_2__ ZBUFFv07_DCtx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_1__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

ZBUFFv07_DCtx* FUNC_5(ZSTDv07_customMem VAR_2)
{
    ZBUFFv07_DCtx* VAR_3;

    if (!VAR_2.customAlloc && !VAR_2.customFree)
        VAR_2 = VAR_1;

    if (!VAR_2.customAlloc || !VAR_2.customFree)
        return ((void*)0);

    VAR_3 = (ZBUFFv07_DCtx*)VAR_2.customAlloc(VAR_2.opaque, sizeof(ZBUFFv07_DCtx));
    if (VAR_3==((void*)0)) return ((void*)0);
    FUNC_3(VAR_3, 0, sizeof(ZBUFFv07_DCtx));
    FUNC_2(&VAR_3->customMem, &VAR_2, sizeof(ZSTDv07_customMem));
    VAR_3->zd = FUNC_1(VAR_2);
    if (VAR_3->zd == ((void*)0)) { FUNC_0(VAR_3); return ((void*)0); }
    VAR_3->stage = VAR_0;
    return VAR_3;
}

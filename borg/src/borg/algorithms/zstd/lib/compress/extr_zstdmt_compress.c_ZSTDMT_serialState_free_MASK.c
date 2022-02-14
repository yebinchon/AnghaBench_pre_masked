
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bucketOffsets; int hashTable; } ;
struct TYPE_5__ {int customMem; } ;
struct TYPE_7__ {TYPE_2__ ldmState; int ldmWindowCond; int ldmWindowMutex; int cond; int mutex; TYPE_1__ params; } ;
typedef TYPE_3__ serialState_t ;
typedef int ZSTD_customMem ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(serialState_t* VAR_0)
{
    ZSTD_customMem VAR_1 = VAR_0->params.customMem;
    FUNC_2(&VAR_0->mutex);
    FUNC_1(&VAR_0->cond);
    FUNC_2(&VAR_0->ldmWindowMutex);
    FUNC_1(&VAR_0->ldmWindowCond);
    FUNC_0(VAR_0->ldmState.hashTable, VAR_1);
    FUNC_0(VAR_0->ldmState.bucketOffsets, VAR_1);
}

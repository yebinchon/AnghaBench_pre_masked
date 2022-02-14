
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int * pQuery; } ;
struct TYPE_9__ {size_t subgroupIdx; scalar_t__ numOfGroupResultPages; TYPE_1__* pSidSet; int pMeterDataInfo; TYPE_2__ runtimeEnv; } ;
struct TYPE_7__ {size_t numOfSubSet; scalar_t__* starterPos; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef int SQuery ;
typedef TYPE_3__ SMeterQuerySupportObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,size_t,...) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

int32_t FUNC_5(SMeterQuerySupportObj *VAR_0) {
  SQueryRuntimeEnv *VAR_1 = &VAR_0->runtimeEnv;
  SQuery * VAR_2 = VAR_1->pQuery;

  int64_t VAR_3 = FUNC_4();

  while (VAR_0->subgroupIdx < VAR_0->pSidSet->numOfSubSet) {
    int32_t VAR_4 = VAR_0->pSidSet->starterPos[VAR_0->subgroupIdx];
    int32_t VAR_5 = VAR_0->pSidSet->starterPos[VAR_0->subgroupIdx + 1];

    int32_t VAR_6 =
        FUNC_3(VAR_0, VAR_2, VAR_1, VAR_0->pMeterDataInfo, VAR_4, VAR_5);
    VAR_0->subgroupIdx += 1;


    if (VAR_6 > 0) {
      break;
    }

    FUNC_1(VAR_0->numOfGroupResultPages == 0);
    FUNC_2("QInfo:%p no result in group %d, continue", FUNC_0(VAR_2), VAR_0->subgroupIdx - 1);
  }

  FUNC_2("QInfo:%p merge res data into group, index:%d, total group:%d, elapsed time:%lldms", FUNC_0(VAR_2),
         VAR_0->subgroupIdx - 1, VAR_0->pSidSet->numOfSubSet, FUNC_4() - VAR_3);

  return VAR_0->numOfGroupResultPages;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_5__ {size_t numOfMeters; int rawEKey; int rawSKey; TYPE_1__* pMeterDataInfo; } ;
struct TYPE_4__ {int * pMeterQInfo; } ;
typedef TYPE_2__ SMeterQuerySupportObj ;
typedef int SMeterQueryInfo ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(SMeterQuerySupportObj *VAR_0) {
  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->numOfMeters; ++VAR_1) {
    SMeterQueryInfo *VAR_2 = VAR_0->pMeterDataInfo[VAR_1].pMeterQInfo;
    FUNC_0(VAR_2, VAR_0->rawSKey, VAR_0->rawEKey);
  }
}

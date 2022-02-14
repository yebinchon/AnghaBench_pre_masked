
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* pMeterDataInfo; } ;
struct TYPE_6__ {scalar_t__ code; int query; TYPE_2__* pMeterQuerySupporter; } ;
typedef int SQuery ;
typedef TYPE_1__ SQInfo ;
typedef TYPE_2__ SMeterQuerySupportObj ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (TYPE_1__*,void*) ;
 void* FUNC_2 (TYPE_1__*,void*) ;

__attribute__((used)) static void FUNC_3(SQInfo *VAR_1) {
  SMeterQuerySupportObj *VAR_2 = VAR_1->pMeterQuerySupporter;
  SQuery * VAR_3 = &VAR_1->query;

  if (FUNC_0(VAR_3)) {
    VAR_2->pMeterDataInfo = FUNC_2(VAR_1, VAR_2->pMeterDataInfo);
    if (VAR_1->code != VAR_0) {
      return;
    }

    VAR_2->pMeterDataInfo = FUNC_1(VAR_1, VAR_2->pMeterDataInfo);
  } else {
    VAR_2->pMeterDataInfo = FUNC_1(VAR_1, VAR_2->pMeterDataInfo);
    if (VAR_1->code != VAR_0) {
      return;
    }

    VAR_2->pMeterDataInfo = FUNC_2(VAR_1, VAR_2->pMeterDataInfo);
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pMeterQInfo; TYPE_2__* pMeterObj; } ;
struct TYPE_6__ {int meterId; int sid; int vnode; } ;
struct TYPE_5__ {int lastKey; int ekey; int skey; } ;
typedef int TSKEY ;
typedef int SQuery ;
typedef int SQInfo ;
typedef TYPE_1__ SMeterQueryInfo ;
typedef TYPE_2__ SMeterObj ;
typedef TYPE_3__ SMeterDataInfo ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(SMeterDataInfo *VAR_0, SQuery *VAR_1, TSKEY VAR_2, TSKEY *VAR_3,
                                 TSKEY *VAR_4) {
  SQInfo * VAR_5 = (SQInfo *)FUNC_0(VAR_1);
  SMeterObj * VAR_6 = VAR_0->pMeterObj;
  SMeterQueryInfo *VAR_7 = VAR_0->pMeterQInfo;

  if (FUNC_1(VAR_1)) {
    *VAR_3 = VAR_7->lastKey;
    *VAR_4 = VAR_2;
  } else {
    *VAR_3 = VAR_2;
    *VAR_4 = VAR_7->lastKey;
  }

  if (*VAR_3 > *VAR_4) {
    FUNC_2("QInfo:%p vid:%d sid:%d id:%s, no result in files, qrange:%lld-%lld, lastKey:%lld", VAR_5, VAR_6->vnode,
           VAR_6->sid, VAR_6->meterId, VAR_7->skey, VAR_7->ekey, VAR_7->lastKey);
    return 0;
  } else {
    FUNC_2("QInfo:%p vid:%d sid:%d id:%s, query in files, qrange:%lld-%lld, lastKey:%lld", VAR_5, VAR_6->vnode,
           VAR_6->sid, VAR_6->meterId, VAR_7->skey, VAR_7->ekey, VAR_7->lastKey);
    return 1;
  }
}

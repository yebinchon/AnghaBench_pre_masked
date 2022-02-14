
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int pMeterQInfo; TYPE_4__* pMeterObj; } ;
struct TYPE_14__ {int meterId; int sid; int vnode; } ;
struct TYPE_13__ {scalar_t__ rawEKey; } ;
struct TYPE_11__ {scalar_t__ ekey; } ;
struct TYPE_12__ {TYPE_1__ query; TYPE_3__* pMeterQuerySupporter; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SQInfo ;
typedef TYPE_3__ SMeterQuerySupportObj ;
typedef TYPE_4__ SMeterObj ;
typedef TYPE_5__ SMeterDataInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(SQInfo *VAR_0, TSKEY VAR_1, SMeterDataInfo *VAR_2) {
  SMeterQuerySupportObj *VAR_3 = VAR_0->pMeterQuerySupporter;
  SQuery * VAR_4 = &VAR_0->query;
  SMeterObj * VAR_5 = VAR_2->pMeterObj;


  if ((VAR_1 > VAR_4->ekey && FUNC_0(VAR_4)) ||
      (VAR_1 < VAR_4->ekey && !FUNC_0(VAR_4))) {
    if (((VAR_1 > VAR_3->rawEKey) && FUNC_0(VAR_4)) ||
        ((VAR_1 < VAR_3->rawEKey) && (!FUNC_0(VAR_4)))) {
      FUNC_1("QInfo:%p vid:%d sid:%d id:%s, no data qualified in block, ignore", VAR_0, VAR_5->vnode,
             VAR_5->sid, VAR_5->meterId);

      return 0;
    } else {
      FUNC_2(VAR_2->pMeterQInfo, VAR_3, VAR_1);
    }
  }

  return 1;
}

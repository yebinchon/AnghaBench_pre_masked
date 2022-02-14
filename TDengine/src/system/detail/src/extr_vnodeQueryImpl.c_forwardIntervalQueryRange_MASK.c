
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {scalar_t__ rawEKey; int rawSKey; } ;
struct TYPE_11__ {int order; } ;
struct TYPE_13__ {scalar_t__ ekey; int nAggTimeInterval; scalar_t__ skey; scalar_t__ lastKey; int over; TYPE_1__ order; } ;
struct TYPE_12__ {int nextPos; TYPE_3__* pQuery; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterQuerySupportObj ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;

void FUNC_6(SMeterQuerySupportObj *VAR_2, SQueryRuntimeEnv *VAR_3) {
  SQuery *VAR_4 = VAR_3->pQuery;

  int32_t VAR_5 = FUNC_0(VAR_4->order.order);
  VAR_4->ekey += (VAR_4->nAggTimeInterval * VAR_5);
  VAR_4->skey = VAR_4->ekey - (VAR_4->nAggTimeInterval - 1) * VAR_5;


  if (FUNC_1(VAR_4)) {
    if (VAR_4->skey > VAR_2->rawEKey) {
      FUNC_5(VAR_4, VAR_0);
      return;
    }

    if (VAR_4->ekey > VAR_2->rawEKey) {
      VAR_4->ekey = VAR_2->rawEKey;
    }
  } else {
    if (VAR_4->skey < VAR_2->rawEKey) {
      FUNC_5(VAR_4, VAR_0);
      return;
    }

    if (VAR_4->ekey < VAR_2->rawEKey) {
      VAR_4->ekey = VAR_2->rawEKey;
    }
  }


  VAR_4->lastKey = VAR_4->skey;

  TSKEY VAR_6 = FUNC_4(VAR_3, &VAR_3->nextPos);
  if ((VAR_6 > VAR_2->rawEKey && FUNC_1(VAR_4)) ||
      (VAR_6 < VAR_2->rawEKey && !FUNC_1(VAR_4)) ||
      FUNC_2(VAR_4->over, VAR_1)) {
    FUNC_5(VAR_4, VAR_0);
    return;
  }


  if ((VAR_6 > VAR_4->ekey && FUNC_1(VAR_4)) ||
      (VAR_6 < VAR_4->ekey && !FUNC_1(VAR_4))) {
    FUNC_3(VAR_4, VAR_6, VAR_2->rawSKey, VAR_2->rawEKey);
  }
}

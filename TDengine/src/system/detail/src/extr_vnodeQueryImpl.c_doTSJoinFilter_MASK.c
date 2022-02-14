
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int int32_t ;
struct TYPE_14__ {scalar_t__ i64Key; } ;
struct TYPE_21__ {scalar_t__ aInputElemBuf; TYPE_1__ tag; } ;
struct TYPE_16__ {int order; } ;
struct TYPE_20__ {TYPE_3__ order; } ;
struct TYPE_19__ {TYPE_10__* pTSBuf; TYPE_2__* pMeterObj; TYPE_8__* pCtx; TYPE_7__* pQuery; } ;
struct TYPE_18__ {scalar_t__ tag; scalar_t__ ts; } ;
struct TYPE_17__ {int tsIndex; int order; } ;
struct TYPE_15__ {int meterId; } ;
struct TYPE_13__ {TYPE_4__ cur; int tsOrder; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_5__ STSElem ;
typedef TYPE_6__ SQueryRuntimeEnv ;
typedef TYPE_7__ SQuery ;
typedef TYPE_8__ SQLFunctionCtx ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;
 TYPE_5__ FUNC_3 (TYPE_10__*) ;

__attribute__((used)) static int32_t FUNC_4(SQueryRuntimeEnv *VAR_4, int32_t VAR_5) {
  SQuery *VAR_6 = VAR_4->pQuery;

  STSElem VAR_7 = FUNC_3(VAR_4->pTSBuf);
  SQLFunctionCtx *VAR_8 = VAR_4->pCtx;


  if (VAR_8[0].tag.i64Key != VAR_7.tag) {
    return VAR_1;
  }

  TSKEY VAR_9 = *(TSKEY *)(VAR_8[0].aInputElemBuf + VAR_0 * VAR_5);


  FUNC_2("elem in comp ts file:%lld, key:%lld, tag:%d, id:%s, query order:%d, ts order:%d, traverse:%d, index:%d\n",
         VAR_7.ts, VAR_9, VAR_7.tag, VAR_4->pMeterObj->meterId, VAR_6->order.order, VAR_4->pTSBuf->tsOrder,
         VAR_4->pTSBuf->cur.order, VAR_4->pTSBuf->cur.tsIndex);


  if (FUNC_0(VAR_6)) {
    if (VAR_9 < VAR_7.ts) {
      return VAR_3;
    } else if (VAR_9 > VAR_7.ts) {
      FUNC_1(0);
    }
  } else {
    if (VAR_9 > VAR_7.ts) {
      return VAR_3;
    } else if (VAR_9 < VAR_7.ts) {
      FUNC_1(0);
    }
  }

  return VAR_2;
}

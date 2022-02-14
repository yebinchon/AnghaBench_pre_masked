
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int tColModel ;
typedef scalar_t__ int64_t ;
typedef int int16_t ;
struct TYPE_20__ {int discard; int prevRowOfInput; TYPE_10__* discardData; TYPE_4__* pDesc; int rowSize; } ;
struct TYPE_19__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_16__ {int numOfGroupCols; } ;
struct TYPE_15__ {int order; } ;
struct TYPE_18__ {scalar_t__ stime; scalar_t__ etime; TYPE_3__ groupbyExpr; TYPE_2__ order; int intervalTimeUnit; int nAggTimeInterval; } ;
struct TYPE_17__ {int * pSchema; } ;
struct TYPE_14__ {int precision; } ;
struct TYPE_13__ {scalar_t__ numOfElems; } ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SLocalReducer ;
typedef int SInterpolationInfo ;


 int FUNC_0 (int *,TYPE_10__*,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int ,int ) ;
 TYPE_6__* FUNC_3 (TYPE_5__*,int ) ;

void FUNC_4(SLocalReducer *VAR_0, SSqlCmd *VAR_1, SInterpolationInfo *VAR_2) {

  SMeterMetaInfo* VAR_3 = FUNC_3(VAR_1, 0);
  int16_t VAR_4 = VAR_3->pMeterMeta->precision;

  int64_t VAR_5 = (VAR_1->stime < VAR_1->etime) ? VAR_1->stime : VAR_1->etime;
  int64_t VAR_6 = FUNC_1(VAR_5, VAR_1->nAggTimeInterval, VAR_1->intervalTimeUnit, VAR_4);

  FUNC_2(VAR_2, VAR_1->order.order, VAR_6, VAR_1->groupbyExpr.numOfGroupCols,
                      VAR_0->rowSize);

  VAR_0->discard = 1;
  VAR_0->discardData->numOfElems = 0;

  tColModel *VAR_7 = VAR_0->pDesc->pSchema;
  FUNC_0(VAR_7, VAR_0->discardData, VAR_0->prevRowOfInput, 0, 1, 1);
}

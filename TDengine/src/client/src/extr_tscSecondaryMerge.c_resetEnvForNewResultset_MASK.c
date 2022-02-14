
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


typedef scalar_t__ int64_t ;
typedef int int16_t ;
struct TYPE_21__ {int rowSize; int interpolationInfo; int offset; } ;
struct TYPE_20__ {TYPE_2__* pMeterMeta; } ;
struct TYPE_17__ {int numOfGroupCols; } ;
struct TYPE_16__ {int order; } ;
struct TYPE_14__ {int offset; } ;
struct TYPE_19__ {scalar_t__ interpoType; scalar_t__ stime; scalar_t__ etime; TYPE_4__ groupbyExpr; TYPE_3__ order; int intervalTimeUnit; int nAggTimeInterval; TYPE_1__ limit; } ;
struct TYPE_18__ {scalar_t__ numOfTotal; scalar_t__ numOfRows; } ;
struct TYPE_15__ {int precision; } ;
typedef TYPE_5__ SSqlRes ;
typedef TYPE_6__ SSqlCmd ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SLocalReducer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ,int ) ;
 TYPE_7__* FUNC_2 (TYPE_6__*,int ) ;

__attribute__((used)) static void FUNC_3(SSqlRes *VAR_1, SSqlCmd *VAR_2, SLocalReducer *VAR_3) {

  VAR_1->numOfRows = 0;
  VAR_1->numOfTotal = 0;
  VAR_2->limit.offset = VAR_3->offset;

  SMeterMetaInfo* VAR_4 = FUNC_2(VAR_2, 0);
  int16_t VAR_5 = VAR_4->pMeterMeta->precision;


  if (VAR_2->interpoType != VAR_0) {
    int64_t VAR_6 = (VAR_2->stime < VAR_2->etime) ? VAR_2->stime : VAR_2->etime;
    int64_t VAR_7 = FUNC_0(VAR_6, VAR_2->nAggTimeInterval, VAR_2->intervalTimeUnit, VAR_5);

    FUNC_1(&VAR_3->interpolationInfo, VAR_2->order.order, VAR_7, VAR_2->groupbyExpr.numOfGroupCols,
                        VAR_3->rowSize);
  }
}

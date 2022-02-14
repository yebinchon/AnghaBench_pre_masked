
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int8_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_26__ {scalar_t__ hasUnprocessedRow; TYPE_3__* resColModel; int ** pLocalDataSrc; int hasPrevRow; int discard; int interpolationInfo; } ;
struct TYPE_25__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_20__ {int order; } ;
struct TYPE_24__ {scalar_t__ interpoType; scalar_t__ stime; scalar_t__ etime; int nAggTimeInterval; int intervalTimeUnit; TYPE_2__ order; } ;
struct TYPE_22__ {scalar_t__ numOfRows; TYPE_8__* pLocalReducer; } ;
struct TYPE_23__ {TYPE_4__ res; TYPE_6__ cmd; } ;
struct TYPE_21__ {int maxCapacity; } ;
struct TYPE_19__ {int precision; } ;
typedef TYPE_4__ SSqlRes ;
typedef TYPE_5__ SSqlObj ;
typedef TYPE_6__ SSqlCmd ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SLocalReducer ;
typedef int SInterpolationInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_8__*,int) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,int ,int ) ;
 TYPE_7__* FUNC_6 (TYPE_6__*,int ) ;

__attribute__((used)) static bool FUNC_7(SSqlObj *VAR_1) {
  SSqlCmd *VAR_2 = &VAR_1->cmd;
  SSqlRes *VAR_3 = &VAR_1->res;

  SLocalReducer * VAR_4 = VAR_3->pLocalReducer;
  SInterpolationInfo *VAR_5 = &VAR_4->interpolationInfo;

  bool VAR_6 = (!VAR_4->discard) && VAR_4->hasUnprocessedRow;

  SMeterMetaInfo* VAR_7 = FUNC_6(VAR_2, 0);
  int8_t VAR_8 = VAR_7->pMeterMeta->precision;

  if ((FUNC_1(VAR_4) && !VAR_4->hasPrevRow) || VAR_4->pLocalDataSrc[0] == ((void*)0) ||
      VAR_6) {

    if (VAR_2->interpoType != VAR_0) {
      int64_t VAR_9 = (VAR_2->stime < VAR_2->etime) ? VAR_2->etime : VAR_2->stime;

      VAR_9 = FUNC_5(VAR_9, VAR_2->order.order, VAR_2->nAggTimeInterval, VAR_2->intervalTimeUnit, VAR_8);
      int32_t VAR_10 = FUNC_4(VAR_5, ((void*)0), 0, VAR_2->nAggTimeInterval, VAR_9,
                                                   VAR_4->resColModel->maxCapacity);
      if (VAR_10 > 0) {
        FUNC_0(VAR_1, VAR_4, 1);
      }
    }







    if (VAR_3->numOfRows > 0 || (FUNC_1(VAR_4) && (!VAR_4->hasUnprocessedRow))) {
      return 1;
    }


    if (FUNC_3(VAR_1)) {
      return 1;
    }

    FUNC_2(VAR_3, VAR_2, VAR_4);
  }

  return 0;
}

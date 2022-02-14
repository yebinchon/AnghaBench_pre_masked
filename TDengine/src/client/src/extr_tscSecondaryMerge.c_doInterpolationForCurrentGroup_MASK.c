
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__ data; } ;
typedef TYPE_4__ tFilePage ;
typedef int int8_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_19__ {int numOfRawDataInRows; } ;
struct TYPE_28__ {TYPE_3__* resColModel; scalar_t__ pBufForInterpo; TYPE_4__* pResultBuf; TYPE_10__ interpolationInfo; } ;
struct TYPE_27__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_21__ {int order; } ;
struct TYPE_26__ {scalar_t__ interpoType; int nAggTimeInterval; int intervalTimeUnit; TYPE_2__ order; } ;
struct TYPE_24__ {TYPE_9__* pLocalReducer; } ;
struct TYPE_25__ {TYPE_5__ res; TYPE_7__ cmd; } ;
struct TYPE_22__ {int maxCapacity; } ;
struct TYPE_20__ {int precision; } ;
typedef int TSKEY ;
typedef TYPE_5__ SSqlRes ;
typedef TYPE_6__ SSqlObj ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SMeterMetaInfo ;
typedef TYPE_9__ SLocalReducer ;
typedef TYPE_10__ SInterpolationInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_2 (TYPE_10__*,int *,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_10__*) ;
 scalar_t__ FUNC_5 (TYPE_10__*) ;
 TYPE_8__* FUNC_6 (TYPE_7__*,int ) ;

__attribute__((used)) static bool FUNC_7(SSqlObj *VAR_2) {
  SSqlCmd *VAR_3 = &VAR_2->cmd;
  SSqlRes *VAR_4 = &VAR_2->res;

  SLocalReducer * VAR_5 = VAR_4->pLocalReducer;
  SInterpolationInfo *VAR_6 = &VAR_5->interpolationInfo;

  SMeterMetaInfo* VAR_7 = FUNC_6(VAR_3, 0);
  int8_t VAR_8 = VAR_7->pMeterMeta->precision;

  if (FUNC_4(VAR_6)) {
    FUNC_0(VAR_3->interpoType != VAR_0);

    tFilePage *VAR_9 = VAR_5->pResultBuf;
    int64_t VAR_10 = *(int64_t *)(VAR_9->data + VAR_1 * (VAR_6->numOfRawDataInRows - 1));

    int32_t VAR_11 = FUNC_5(VAR_6);
    TSKEY VAR_12 = FUNC_3(VAR_10, VAR_3->order.order, VAR_3->nAggTimeInterval, VAR_3->intervalTimeUnit, VAR_8);
    int32_t VAR_13 = FUNC_2(VAR_6, (TSKEY *)VAR_5->pBufForInterpo, VAR_11,
                                                 VAR_3->nAggTimeInterval, VAR_12, VAR_5->resColModel->maxCapacity);
    if (VAR_13 > 0) {
      FUNC_1(VAR_2, VAR_5, 0);
    }

    return 1;
  } else {
    return 0;
  }
}

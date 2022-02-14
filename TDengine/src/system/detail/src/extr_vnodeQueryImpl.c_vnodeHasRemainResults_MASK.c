
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_13__ {TYPE_4__** pInterpoBuf; int interpoInfo; TYPE_6__* pQuery; } ;
struct TYPE_16__ {int rawEKey; TYPE_5__ runtimeEnv; } ;
struct TYPE_9__ {scalar_t__ interpoType; } ;
struct TYPE_15__ {scalar_t__ pointsRead; TYPE_1__ query; TYPE_8__* pMeterQuerySupporter; } ;
struct TYPE_11__ {int order; } ;
struct TYPE_10__ {scalar_t__ limit; } ;
struct TYPE_14__ {int pointsToRead; int nAggTimeInterval; int precision; int intervalTimeUnit; TYPE_3__ order; int over; TYPE_2__ limit; } ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef int TSKEY ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SQInfo ;
typedef TYPE_8__ SMeterQuerySupportObj ;
typedef int SInterpolationInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

bool FUNC_4(void *VAR_3) {
  SQInfo * VAR_4 = (SQInfo *)VAR_3;
  SMeterQuerySupportObj *VAR_5 = VAR_4->pMeterQuerySupporter;

  if (VAR_5 == ((void*)0) || VAR_4->query.interpoType == VAR_2) {
    return 0;
  }

  SQueryRuntimeEnv *VAR_6 = &VAR_5->runtimeEnv;
  SQuery * VAR_7 = VAR_6->pQuery;

  SInterpolationInfo *VAR_8 = &VAR_6->interpoInfo;

  if (VAR_7->limit.limit > 0 && VAR_4->pointsRead >= VAR_7->limit.limit) {
    return 0;
  }

  int32_t VAR_9 = FUNC_3(VAR_8);
  if (VAR_9 > 0) {
    return 1;
  } else {
    if (VAR_6->pInterpoBuf == ((void*)0)) {
      return 0;
    }


    if (FUNC_0(VAR_7->over, VAR_0 | VAR_1)) {
      TSKEY VAR_10 = FUNC_2(VAR_5->rawEKey, VAR_7->order.order, VAR_7->nAggTimeInterval,
                                        VAR_7->intervalTimeUnit, VAR_7->precision);
      int32_t VAR_11 = FUNC_1(VAR_8, (TSKEY *)VAR_6->pInterpoBuf[0]->data,
                                                         VAR_9, VAR_7->nAggTimeInterval, VAR_10, VAR_7->pointsToRead);
      return VAR_11 > 0;
    }

    return 0;
  }
}

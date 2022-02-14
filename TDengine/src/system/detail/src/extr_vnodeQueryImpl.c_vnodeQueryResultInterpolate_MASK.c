
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ data; } ;
typedef TYPE_4__ tFilePage ;
typedef scalar_t__ int32_t ;
struct TYPE_21__ {int interpoInfo; TYPE_6__* pQuery; } ;
struct TYPE_24__ {int rawEKey; TYPE_5__ runtimeEnv; } ;
struct TYPE_23__ {TYPE_8__* pMeterQuerySupporter; } ;
struct TYPE_19__ {scalar_t__ offset; } ;
struct TYPE_17__ {int order; } ;
struct TYPE_22__ {int pointsToRead; scalar_t__ numOfOutputCols; TYPE_3__ limit; TYPE_2__* pSelectExpr; int nAggTimeInterval; int precision; int intervalTimeUnit; TYPE_1__ order; } ;
struct TYPE_18__ {int resBytes; } ;
typedef int TSKEY ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SQInfo ;
typedef TYPE_8__ SMeterQuerySupportObj ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_4__**,TYPE_4__**,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_7__*) ;

int32_t FUNC_8(SQInfo *VAR_0, tFilePage **VAR_1, tFilePage **VAR_2, int32_t VAR_3,
                                    int32_t *VAR_4) {
  SMeterQuerySupportObj *VAR_5 = VAR_0->pMeterQuerySupporter;
  SQueryRuntimeEnv * VAR_6 = &VAR_5->runtimeEnv;
  SQuery * VAR_7 = VAR_6->pQuery;

  while (1) {
    VAR_3 = FUNC_6(&VAR_6->interpoInfo);

    TSKEY VAR_8 = FUNC_5(VAR_5->rawEKey, VAR_7->order.order, VAR_7->nAggTimeInterval,
                                      VAR_7->intervalTimeUnit, VAR_7->precision);
    int32_t VAR_9 =
        FUNC_4(&VAR_6->interpoInfo, (TSKEY *)VAR_2[0]->data, VAR_3,
                                      VAR_7->nAggTimeInterval, VAR_8, VAR_7->pointsToRead);

    int32_t VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_9);
    FUNC_1(VAR_10 == VAR_9);

    if (VAR_7->limit.offset == 0) {

      return VAR_10;
    }

    if (VAR_7->limit.offset < VAR_10) {
      VAR_10 -= VAR_7->limit.offset;


      if (FUNC_0(VAR_7)) {
        for (int32_t VAR_11 = 0; VAR_11 < VAR_7->numOfOutputCols; ++VAR_11) {
          FUNC_2(VAR_1[VAR_11]->data, VAR_1[VAR_11]->data + VAR_7->pSelectExpr[VAR_11].resBytes * VAR_7->limit.offset,
                  VAR_10 * VAR_7->pSelectExpr[VAR_11].resBytes);
        }
      } else {
        for (int32_t VAR_12 = 0; VAR_12 < VAR_7->numOfOutputCols; ++VAR_12) {
          FUNC_2(VAR_1[VAR_12]->data + (VAR_7->pointsToRead - VAR_10) * VAR_7->pSelectExpr[VAR_12].resBytes,
                  VAR_1[VAR_12]->data + (VAR_7->pointsToRead - VAR_10 - VAR_7->limit.offset) * VAR_7->pSelectExpr[VAR_12].resBytes,
                  VAR_10 * VAR_7->pSelectExpr[VAR_12].resBytes);
        }
      }
      VAR_7->limit.offset = 0;
      return VAR_10;
    } else {
      VAR_7->limit.offset -= VAR_10;
      VAR_10 = 0;
    }

    if (!FUNC_7(VAR_0)) {
      return VAR_10;
    }
  }
}

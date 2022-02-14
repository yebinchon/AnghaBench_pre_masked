
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef scalar_t__ int32_t ;
struct TYPE_27__ {int numOfMeters; } ;
struct TYPE_20__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_26__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_21__ {int colIdx; } ;
struct TYPE_25__ {scalar_t__ functionId; TYPE_2__ colInfo; } ;
struct TYPE_23__ {scalar_t__ data; } ;
struct TYPE_24__ {TYPE_4__ res; TYPE_7__ cmd; } ;
struct TYPE_22__ {scalar_t__ bytes; } ;
struct TYPE_19__ {TYPE_8__* pMetricMeta; } ;
typedef TYPE_3__ TAOS_FIELD ;
typedef TYPE_4__ SSqlRes ;
typedef TYPE_5__ SSqlObj ;
typedef TYPE_6__ SSqlExpr ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SMetricMeta ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_7__*,scalar_t__) ;
 TYPE_13__* FUNC_4 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*,scalar_t__,scalar_t__) ;
 TYPE_6__* FUNC_7 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(SSqlObj *VAR_1) {
  SSqlCmd *VAR_2 = &VAR_1->cmd;
  SSqlRes *VAR_3 = &VAR_1->res;

  SMetricMeta *VAR_4 = FUNC_4(VAR_2, 0)->pMetricMeta;
  int32_t VAR_5 = 1;
  int32_t VAR_6 = FUNC_5(VAR_2);

  FUNC_6(VAR_1, VAR_5, VAR_6);

  int32_t VAR_7 = 0;
  for (int32_t VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
    for (int32_t VAR_9 = 0; VAR_9 < VAR_2->fieldsInfo.numOfOutputCols; ++VAR_9) {
      SSqlExpr *VAR_10 = FUNC_7(VAR_2, VAR_8);

      if (VAR_10->colInfo.colIdx == -1 && VAR_10->functionId == VAR_0) {
        TAOS_FIELD *VAR_11 = FUNC_2(VAR_2, VAR_9);

        FUNC_0(VAR_3->data + FUNC_3(VAR_2, VAR_8) * VAR_5 + VAR_11->bytes * VAR_7,
               &VAR_4->numOfMeters, sizeof(VAR_4->numOfMeters));
      } else {
        FUNC_1("not support operations");
        continue;
      }
    }
    VAR_7++;
  }

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_28__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_22__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_27__ {TYPE_2__ fieldsInfo; } ;
struct TYPE_24__ {int colIdx; } ;
struct TYPE_26__ {size_t functionId; scalar_t__ interResBytes; TYPE_4__ colInfo; TYPE_3__* param; } ;
struct TYPE_25__ {int bytes; int type; } ;
struct TYPE_23__ {int i64Key; } ;
struct TYPE_21__ {scalar_t__ numOfTags; } ;
struct TYPE_20__ {scalar_t__ stableFuncId; } ;
typedef TYPE_5__ TAOS_FIELD ;
typedef TYPE_6__ SSqlExpr ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_8__*) ;
 TYPE_18__* VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ,scalar_t__*,scalar_t__*,scalar_t__*,int ,int) ;
 TYPE_5__* FUNC_3 (TYPE_7__*,scalar_t__) ;
 int FUNC_4 (TYPE_7__*) ;
 TYPE_8__* FUNC_5 (TYPE_7__*,int ) ;
 TYPE_6__* FUNC_6 (TYPE_7__*,scalar_t__) ;
 int FUNC_7 (TYPE_7__*,scalar_t__,scalar_t__,int ,int ,scalar_t__) ;

int32_t FUNC_8(SSqlCmd* VAR_8) {
  SMeterMetaInfo* VAR_9 = FUNC_5(VAR_8, 0);

  if (VAR_9->pMeterMeta == ((void*)0) || !FUNC_0(VAR_9)) {
    return VAR_0;
  }

  FUNC_1(VAR_9->pMeterMeta->numOfTags >= 0);

  int16_t VAR_10 = 0;
  int16_t VAR_11 = 0;
  int16_t VAR_12 = 0;

  for (int32_t VAR_13 = 0; VAR_13 < VAR_8->fieldsInfo.numOfOutputCols; ++VAR_13) {
    SSqlExpr* VAR_14 = FUNC_6(VAR_8, VAR_13);
    TAOS_FIELD* VAR_15 = FUNC_3(VAR_8, VAR_13);

    int16_t VAR_16 = VAR_7[VAR_14->functionId].stableFuncId;

    if ((VAR_16 >= VAR_5 && VAR_16 <= VAR_6) ||
        (VAR_16 >= VAR_3 && VAR_16 <= VAR_4)) {
      if (FUNC_2(VAR_15->type, VAR_15->bytes, VAR_16, VAR_14->param[0].i64Key, &VAR_11, &VAR_10,
                            &VAR_12, 0, 1) != VAR_1) {
        return VAR_0;
      }

      FUNC_7(VAR_8, VAR_13, VAR_16, VAR_14->colInfo.colIdx, VAR_2, VAR_10);

      VAR_14->interResBytes = VAR_12;
    }
  }

  FUNC_4(VAR_8);
  return VAR_1;
}

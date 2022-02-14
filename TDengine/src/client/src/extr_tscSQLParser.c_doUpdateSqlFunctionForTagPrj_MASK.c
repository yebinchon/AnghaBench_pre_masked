
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


typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_20__ {int pMeterMeta; } ;
struct TYPE_19__ {int bytes; int type; } ;
struct TYPE_14__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_18__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_15__ {scalar_t__ colId; size_t colIdx; } ;
struct TYPE_17__ {scalar_t__ functionId; int interResBytes; scalar_t__ resBytes; int resType; TYPE_3__* param; TYPE_2__ colInfo; } ;
struct TYPE_16__ {int i64Key; } ;
typedef TYPE_4__ SSqlExpr ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SSchema ;
typedef TYPE_7__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int *,scalar_t__*,int *,scalar_t__,int) ;
 TYPE_6__* FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(SSqlCmd* VAR_6) {
  int32_t VAR_7 = 0;
  for (int32_t VAR_8 = 0; VAR_8 < VAR_6->fieldsInfo.numOfOutputCols; ++VAR_8) {
    SSqlExpr* VAR_9 = FUNC_3(VAR_6, VAR_8);
    if (VAR_9->functionId == VAR_3 || VAR_9->functionId == VAR_2) {
      VAR_9->functionId = VAR_4;
      VAR_7 += VAR_9->resBytes;
    } else if (VAR_9->functionId == VAR_1 && VAR_9->colInfo.colId == VAR_0) {
      VAR_9->functionId = VAR_5;
      VAR_7 += VAR_9->resBytes;
    }
  }

  int16_t VAR_10 = 0;
  int16_t VAR_11 = 0;

  SMeterMetaInfo* VAR_12 = FUNC_2(VAR_6, 0);
  SSchema* VAR_13 = FUNC_1(VAR_12->pMeterMeta);

  for (int32_t VAR_14 = 0; VAR_14 < VAR_6->fieldsInfo.numOfOutputCols; ++VAR_14) {
    SSqlExpr* VAR_15 = FUNC_3(VAR_6, VAR_14);
    if (VAR_15->functionId != VAR_4 && VAR_15->functionId != VAR_5) {
      SSchema* VAR_16 = &VAR_13[VAR_15->colInfo.colIdx];
      FUNC_0(VAR_16->type, VAR_16->bytes, VAR_15->functionId, VAR_15->param[0].i64Key, &VAR_15->resType,
                        &VAR_15->resBytes, &VAR_15->interResBytes, VAR_7, 1);
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_22__ {int* tagColumnIndex; int pMeterMeta; } ;
struct TYPE_21__ {int type; } ;
struct TYPE_16__ {size_t numOfExprs; } ;
struct TYPE_20__ {TYPE_1__ exprsInfo; } ;
struct TYPE_17__ {size_t colIdx; int flag; } ;
struct TYPE_19__ {TYPE_2__ colInfo; int functionId; } ;
struct TYPE_18__ {int type; int functionId; } ;
typedef TYPE_3__ SSrcColumnInfo ;
typedef TYPE_4__ SSqlExpr ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SSchema ;
typedef TYPE_7__ SMeterMetaInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int ) ;
 TYPE_7__* FUNC_3 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_5__*,size_t) ;

void FUNC_5(SSrcColumnInfo* VAR_1, SSqlCmd* VAR_2) {
  SMeterMetaInfo* VAR_3 = FUNC_3(VAR_2, 0);
  SSchema* VAR_4 = FUNC_1(VAR_3->pMeterMeta);

  for (int32_t VAR_5 = 0; VAR_5 < VAR_2->exprsInfo.numOfExprs; ++VAR_5) {
    SSqlExpr* VAR_6 = FUNC_4(VAR_2, VAR_5);
    VAR_1[VAR_5].functionId = VAR_6->functionId;

    if (FUNC_0(VAR_6->colInfo.flag)) {
      SSchema* VAR_7 = FUNC_2(VAR_3->pMeterMeta);
      int16_t VAR_8 = VAR_3->tagColumnIndex[VAR_6->colInfo.colIdx];

      VAR_1[VAR_5].type = (VAR_8 != -1) ? VAR_7[VAR_8].type : VAR_0;
    } else {
      VAR_1[VAR_5].type = VAR_4[VAR_6->colInfo.colIdx].type;
    }
  }
}

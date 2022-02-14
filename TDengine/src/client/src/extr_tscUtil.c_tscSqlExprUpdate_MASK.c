
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t int32_t ;
typedef void* int16_t ;
struct TYPE_16__ {int pMeterMeta; } ;
struct TYPE_13__ {size_t numOfExprs; TYPE_3__* pExprs; } ;
struct TYPE_15__ {TYPE_2__ exprsInfo; } ;
struct TYPE_12__ {int colId; void* colIdx; } ;
struct TYPE_14__ {void* resBytes; void* resType; TYPE_1__ colInfo; void* functionId; } ;
struct TYPE_11__ {int colId; } ;
typedef TYPE_2__ SSqlExprInfo ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SMeterMetaInfo ;


 TYPE_10__* FUNC_0 (int ,void*) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;

SSqlExpr* FUNC_2(SSqlCmd* VAR_0, int32_t VAR_1, int16_t VAR_2, int16_t VAR_3, int16_t VAR_4,
                           int16_t VAR_5) {
  SMeterMetaInfo* VAR_6 = FUNC_1(VAR_0, 0);
  SSqlExprInfo* VAR_7 = &VAR_0->exprsInfo;
  if (VAR_1 > VAR_7->numOfExprs) {
    return ((void*)0);
  }

  SSqlExpr* VAR_8 = &VAR_7->pExprs[VAR_1];

  VAR_8->functionId = VAR_2;

  VAR_8->colInfo.colIdx = VAR_3;
  VAR_8->colInfo.colId = FUNC_0(VAR_6->pMeterMeta, VAR_3)->colId;

  VAR_8->resType = VAR_4;
  VAR_8->resBytes = VAR_5;

  return VAR_8;
}

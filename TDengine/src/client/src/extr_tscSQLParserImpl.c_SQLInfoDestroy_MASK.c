
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int keep; } ;
struct TYPE_9__ {int pTagVals; } ;
struct TYPE_8__ {int pTagColumns; int pColumns; } ;
struct TYPE_12__ {scalar_t__ nAlloc; TYPE_3__ dbOpt; int a; int pAddColumns; int varList; TYPE_2__ usingInfo; TYPE_1__ colInfo; int pSelect; } ;
struct TYPE_11__ {scalar_t__ sqlType; TYPE_5__* pDCLInfo; TYPE_5__* pAlterInfo; TYPE_5__* pCreateTableInfo; int pQueryInfo; } ;
typedef TYPE_4__ SSqlInfo ;
typedef TYPE_5__ SCreateTableSQL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;

void FUNC_5(SSqlInfo *VAR_6) {
  if (VAR_6 == ((void*)0)) return;

  if (VAR_6->sqlType == VAR_5) {
    FUNC_0(VAR_6->pQueryInfo);
  } else if (VAR_6->sqlType >= VAR_3 && VAR_6->sqlType <= VAR_4) {
    SCreateTableSQL *VAR_7 = VAR_6->pCreateTableInfo;
    FUNC_0(VAR_7->pSelect);

    FUNC_2(VAR_7->colInfo.pColumns);
    FUNC_2(VAR_7->colInfo.pTagColumns);

    FUNC_3(VAR_7->usingInfo.pTagVals);
    FUNC_4(VAR_6->pCreateTableInfo);
  } else if (VAR_6->sqlType >= VAR_1 && VAR_6->sqlType <= VAR_0) {
    FUNC_3(VAR_6->pAlterInfo->varList);
    FUNC_2(VAR_6->pAlterInfo->pAddColumns);
    FUNC_4(VAR_6->pAlterInfo);
  } else {
    if (VAR_6->pDCLInfo != ((void*)0) && VAR_6->pDCLInfo->nAlloc > 0) {
      FUNC_1(VAR_6->pDCLInfo->a);
    }

    if (VAR_6->sqlType == VAR_2) {
      FUNC_3(VAR_6->pDCLInfo->dbOpt.keep);
    }

    FUNC_4(VAR_6->pDCLInfo);
  }
}

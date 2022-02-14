
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tDCLSQL ;
typedef int int32_t ;
struct TYPE_11__ {int acctOpt; } ;
struct TYPE_10__ {scalar_t__ n; } ;
struct TYPE_9__ {TYPE_3__* pDCLInfo; int sqlType; } ;
typedef TYPE_1__ SSqlInfo ;
typedef TYPE_2__ SSQLToken ;
typedef int SCreateAcctSQL ;


 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

void FUNC_2(SSqlInfo *VAR_0, int32_t VAR_1, SSQLToken *VAR_2, SSQLToken *VAR_3, SCreateAcctSQL *VAR_4) {
  VAR_0->sqlType = VAR_1;
  if (VAR_0->pDCLInfo == ((void*)0)) {
    VAR_0->pDCLInfo = FUNC_0(1, sizeof(tDCLSQL));
  }

  VAR_0->pDCLInfo->acctOpt = *VAR_4;

  FUNC_1(VAR_0->pDCLInfo, VAR_2);

  if (VAR_3->n > 0) {
    FUNC_1(VAR_0->pDCLInfo, VAR_3);
  }
}

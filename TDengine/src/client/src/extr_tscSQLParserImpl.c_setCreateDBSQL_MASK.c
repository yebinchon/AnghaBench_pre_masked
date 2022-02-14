
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tDCLSQL ;
typedef int int32_t ;
struct TYPE_8__ {int dbname; } ;
struct TYPE_9__ {TYPE_2__ dbOpt; } ;
struct TYPE_7__ {TYPE_3__* pDCLInfo; int sqlType; } ;
typedef TYPE_1__ SSqlInfo ;
typedef int SSQLToken ;
typedef TYPE_2__ SCreateDBInfo ;


 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,int *) ;

void FUNC_2(SSqlInfo *VAR_0, int32_t VAR_1, SSQLToken *VAR_2, SCreateDBInfo *VAR_3, SSQLToken *VAR_4) {
  VAR_0->sqlType = VAR_1;
  if (VAR_0->pDCLInfo == ((void*)0)) {
    VAR_0->pDCLInfo = FUNC_0(1, sizeof(tDCLSQL));
  }

  VAR_0->pDCLInfo->dbOpt = *VAR_3;
  VAR_0->pDCLInfo->dbOpt.dbname = *VAR_2;

  FUNC_1(VAR_0->pDCLInfo, VAR_4);
}

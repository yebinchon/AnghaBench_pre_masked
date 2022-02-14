
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSQLExprListList ;
struct TYPE_6__ {int * pValue; int name; } ;
struct TYPE_5__ {int sqlType; TYPE_2__* pInsertInfo; } ;
typedef TYPE_1__ SSqlInfo ;
typedef int SSQLToken ;
typedef TYPE_2__ SInsertSQL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;

void FUNC_1(SSqlInfo *VAR_1, SSQLToken *VAR_2, tSQLExprListList *VAR_3) {
  SInsertSQL *VAR_4 = FUNC_0(1, sizeof(SInsertSQL));

  VAR_4->name = *VAR_2;
  VAR_4->pValue = VAR_3;

  VAR_1->pInsertInfo = VAR_4;
  VAR_1->sqlType = VAR_0;
}

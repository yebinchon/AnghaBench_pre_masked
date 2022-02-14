
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int meterList; int numOfVnodes; int vnodeGid; int dbName; } ;
typedef TYPE_1__ SVgObj ;
typedef int SDbObj ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void *FUNC_4(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  SVgObj *VAR_4 = (SVgObj *)VAR_0;
  SDbObj *VAR_5 = FUNC_0(VAR_4->dbName);

  if (VAR_5 != ((void*)0)) FUNC_1(VAR_5, VAR_4);
  FUNC_2(VAR_4->vnodeGid, VAR_4->numOfVnodes);
  FUNC_3(VAR_4->meterList);

  return ((void*)0);
}

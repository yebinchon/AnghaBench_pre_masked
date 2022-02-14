
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int maxSessions; } ;
struct TYPE_7__ {TYPE_1__ cfg; } ;
struct TYPE_6__ {int numOfVnodes; int vgId; int ** meterList; int idPool; int dbName; } ;
typedef TYPE_2__ SVgObj ;
typedef int STabObj ;
typedef TYPE_3__ SDbObj ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (void*,char*,int,int*) ;
 scalar_t__ FUNC_4 (int **,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

void *FUNC_7(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  SVgObj *VAR_4 = (SVgObj *)VAR_0;
  int VAR_5 = FUNC_5(VAR_4->idPool);

  SDbObj *VAR_6 = FUNC_2(VAR_4->dbName);
  if (VAR_6 != ((void*)0)) {
    if (VAR_6->cfg.maxSessions != VAR_5) {
      FUNC_0("vgroup:%d tables change from %d to %d", VAR_4->vgId, VAR_5, VAR_6->cfg.maxSessions);
      FUNC_6(VAR_4->idPool, VAR_6->cfg.maxSessions);
      int VAR_7 = sizeof(STabObj *) * VAR_6->cfg.maxSessions;
      VAR_4->meterList = (STabObj **)FUNC_4(VAR_4->meterList, VAR_7);
    }
  }

  FUNC_1("vgroup:%d update, numOfVnode:%d", VAR_4->vgId, VAR_4->numOfVnodes);

  return ((void*)0);
}

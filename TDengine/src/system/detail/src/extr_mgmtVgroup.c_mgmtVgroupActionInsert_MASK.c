
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int maxSessions; } ;
struct TYPE_9__ {TYPE_1__ cfg; } ;
struct TYPE_8__ {int vgId; int numOfVnodes; int vnodeGid; int idPool; scalar_t__ numOfMeters; int ** meterList; int dbName; } ;
typedef TYPE_2__ SVgObj ;
typedef int STabObj ;
typedef TYPE_3__ SDbObj ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int **,int ,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;

void *FUNC_6(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  SVgObj *VAR_4 = (SVgObj *)VAR_0;
  SDbObj *VAR_5 = FUNC_3(VAR_4->dbName);

  if (VAR_5 == ((void*)0)) return ((void*)0);

  int VAR_6 = sizeof(STabObj *) * VAR_5->cfg.maxSessions;
  VAR_4->meterList = (STabObj **)FUNC_0(VAR_6);
  FUNC_1(VAR_4->meterList, 0, VAR_6);
  VAR_4->numOfMeters = 0;
  VAR_4->idPool = FUNC_5(VAR_5->cfg.maxSessions);
  FUNC_2(VAR_5, VAR_4);
  FUNC_4(VAR_4->vnodeGid, VAR_4->numOfVnodes, VAR_4->vgId);

  return ((void*)0);
}

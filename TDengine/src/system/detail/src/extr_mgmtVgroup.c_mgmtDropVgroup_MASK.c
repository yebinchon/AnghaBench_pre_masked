
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int maxSessions; } ;
struct TYPE_13__ {int name; TYPE_1__ cfg; } ;
struct TYPE_12__ {int meterId; } ;
struct TYPE_11__ {scalar_t__ numOfMeters; int numOfVnodes; int vgId; TYPE_3__** meterList; } ;
typedef TYPE_2__ SVgObj ;
typedef TYPE_3__ STabObj ;
typedef TYPE_4__ SDbObj ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int VAR_0 ;

int FUNC_4(SDbObj *VAR_1, SVgObj *VAR_2) {
  STabObj *VAR_3;

  if (VAR_2->numOfMeters > 0) {
    for (int VAR_4 = 0; VAR_4 < VAR_1->cfg.maxSessions; ++VAR_4) {
      if (VAR_2->meterList != ((void*)0)) {
        VAR_3 = VAR_2->meterList[VAR_4];
        if (VAR_3) FUNC_1(VAR_1, VAR_3->meterId, 0);
      }
    }
  }

  FUNC_0("vgroup:%d, db:%s replica:%d is deleted", VAR_2->vgId, VAR_1->name, VAR_2->numOfVnodes);
  FUNC_2(VAR_2);
  FUNC_3(VAR_0, VAR_2);

  return 0;
}

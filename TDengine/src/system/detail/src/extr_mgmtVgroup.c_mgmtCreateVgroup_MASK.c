
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int replications; } ;
struct TYPE_16__ {int name; int vgTimer; int vgStatus; TYPE_1__ cfg; } ;
struct TYPE_15__ {int numOfVnodes; TYPE_2__* vnodeGid; int vgId; int createdTime; int dbName; } ;
struct TYPE_14__ {int vnode; int ip; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ SDbObj ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_7 (int ,TYPE_3__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,TYPE_4__*,int ,int *) ;
 int VAR_3 ;

SVgObj *FUNC_12(SDbObj *VAR_4) {
  SVgObj *VAR_5;
  int VAR_6;

  VAR_6 = sizeof(SVgObj);
  VAR_5 = (SVgObj *)FUNC_3(VAR_6);
  FUNC_4(VAR_5, 0, VAR_6);
  FUNC_8(VAR_5->dbName, VAR_4->name);
  VAR_5->numOfVnodes = VAR_4->cfg.replications;
  VAR_5->createdTime = FUNC_9();


  if (FUNC_5(VAR_5) != 0) {
    FUNC_1("no enough free dnode");
    FUNC_0(VAR_5);
    VAR_4->vgStatus = VAR_0;
    FUNC_11(VAR_1, 5000, VAR_4, VAR_2, &VAR_4->vgTimer);
    return ((void*)0);
  }

  FUNC_7(VAR_3, VAR_5, 0);

  FUNC_2("vgroup:%d, db:%s replica:%d is created", VAR_5->vgId, VAR_4->name, VAR_5->numOfVnodes);
  for (int VAR_7 = 0; VAR_7 < VAR_5->numOfVnodes; ++VAR_7)
    FUNC_2("dnode:%s, vgroup:%d, vnode:%d is created", FUNC_10(VAR_5->vnodeGid[VAR_7].ip), VAR_5->vgId, VAR_5->vnodeGid[VAR_7].vnode);

  FUNC_6(VAR_5);

  return VAR_5;
}

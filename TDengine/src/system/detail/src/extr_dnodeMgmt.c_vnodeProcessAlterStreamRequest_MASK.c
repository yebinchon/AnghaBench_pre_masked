
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int status; scalar_t__ stime; int uid; int sid; int vnode; } ;
struct TYPE_11__ {int sid; int vnode; int status; scalar_t__ lastKey; } ;
struct TYPE_9__ {int maxSessions; } ;
struct TYPE_10__ {TYPE_3__** meterList; TYPE_1__ cfg; int * pCachePool; } ;
typedef TYPE_2__ SVnodeObj ;
typedef int SMgmtObj ;
typedef TYPE_3__ SMeterObj ;
typedef TYPE_4__ SAlterStreamMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7(char *VAR_5, int VAR_6, SMgmtObj *VAR_7) {
  SAlterStreamMsg *VAR_8;
  int VAR_9 = 0;
  int VAR_10, VAR_11;
  SVnodeObj * VAR_12;

  VAR_8 = (SAlterStreamMsg *)VAR_5;
  VAR_10 = FUNC_2(VAR_8->vnode);
  VAR_11 = FUNC_1(VAR_8->sid);

  if (VAR_10 >= VAR_2 || VAR_10 < 0) {
    FUNC_0("vid:%d, vnode is out of range", VAR_10);
    VAR_9 = VAR_0;
    goto _over;
  }

  VAR_12 = VAR_4 + VAR_10;
  if (VAR_12->cfg.maxSessions <= 0 || VAR_12->pCachePool == ((void*)0)) {
    FUNC_0("vid:%d is not activated yet", VAR_8->vnode);
    VAR_9 = VAR_0;
    goto _over;
  }

  if (VAR_8->sid >= VAR_12->cfg.maxSessions || VAR_8->sid < 0) {
    FUNC_0("vid:%d sid:%d uid:%ld, sid is out of range", VAR_8->vnode, VAR_8->sid, VAR_8->uid);
    VAR_9 = VAR_0;
    goto _over;
  }

  SMeterObj *VAR_13 = VAR_4[VAR_10].meterList[VAR_11];
  if (VAR_13 == ((void*)0) || VAR_11 != VAR_13->sid || VAR_10 != VAR_13->vnode) {
    FUNC_0("vid:%d sid:%d, no active session", VAR_10, VAR_11);
    VAR_9 = VAR_1;
    goto _over;
  }

  VAR_13->status = VAR_8->status;
  if (VAR_13->status == 1) {
    if (VAR_8->stime > VAR_13->lastKey)
      VAR_13->lastKey = VAR_8->stime;
    FUNC_4(VAR_13);
  } else {
    FUNC_5(VAR_13);
  }

  FUNC_6(VAR_13);

_over:
  FUNC_3(VAR_7, VAR_3, VAR_9);

  return VAR_9;
}

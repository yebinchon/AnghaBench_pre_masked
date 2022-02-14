
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int vnode; } ;
struct TYPE_6__ {scalar_t__ maxSessions; } ;
struct TYPE_7__ {scalar_t__ syncStatus; TYPE_1__ cfg; } ;
typedef TYPE_2__ SVnodeObj ;
typedef int SMgmtObj ;
typedef TYPE_3__ SCreateMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;

int FUNC_6(char *VAR_6, int VAR_7, SMgmtObj *VAR_8) {
  SCreateMsg *VAR_9;
  int VAR_10 = 0;
  int VAR_11;
  SVnodeObj * VAR_12;

  VAR_9 = (SCreateMsg *)VAR_6;
  VAR_11 = FUNC_2(VAR_9->vnode);

  if (VAR_11 >= VAR_2 || VAR_11 < 0) {
    FUNC_0("vid:%d, vnode is out of range", VAR_11);
    VAR_10 = VAR_0;
    goto _over;
  }

  VAR_12 = VAR_5 + VAR_11;
  if (VAR_12->cfg.maxSessions <= 0) {
    FUNC_0("vid:%d, not activated", VAR_11);
    VAR_10 = VAR_1;
    goto _over;
  }

  if (VAR_12->syncStatus == VAR_4) {
    VAR_10 = FUNC_5(VAR_12, VAR_6, VAR_7);
    FUNC_1("vid:%d, create msg is saved into sync queue", VAR_11);
  } else {
    VAR_10 = FUNC_4(VAR_6, VAR_7);
  }

_over:
  FUNC_3(VAR_8, VAR_3, VAR_10);

  return VAR_10;
}

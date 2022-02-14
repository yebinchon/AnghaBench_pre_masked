
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ dropStatus; int name; TYPE_3__* pHead; } ;
struct TYPE_14__ {int privateIp; TYPE_1__* vload; } ;
struct TYPE_13__ {int numOfVnodes; struct TYPE_13__* next; TYPE_2__* vnodeGid; } ;
struct TYPE_12__ {size_t vnode; int ip; } ;
struct TYPE_11__ {scalar_t__ dropStatus; } ;
typedef TYPE_1__ SVnodeLoad ;
typedef TYPE_2__ SVnodeGid ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ SDnodeObj ;
typedef TYPE_5__ SDbObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,...) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;

int FUNC_7(SDbObj *VAR_4) {
  if (VAR_4->dropStatus == VAR_2) return 0;

  SVgObj *VAR_5 = VAR_4->pHead;
  while (VAR_5 != ((void*)0)) {
    for (int VAR_6 = 0; VAR_6 < VAR_5->numOfVnodes; VAR_6++) {
      SVnodeGid *VAR_7 = VAR_5->vnodeGid + VAR_6;
      SDnodeObj *VAR_8 = FUNC_2(VAR_7->ip);
      if (VAR_8 == ((void*)0)) continue;

      SVnodeLoad *VAR_9 = &VAR_8->vload[VAR_7->vnode];
      if (VAR_9->dropStatus != VAR_3) {
        VAR_9->dropStatus = VAR_3;

        FUNC_1("dnode:%s vnode:%d db:%s set to dropping status", FUNC_6(VAR_8->privateIp), VAR_7->vnode, VAR_4->name);
        if (FUNC_5(VAR_8) < 0) {
          FUNC_0("db:%s drop failed, dnode sdb update error", VAR_4->name);
          return VAR_0;
        }
      }
    }
    FUNC_3(VAR_5);
    VAR_5 = VAR_5->next;
  }

  if (VAR_4->dropStatus == VAR_1) return 0;

  VAR_4->dropStatus = VAR_1;
  if (FUNC_4(VAR_4) < 0) {
    FUNC_0("db:%s drop failed, db sdb update error", VAR_4->name);
    return VAR_0;
  }

  FUNC_1("db:%s set to dropping status", VAR_4->name);
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int name; TYPE_3__* pHead; } ;
struct TYPE_11__ {scalar_t__ status; int privateIp; TYPE_1__* vload; } ;
struct TYPE_10__ {int numOfVnodes; struct TYPE_10__* next; TYPE_2__* vnodeGid; } ;
struct TYPE_9__ {size_t vnode; int ip; } ;
struct TYPE_8__ {scalar_t__ dropStatus; } ;
typedef TYPE_1__ SVnodeLoad ;
typedef TYPE_2__ SVnodeGid ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ SDnodeObj ;
typedef TYPE_5__ SDbObj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,size_t,int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

bool FUNC_4(SDbObj *VAR_2) {
  SVgObj *VAR_3 = VAR_2->pHead;
  while (VAR_3) {
    for (int VAR_4 = 0; VAR_4 < VAR_3->numOfVnodes; VAR_4++) {
      SVnodeGid *VAR_5 = VAR_3->vnodeGid + VAR_4;
      SDnodeObj *VAR_6 = FUNC_2(VAR_5->ip);

      if (VAR_6 == ((void*)0)) continue;
      if (VAR_6->status == VAR_0) continue;

      SVnodeLoad *VAR_7 = &VAR_6->vload[VAR_5->vnode];
      if (VAR_7->dropStatus == VAR_1) {
        FUNC_1("dnode:%s, vnode:%d db:%s wait dropping", FUNC_3(VAR_6->privateIp), VAR_5->vnode, VAR_2->name);
        return 0;
      }
    }
    VAR_3 = VAR_3->next;
  }

  FUNC_0("db:%s all vnodes drop finished", VAR_2->name);
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int numOfVnodes; int lastAllocVnode; int numOfFreeVnodes; TYPE_1__* vload; } ;
struct TYPE_9__ {TYPE_2__* vnodeGid; int vgId; } ;
struct TYPE_8__ {int vnode; } ;
struct TYPE_7__ {scalar_t__ vgId; scalar_t__ status; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ SDnodeObj ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int,int) ;

int FUNC_2(SVgObj *VAR_2) {
  int VAR_3 = -1;
  SDnodeObj *VAR_4 = &VAR_1;

  for (int VAR_5 = 0; VAR_5 < VAR_4->numOfVnodes; VAR_5++) {
    int VAR_6 = (VAR_5 + VAR_4->lastAllocVnode) % VAR_4->numOfVnodes;
    if (VAR_4->vload[VAR_6].vgId == 0 && VAR_4->vload[VAR_6].status == VAR_0) {
      VAR_3 = VAR_6;
      break;
    }
  }

  if (VAR_3 == -1) {
    FUNC_0("vgroup:%d alloc vnode failed, free vnodes:%d", VAR_2->vgId, VAR_4->numOfFreeVnodes);
    return -1;
  } else {
    FUNC_1("vgroup:%d allocate vnode:%d, last allocated vnode:%d", VAR_2->vgId, VAR_3,
           VAR_4->lastAllocVnode);
    VAR_2->vnodeGid[0].vnode = VAR_3;
    VAR_4->lastAllocVnode = VAR_3 + 1;
    if (VAR_4->lastAllocVnode >= VAR_4->numOfVnodes) VAR_4->lastAllocVnode = 0;
    return 0;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* vload; } ;
struct TYPE_9__ {int vnode; int ip; } ;
struct TYPE_8__ {int vgId; } ;
typedef TYPE_1__ SVnodeLoad ;
typedef TYPE_2__ SVnodeGid ;
typedef TYPE_3__ SDnodeObj ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(SVnodeGid VAR_0[], int VAR_1) {
  SDnodeObj *VAR_2;

  for (int VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
    VAR_2 = FUNC_4(VAR_0[VAR_3].ip);
    if (VAR_2) {
      SVnodeLoad *VAR_4 = VAR_2->vload + VAR_0[VAR_3].vnode;
      FUNC_1("dnode:%s, vnode:%d remove from vgroup:%d", FUNC_5(VAR_0[VAR_3].ip), VAR_0[VAR_3].vnode, VAR_4->vgId);
      FUNC_2(VAR_4, 0, sizeof(SVnodeLoad));
      FUNC_3(VAR_2);
    } else {
      FUNC_0("dnode:%s not in dnode DB!!!", FUNC_5(VAR_0[VAR_3].ip));
    }
  }
}

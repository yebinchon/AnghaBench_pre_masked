
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numOfVnodes; int numOfFreeVnodes; int privateIp; TYPE_1__* vload; } ;
struct TYPE_4__ {scalar_t__ vgId; size_t status; size_t dropStatus; size_t syncStatus; } ;
typedef TYPE_1__ SVnodeLoad ;
typedef TYPE_2__ SDnodeObj ;


 int FUNC_0 (char*,int ,int,int,int,...) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2(SDnodeObj *VAR_3) {
  int VAR_4 = 0;

  for (int VAR_5 = 0; VAR_5 < VAR_3->numOfVnodes; ++VAR_5) {
    SVnodeLoad *VAR_6 = VAR_3->vload + VAR_5;
    if (VAR_6->vgId != 0) {
      FUNC_0("dnode:%s, calc free vnodes, exist vnode:%d, vgroup:%d, state:%d %s, dropstate:%d %s, syncstatus:%d %s",
             FUNC_1(VAR_3->privateIp), VAR_5, VAR_6->vgId,
             VAR_6->status, VAR_0[VAR_6->status],
             VAR_6->dropStatus, VAR_1[VAR_6->dropStatus],
             VAR_6->syncStatus, VAR_2[VAR_6->syncStatus]);
      VAR_4++;
    }
  }

  VAR_3->numOfFreeVnodes = VAR_3->numOfVnodes - VAR_4;
  FUNC_0("dnode:%s, calc free vnodes, numOfVnodes:%d, numOfFreeVnodes:%d, totalVnodes:%d",
          FUNC_1(VAR_3->privateIp), VAR_3->numOfVnodes, VAR_3->numOfFreeVnodes, VAR_4);
}

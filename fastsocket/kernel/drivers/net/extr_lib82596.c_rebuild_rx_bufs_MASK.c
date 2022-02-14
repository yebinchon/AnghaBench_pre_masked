
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i596_private {TYPE_2__* rbd_head; TYPE_2__* rfd_head; struct i596_dma* dma; } ;
struct TYPE_3__ {void* rfd; } ;
struct i596_dma {TYPE_2__* rbds; TYPE_2__* rfds; TYPE_1__ scb; } ;
struct TYPE_4__ {void* rbd; void* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct i596_dma*,int) ;
 void* VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 struct i596_private* FUNC_3 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct i596_private*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 struct i596_private *VAR_5 = FUNC_3(VAR_4);
 struct i596_dma *VAR_6 = VAR_5->dma;
 int VAR_7;



 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->rfds[VAR_7].rbd = VAR_2;
  VAR_6->rfds[VAR_7].cmd = FUNC_1(VAR_1);
 }
 VAR_6->rfds[VAR_3-1].cmd = FUNC_1(VAR_0|VAR_1);
 VAR_5->rfd_head = VAR_6->rfds;
 VAR_6->scb.rfd = FUNC_2(FUNC_4(VAR_5, VAR_6->rfds));
 VAR_5->rbd_head = VAR_6->rbds;
 VAR_6->rfds[0].rbd = FUNC_2(FUNC_4(VAR_5, VAR_6->rbds));

 FUNC_0(VAR_4, VAR_6, sizeof(struct i596_dma));
}

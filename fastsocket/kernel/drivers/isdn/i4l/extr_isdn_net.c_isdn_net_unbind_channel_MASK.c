
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int isdn_device; int isdn_channel; int flags; scalar_t__ dialstate; TYPE_1__* netdev; int master; int super_tx_queue; } ;
typedef TYPE_2__ isdn_net_local ;
struct TYPE_7__ {int ** st_netdev; int ** rx_netdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(isdn_net_local * VAR_3)
{
 FUNC_3(&VAR_3->super_tx_queue);

 if (!VAR_3->master) {




  FUNC_2(VAR_3->netdev->dev);
 }
 VAR_3->dialstate = 0;
 VAR_2->rx_netdev[FUNC_0(VAR_3->isdn_device, VAR_3->isdn_channel)] = ((void*)0);
 VAR_2->st_netdev[FUNC_0(VAR_3->isdn_device, VAR_3->isdn_channel)] = ((void*)0);
 if (VAR_3->isdn_device != -1 && VAR_3->isdn_channel != -1)
  FUNC_1(VAR_3->isdn_device, VAR_3->isdn_channel,
      VAR_1);
 VAR_3->flags &= ~VAR_0;
 VAR_3->isdn_device = -1;
 VAR_3->isdn_channel = -1;
}

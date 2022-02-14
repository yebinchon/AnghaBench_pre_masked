
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int netdev; int isdn_channel; int isdn_device; int flags; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_5__ {int * st_netdev; int * rx_netdev; int * chanmap; int * drvmap; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(isdn_net_local * VAR_2, int VAR_3)
{
 VAR_2->flags |= VAR_0;
 VAR_2->isdn_device = VAR_1->drvmap[VAR_3];
 VAR_2->isdn_channel = VAR_1->chanmap[VAR_3];
 VAR_1->rx_netdev[VAR_3] = VAR_2->netdev;
 VAR_1->st_netdev[VAR_3] = VAR_2->netdev;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gfar_private {int device_flags; int rxcoalescing; int txcoalescing; void* txic; TYPE_1__* regs; void* rxic; int * phydev; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; } ;
struct TYPE_2__ {int txic; int rxic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct gfar_private*,scalar_t__) ;
 int FUNC_1 (int *,void*) ;
 void* FUNC_2 (scalar_t__,int ) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, struct ethtool_coalesce *VAR_7)
{
 struct gfar_private *VAR_8 = FUNC_3(VAR_6);

 if (!(VAR_8->device_flags & VAR_3))
  return -VAR_2;


 if ((VAR_7->rx_coalesce_usecs == 0) ||
     (VAR_7->rx_max_coalesced_frames == 0))
  VAR_8->rxcoalescing = 0;
 else
  VAR_8->rxcoalescing = 1;

 if (((void*)0) == VAR_8->phydev)
  return -VAR_1;


 if (VAR_7->rx_coalesce_usecs > VAR_5) {
  FUNC_4("Coalescing is limited to %d microseconds\n",
    VAR_5);
  return -VAR_0;
 }

 if (VAR_7->rx_max_coalesced_frames > VAR_4) {
  FUNC_4("Coalescing is limited to %d frames\n",
    VAR_4);
  return -VAR_0;
 }

 VAR_8->rxic = FUNC_2(VAR_7->rx_max_coalesced_frames,
  FUNC_0(VAR_8, VAR_7->rx_coalesce_usecs));


 if ((VAR_7->tx_coalesce_usecs == 0) ||
     (VAR_7->tx_max_coalesced_frames == 0))
  VAR_8->txcoalescing = 0;
 else
  VAR_8->txcoalescing = 1;


 if (VAR_7->tx_coalesce_usecs > VAR_5) {
  FUNC_4("Coalescing is limited to %d microseconds\n",
    VAR_5);
  return -VAR_0;
 }

 if (VAR_7->tx_max_coalesced_frames > VAR_4) {
  FUNC_4("Coalescing is limited to %d frames\n",
    VAR_4);
  return -VAR_0;
 }

 VAR_8->txic = FUNC_2(VAR_7->tx_max_coalesced_frames,
  FUNC_0(VAR_8, VAR_7->tx_coalesce_usecs));

 FUNC_1(&VAR_8->regs->rxic, 0);
 if (VAR_8->rxcoalescing)
  FUNC_1(&VAR_8->regs->rxic, VAR_8->rxic);

 FUNC_1(&VAR_8->regs->txic, 0);
 if (VAR_8->txcoalescing)
  FUNC_1(&VAR_8->regs->txic, VAR_8->txic);

 return 0;
}

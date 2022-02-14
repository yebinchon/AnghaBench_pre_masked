
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct ixgbe_ring {TYPE_1__ stats; } ;
struct TYPE_5__ {scalar_t__* pxoffrxc; scalar_t__* pxonrxc; scalar_t__* pxofftxc; scalar_t__* pxontxc; } ;
struct ixgbe_adapter {TYPE_2__ stats; struct ixgbe_ring** rx_ring; struct ixgbe_ring** tx_ring; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_6__ {int type; int sizeof_stat; int stat_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct net_device*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
                                    struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_2(VAR_4);
 struct ixgbe_ring *VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11 = ((void*)0);

 FUNC_1(VAR_7);
 FUNC_0(VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  switch (VAR_3[VAR_9].type) {
  case 128:
   VAR_11 = (char *) VAR_4 +
     VAR_3[VAR_9].stat_offset;
   break;
  case 129:
   VAR_11 = (char *) VAR_7 +
     VAR_3[VAR_9].stat_offset;
   break;
  default:
   VAR_6[VAR_9] = 0;
   continue;
  }

  VAR_6[VAR_9] = (VAR_3[VAR_9].sizeof_stat ==
             sizeof(u64)) ? *(u64 *)VAR_11 : *(u32 *)VAR_11;
 }
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = VAR_7->tx_ring[VAR_10];
  if (!VAR_8) {
   VAR_6[VAR_9] = 0;
   VAR_6[VAR_9+1] = 0;
   VAR_9 += 2;
   continue;
  }

  do {
   VAR_6[VAR_9] = VAR_8->stats.packets;
   VAR_6[VAR_9+1] = VAR_8->stats.bytes;
  } while (0);
  VAR_9 += 2;
 }
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = VAR_7->rx_ring[VAR_10];
  if (!VAR_8) {
   VAR_6[VAR_9] = 0;
   VAR_6[VAR_9+1] = 0;
   VAR_9 += 2;
   continue;
  }

  do {
   VAR_6[VAR_9] = VAR_8->stats.packets;
   VAR_6[VAR_9+1] = VAR_8->stats.bytes;
  } while (0);
  VAR_9 += 2;
 }

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_6[VAR_9++] = VAR_7->stats.pxontxc[VAR_10];
  VAR_6[VAR_9++] = VAR_7->stats.pxofftxc[VAR_10];
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_6[VAR_9++] = VAR_7->stats.pxonrxc[VAR_10];
  VAR_6[VAR_9++] = VAR_7->stats.pxoffrxc[VAR_10];
 }
}

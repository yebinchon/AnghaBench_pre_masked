
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rx_ring_num; int tx_fifo_num; int max_txds; TYPE_2__* tx_cfg; TYPE_1__* rx_cfg; } ;
struct s2io_nic {scalar_t__ rxd_mode; TYPE_3__ config; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int rx_jumbo_pending; int tx_pending; scalar_t__ rx_mini_pending; int tx_max_pending; scalar_t__ rx_mini_max_pending; void* rx_jumbo_max_pending; void* rx_max_pending; } ;
struct TYPE_5__ {scalar_t__ fifo_len; } ;
struct TYPE_4__ {scalar_t__ num_rxd; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct s2io_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5,
        struct ethtool_ringparam *VAR_6)
{
 struct s2io_nic *VAR_7 = FUNC_1(VAR_5);
 int VAR_8, VAR_9 = 0, VAR_10 = 0;

 if (VAR_7->rxd_mode == VAR_4) {
  VAR_6->rx_max_pending = VAR_1;
  VAR_6->rx_jumbo_max_pending = VAR_1;
 } else {
  VAR_6->rx_max_pending = VAR_2;
  VAR_6->rx_jumbo_max_pending = VAR_2;
 }

 VAR_6->rx_mini_max_pending = 0;
 VAR_6->tx_max_pending = VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_7->config.rx_ring_num; VAR_8++)
  VAR_10 += VAR_7->config.rx_cfg[VAR_8].num_rxd;
 VAR_6->rx_pending = VAR_10;
 VAR_6->rx_jumbo_pending = VAR_10;
 VAR_6->rx_mini_pending = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7->config.tx_fifo_num; VAR_8++)
  VAR_9 += VAR_7->config.tx_cfg[VAR_8].fifo_len;
 VAR_6->tx_pending = VAR_9;
 FUNC_0(VAR_0, "max txds: %d\n", VAR_7->config.max_txds);
}

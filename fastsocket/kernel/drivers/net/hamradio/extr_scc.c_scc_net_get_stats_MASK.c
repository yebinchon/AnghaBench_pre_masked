
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {scalar_t__ tx_fifo_errors; scalar_t__ rx_fifo_errors; scalar_t__ tx_errors; scalar_t__ rx_errors; } ;
struct TYPE_2__ {scalar_t__ tx_under; scalar_t__ rx_over; scalar_t__ txerrs; scalar_t__ rxerrs; } ;
struct scc_channel {struct net_device_stats dev_stat; TYPE_1__ stat; } ;
struct net_device {scalar_t__ ml_priv; } ;



__attribute__((used)) static struct net_device_stats *FUNC_0(struct net_device *VAR_0)
{
 struct scc_channel *VAR_1 = (struct scc_channel *) VAR_0->ml_priv;

 VAR_1->dev_stat.rx_errors = VAR_1->stat.rxerrs + VAR_1->stat.rx_over;
 VAR_1->dev_stat.tx_errors = VAR_1->stat.txerrs + VAR_1->stat.tx_under;
 VAR_1->dev_stat.rx_fifo_errors = VAR_1->stat.rx_over;
 VAR_1->dev_stat.tx_fifo_errors = VAR_1->stat.tx_under;

 return &VAR_1->dev_stat;
}

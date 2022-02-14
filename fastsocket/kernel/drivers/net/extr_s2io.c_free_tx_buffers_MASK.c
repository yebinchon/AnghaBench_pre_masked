
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tx_fifo_config {int fifo_len; } ;
struct swStat {int mem_freed; } ;
struct stat_block {struct swStat sw_stat; } ;
struct sk_buff {scalar_t__ truesize; } ;
struct mac_info {struct fifo_info* fifos; struct stat_block* stats_info; } ;
struct config_param {int tx_fifo_num; struct tx_fifo_config* tx_cfg; } ;
struct s2io_nic {struct mac_info mac_control; struct config_param config; struct net_device* dev; } ;
struct net_device {int name; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct fifo_info {int tx_lock; TYPE_3__ tx_curr_put_info; TYPE_2__ tx_curr_get_info; TYPE_1__* list_info; } ;
struct TxD {int dummy; } ;
struct TYPE_4__ {scalar_t__ list_virt_addr; } ;


 int FUNC_0 (int ,char*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct fifo_info*,struct TxD*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct s2io_nic *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 struct sk_buff *VAR_3;
 struct TxD *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7 = 0;
 struct config_param *VAR_8 = &VAR_1->config;
 struct mac_info *VAR_9 = &VAR_1->mac_control;
 struct stat_block *VAR_10 = VAR_9->stats_info;
 struct swStat *VAR_11 = &VAR_10->sw_stat;

 for (VAR_5 = 0; VAR_5 < VAR_8->tx_fifo_num; VAR_5++) {
  struct tx_fifo_config *VAR_12 = &VAR_8->tx_cfg[VAR_5];
  struct fifo_info *VAR_13 = &VAR_9->fifos[VAR_5];
  unsigned long VAR_14;

  FUNC_3(&VAR_13->tx_lock, VAR_14);
  for (VAR_6 = 0; VAR_6 < VAR_12->fifo_len; VAR_6++) {
   VAR_4 = (struct TxD *)VAR_13->list_info[VAR_6].list_virt_addr;
   VAR_3 = FUNC_2(&VAR_9->fifos[VAR_5], VAR_4, VAR_6);
   if (VAR_3) {
    VAR_11->mem_freed += VAR_3->truesize;
    FUNC_1(VAR_3);
    VAR_7++;
   }
  }
  FUNC_0(VAR_0,
     "%s: forcibly freeing %d skbs on FIFO%d\n",
     VAR_2->name, VAR_7, VAR_5);
  VAR_13->tx_curr_get_info.offset = 0;
  VAR_13->tx_curr_put_info.offset = 0;
  FUNC_4(&VAR_13->tx_lock, VAR_14);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vxge_hw_fifo_txd {int control_0; } ;
struct __vxge_hw_fifo_txdl_priv {int frags; scalar_t__ dma_addr; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {TYPE_2__* stats; int no_snoop_bits; struct __vxge_hw_channel channel; } ;
struct TYPE_3__ {scalar_t__ usage_cnt; scalar_t__ usage_max; } ;
struct TYPE_4__ {TYPE_1__ common_stats; int total_posts; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct __vxge_hw_fifo_txdl_priv* FUNC_1 (struct __vxge_hw_fifo*,void*) ;
 int FUNC_2 (struct __vxge_hw_fifo*,int ,int,int ) ;
 int FUNC_3 (struct __vxge_hw_channel*,void*) ;

void FUNC_4(struct __vxge_hw_fifo *VAR_2, void *VAR_3)
{
 struct __vxge_hw_fifo_txdl_priv *VAR_4;
 struct vxge_hw_fifo_txd *VAR_5;
 struct vxge_hw_fifo_txd *VAR_6;
 struct __vxge_hw_channel *VAR_7;

 VAR_7 = &VAR_2->channel;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 VAR_6 = (struct vxge_hw_fifo_txd *)VAR_3;

 VAR_5 = (struct vxge_hw_fifo_txd *)VAR_3 + (VAR_4->frags - 1);
 VAR_5->control_0 |=
       FUNC_0(VAR_0);
 VAR_6->control_0 |= VAR_1;

 FUNC_3(&VAR_2->channel, VAR_3);

 FUNC_2(VAR_2,
  (u64)VAR_4->dma_addr,
  VAR_4->frags - 1,
  VAR_2->no_snoop_bits);

 VAR_2->stats->total_posts++;
 VAR_2->stats->common_stats.usage_cnt++;
 if (VAR_2->stats->common_stats.usage_max <
  VAR_2->stats->common_stats.usage_cnt)
  VAR_2->stats->common_stats.usage_max =
   VAR_2->stats->common_stats.usage_cnt;
}

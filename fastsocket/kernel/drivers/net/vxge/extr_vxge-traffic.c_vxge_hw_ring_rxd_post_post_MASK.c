
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxge_hw_ring_rxd_1 {int control_0; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_ring {TYPE_2__* stats; struct __vxge_hw_channel channel; } ;
struct TYPE_3__ {scalar_t__ usage_cnt; } ;
struct TYPE_4__ {TYPE_1__ common_stats; } ;


 int VAR_0 ;

void FUNC_0(struct __vxge_hw_ring *VAR_1, void *VAR_2)
{
 struct vxge_hw_ring_rxd_1 *VAR_3 = (struct vxge_hw_ring_rxd_1 *)VAR_2;
 struct __vxge_hw_channel *VAR_4;

 VAR_4 = &VAR_1->channel;

 VAR_3->control_0 = VAR_0;

 if (VAR_1->stats->common_stats.usage_cnt > 0)
  VAR_1->stats->common_stats.usage_cnt--;
}

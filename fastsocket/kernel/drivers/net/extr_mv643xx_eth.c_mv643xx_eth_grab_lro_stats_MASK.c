
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {scalar_t__ no_desc; scalar_t__ flushed; scalar_t__ aggregated; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct rx_queue {TYPE_2__ lro_mgr; } ;
struct TYPE_6__ {void* lro_no_desc; void* lro_flushed; void* lro_aggregated; } ;
struct mv643xx_eth_private {int rxq_count; TYPE_3__ lro_counters; struct rx_queue* rxq; } ;



__attribute__((used)) static void FUNC_0(struct mv643xx_eth_private *VAR_0)
{
 u32 VAR_1 = 0;
 u32 VAR_2 = 0;
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->rxq_count; VAR_4++) {
  struct rx_queue *VAR_5 = VAR_0->rxq + VAR_4;

  VAR_1 += VAR_5->lro_mgr.stats.aggregated;
  VAR_2 += VAR_5->lro_mgr.stats.flushed;
  VAR_3 += VAR_5->lro_mgr.stats.no_desc;
 }

 VAR_0->lro_counters.lro_aggregated = VAR_1;
 VAR_0->lro_counters.lro_flushed = VAR_2;
 VAR_0->lro_counters.lro_no_desc = VAR_3;
}

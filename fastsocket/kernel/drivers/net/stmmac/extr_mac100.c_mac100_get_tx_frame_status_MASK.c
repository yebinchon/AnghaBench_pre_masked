
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_extra_stats {int tx_deferred; int tx_heartbeat; int tx_losscarrier; int tx_carrier; int tx_underflow; } ;
struct net_device_stats {int tx_heartbeat_errors; int collisions; int tx_carrier_errors; int tx_fifo_errors; } ;
struct TYPE_3__ {int error_summary; int underflow_error; int no_carrier; int loss_carrier; int heartbeat_fail; int deferred; scalar_t__ collision_count; scalar_t__ late_collision; scalar_t__ excessive_collisions; scalar_t__ excessive_deferral; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct dma_desc {TYPE_2__ des01; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct stmmac_extra_stats *VAR_1,
          struct dma_desc *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;
 struct net_device_stats *VAR_5 = (struct net_device_stats *)VAR_0;

 if (FUNC_0(VAR_2->des01.tx.error_summary)) {
  if (FUNC_0(VAR_2->des01.tx.underflow_error)) {
   VAR_1->tx_underflow++;
   VAR_5->tx_fifo_errors++;
  }
  if (FUNC_0(VAR_2->des01.tx.no_carrier)) {
   VAR_1->tx_carrier++;
   VAR_5->tx_carrier_errors++;
  }
  if (FUNC_0(VAR_2->des01.tx.loss_carrier)) {
   VAR_1->tx_losscarrier++;
   VAR_5->tx_carrier_errors++;
  }
  if (FUNC_0((VAR_2->des01.tx.excessive_deferral) ||
        (VAR_2->des01.tx.excessive_collisions) ||
        (VAR_2->des01.tx.late_collision)))
   VAR_5->collisions += VAR_2->des01.tx.collision_count;
  VAR_4 = -1;
 }
 if (FUNC_0(VAR_2->des01.tx.heartbeat_fail)) {
  VAR_1->tx_heartbeat++;
  VAR_5->tx_heartbeat_errors++;
  VAR_4 = -1;
 }
 if (FUNC_0(VAR_2->des01.tx.deferred))
  VAR_1->tx_deferred++;

 return VAR_4;
}

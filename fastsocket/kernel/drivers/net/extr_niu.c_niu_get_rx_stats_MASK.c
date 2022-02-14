
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_ring_info {scalar_t__ rx_errors; scalar_t__ rx_dropped; scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;
struct niu {int num_rx_rings; TYPE_2__* dev; int rx_rings; } ;
struct TYPE_3__ {unsigned long rx_packets; unsigned long rx_bytes; unsigned long rx_dropped; unsigned long rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 struct rx_ring_info* FUNC_0 (int ) ;
 int FUNC_1 (struct niu*,struct rx_ring_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_0)
{
 unsigned long VAR_1, VAR_2, VAR_3, VAR_4;
 struct rx_ring_info *VAR_5;
 int VAR_6;

 VAR_1 = VAR_2 = VAR_3 = VAR_4 = 0;

 VAR_5 = FUNC_0(VAR_0->rx_rings);
 if (!VAR_5)
  goto no_rings;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_rx_rings; VAR_6++) {
  struct rx_ring_info *VAR_7 = &VAR_5[VAR_6];

  FUNC_1(VAR_0, VAR_7, 0);

  VAR_1 += VAR_7->rx_packets;
  VAR_4 += VAR_7->rx_bytes;
  VAR_2 += VAR_7->rx_dropped;
  VAR_3 += VAR_7->rx_errors;
 }

no_rings:
 VAR_0->dev->stats.rx_packets = VAR_1;
 VAR_0->dev->stats.rx_bytes = VAR_4;
 VAR_0->dev->stats.rx_dropped = VAR_2;
 VAR_0->dev->stats.rx_errors = VAR_3;
}

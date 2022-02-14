
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_ring_info {scalar_t__ tx_errors; scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct niu {int num_tx_rings; TYPE_2__* dev; int tx_rings; } ;
struct TYPE_3__ {unsigned long tx_packets; unsigned long tx_bytes; unsigned long tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 struct tx_ring_info* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_0)
{
 unsigned long VAR_1, VAR_2, VAR_3;
 struct tx_ring_info *VAR_4;
 int VAR_5;

 VAR_1 = VAR_2 = VAR_3 = 0;

 VAR_4 = FUNC_0(VAR_0->tx_rings);
 if (!VAR_4)
  goto no_rings;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_tx_rings; VAR_5++) {
  struct tx_ring_info *VAR_6 = &VAR_4[VAR_5];

  VAR_1 += VAR_6->tx_packets;
  VAR_3 += VAR_6->tx_bytes;
  VAR_2 += VAR_6->tx_errors;
 }

no_rings:
 VAR_0->dev->stats.tx_packets = VAR_1;
 VAR_0->dev->stats.tx_bytes = VAR_3;
 VAR_0->dev->stats.tx_errors = VAR_2;
}

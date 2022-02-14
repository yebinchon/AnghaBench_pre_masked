
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ctrl_queue {int index; scalar_t__ buf; } ;
struct catc {char* stats_buf; int* stats_vals; TYPE_2__* netdev; } ;
struct TYPE_3__ {int rx_errors; int rx_frame_errors; int tx_errors; int tx_aborted_errors; int collisions; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;





__attribute__((used)) static void FUNC_0(struct catc *VAR_1, struct ctrl_queue *VAR_2)
{
 int VAR_3 = VAR_2->index - VAR_0;
 u16 VAR_4, VAR_5;

 VAR_1->stats_buf[VAR_3] = *((char *)VAR_2->buf);

 if (VAR_3 & 1)
  return;

 VAR_4 = ((u16)VAR_1->stats_buf[VAR_3] << 8) | VAR_1->stats_buf[VAR_3 + 1];
 VAR_5 = VAR_1->stats_vals[VAR_3 >> 1];

 switch (VAR_3) {
  case 128:
  case 129:
   VAR_1->netdev->stats.collisions += VAR_4 - VAR_5;
   break;
  case 130:
   VAR_1->netdev->stats.tx_aborted_errors += VAR_4 - VAR_5;
   VAR_1->netdev->stats.tx_errors += VAR_4 - VAR_5;
   break;
  case 131:
   VAR_1->netdev->stats.rx_frame_errors += VAR_4 - VAR_5;
   VAR_1->netdev->stats.rx_errors += VAR_4 - VAR_5;
   break;
 }

 VAR_1->stats_vals[VAR_3 >> 1] = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_carrier_errors; int tx_heartbeat_errors; int collisions; int tx_window_errors; int rx_fifo_errors; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, struct net_device *VAR_1)
{


 FUNC_0(6);
 VAR_1->stats.tx_carrier_errors += FUNC_1(VAR_0 + 0);
 VAR_1->stats.tx_heartbeat_errors += FUNC_1(VAR_0 + 1);
                            FUNC_1(VAR_0 + 2);
 VAR_1->stats.collisions += FUNC_1(VAR_0 + 3);
 VAR_1->stats.tx_window_errors += FUNC_1(VAR_0 + 4);
 VAR_1->stats.rx_fifo_errors += FUNC_1(VAR_0 + 5);
 VAR_1->stats.tx_packets += FUNC_1(VAR_0 + 6);
 VAR_1->stats.tx_packets += (FUNC_1(VAR_0 + 9) & 0x30) << 4;
                         FUNC_1(VAR_0 + 7);

                    FUNC_1(VAR_0 + 8);



 FUNC_2(VAR_0 + 10);
 FUNC_2(VAR_0 + 12);

 FUNC_0(4);
 FUNC_1(VAR_0 + 12);


 FUNC_0(7);
 return;
}

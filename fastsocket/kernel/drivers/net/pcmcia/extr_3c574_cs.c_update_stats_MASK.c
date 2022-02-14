
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_carrier_errors; int tx_heartbeat_errors; int collisions; int tx_window_errors; int rx_fifo_errors; int tx_packets; int tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 unsigned int VAR_2 = VAR_1->base_addr;
 u8 VAR_3, VAR_4, VAR_5;

 FUNC_0(2, "%s: updating the statistics.\n", VAR_1->name);

 if (FUNC_3(VAR_2+VAR_0) == 0xffff)
  return;



 FUNC_1(6);
 VAR_1->stats.tx_carrier_errors += FUNC_2(VAR_2 + 0);
 VAR_1->stats.tx_heartbeat_errors += FUNC_2(VAR_2 + 1);
                                FUNC_2(VAR_2 + 2);
 VAR_1->stats.collisions += FUNC_2(VAR_2 + 3);
 VAR_1->stats.tx_window_errors += FUNC_2(VAR_2 + 4);
 VAR_1->stats.rx_fifo_errors += FUNC_2(VAR_2 + 5);
 VAR_1->stats.tx_packets += FUNC_2(VAR_2 + 6);
 VAR_5 = FUNC_2(VAR_2 + 9);
 VAR_1->stats.tx_packets += (VAR_5&0x30) << 4;
                         FUNC_2(VAR_2 + 7);
                         FUNC_2(VAR_2 + 8);
 VAR_3 = FUNC_3(VAR_2 + 10);
 VAR_4 = FUNC_3(VAR_2 + 12);

 FUNC_1(4);
                    FUNC_2(VAR_2 + 12);
 VAR_5 = FUNC_2(VAR_2 + 13);

 VAR_1->stats.tx_bytes += VAR_4 + ((VAR_5 & 0xf0) << 12);

 FUNC_1(1);
}

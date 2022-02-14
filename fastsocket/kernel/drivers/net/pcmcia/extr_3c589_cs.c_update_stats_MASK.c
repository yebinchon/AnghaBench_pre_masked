
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; int rx_fifo_errors; int tx_window_errors; int collisions; int tx_heartbeat_errors; int tx_carrier_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
    unsigned int VAR_4 = VAR_3->base_addr;

    FUNC_0(2, "%s: updating the statistics.\n", VAR_3->name);

    FUNC_4(VAR_1, VAR_4 + VAR_0);

    FUNC_1(6);
    VAR_3->stats.tx_carrier_errors += FUNC_2(VAR_4 + 0);
    VAR_3->stats.tx_heartbeat_errors += FUNC_2(VAR_4 + 1);
                                   FUNC_2(VAR_4 + 2);
    VAR_3->stats.collisions += FUNC_2(VAR_4 + 3);
    VAR_3->stats.tx_window_errors += FUNC_2(VAR_4 + 4);
    VAR_3->stats.rx_fifo_errors += FUNC_2(VAR_4 + 5);
    VAR_3->stats.tx_packets += FUNC_2(VAR_4 + 6);
                         FUNC_2(VAR_4 + 7);
                         FUNC_2(VAR_4 + 8);
                      FUNC_3(VAR_4 + 10);
                      FUNC_3(VAR_4 + 12);


    FUNC_1(1);
    FUNC_4(VAR_2, VAR_4 + VAR_0);
}

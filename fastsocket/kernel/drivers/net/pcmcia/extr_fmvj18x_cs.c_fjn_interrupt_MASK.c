
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short tx_packets; } ;
struct net_device {unsigned int base_addr; unsigned short name; int trans_start; TYPE_1__ stats; } ;
struct TYPE_5__ {unsigned short sent; int tx_queue; int * base; scalar_t__ tx_started; scalar_t__ tx_queue_len; } ;
typedef TYPE_2__ local_info_t ;
typedef int irqreturn_t ;


 int FUNC_0 (int,char*,unsigned short,...) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct net_device*) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int VAR_12 ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (unsigned short,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_13, void *VAR_14)
{
    struct net_device *VAR_15 = VAR_14;
    local_info_t *VAR_16 = FUNC_3(VAR_15);
    unsigned int VAR_17;
    unsigned short VAR_18, VAR_19;

    VAR_17 = VAR_15->base_addr;


    FUNC_6(0x0000, VAR_17 + VAR_9);


    FUNC_7(1);


    VAR_18 = FUNC_2(VAR_17 + VAR_11);
    VAR_19 = FUNC_2(VAR_17 + VAR_8);


    FUNC_5(VAR_18, VAR_17 + VAR_11);
    FUNC_5(VAR_19, VAR_17 + VAR_8);

    FUNC_0(4, "%s: interrupt, rx_status %02x.\n", VAR_15->name, VAR_19);
    FUNC_0(4, "               tx_status %02x.\n", VAR_18);

    if (VAR_19 || (FUNC_2(VAR_17 + VAR_7) & VAR_3) == 0) {

 FUNC_1(VAR_15);
    }
    if (VAR_18 & VAR_4) {
 VAR_15->stats.tx_packets += VAR_16->sent ;
        VAR_16->sent = 0 ;
 if (VAR_16->tx_queue) {
     FUNC_5(VAR_0 | VAR_16->tx_queue, VAR_17 + VAR_10);
     VAR_16->sent = VAR_16->tx_queue ;
     VAR_16->tx_queue = 0;
     VAR_16->tx_queue_len = 0;
     VAR_15->trans_start = VAR_12;
 } else {
     VAR_16->tx_started = 0;
 }
 FUNC_4(VAR_15);
    }
    FUNC_0(4, "%s: exiting interrupt,\n", VAR_15->name);
    FUNC_0(4, "    tx_status %02x, rx_status %02x.\n", VAR_18, VAR_19);

    FUNC_5(VAR_2, VAR_17 + VAR_9);
    FUNC_5(VAR_1, VAR_17 + VAR_6);

    if (VAR_16->base != ((void*)0)) {

 FUNC_8(0x01, VAR_16->base+0x802);
 FUNC_8(0x09, VAR_16->base+0x822);
    }

    return VAR_5;

}

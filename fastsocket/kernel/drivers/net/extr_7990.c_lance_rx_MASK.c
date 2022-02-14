
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_frame_errors; int rx_over_errors; int rx_crc_errors; int rx_fifo_errors; } ;
struct net_device {char* name; TYPE_1__ stats; } ;
struct lance_rx_desc {int rmd1_bits; int mblength; } ;
struct lance_private {int rx_new; int rx_ring_mod_mask; struct lance_init_block* init_block; } ;
struct lance_init_block {int ** rx_buf; struct lance_rx_desc* brx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct lance_private*,int) ;
 int FUNC_1 (int,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 struct lance_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10 (struct net_device *VAR_11)
{
        struct lance_private *VAR_12 = FUNC_4(VAR_11);
        volatile struct lance_init_block *VAR_13 = VAR_12->init_block;
        volatile struct lance_rx_desc *VAR_14;
        unsigned char VAR_15;
        FUNC_0(VAR_12, VAR_1 | VAR_0);
        for (VAR_14 = &VAR_13->brx_ring [VAR_12->rx_new];
             !((VAR_15 = VAR_14->rmd1_bits) & VAR_8);
             VAR_14 = &VAR_13->brx_ring [VAR_12->rx_new]) {


                if ((VAR_15 & VAR_9) != VAR_9) {
                        VAR_11->stats.rx_over_errors++;
                        VAR_11->stats.rx_errors++;
                        continue;
                } else if (VAR_15 & VAR_5) {



                        if (VAR_15 & VAR_2) VAR_11->stats.rx_fifo_errors++;
                        if (VAR_15 & VAR_3) VAR_11->stats.rx_crc_errors++;
                        if (VAR_15 & VAR_7) VAR_11->stats.rx_over_errors++;
                        if (VAR_15 & VAR_6) VAR_11->stats.rx_frame_errors++;
                        if (VAR_15 & VAR_4) VAR_11->stats.rx_errors++;
                } else {
   int VAR_16 = (VAR_14->mblength & 0xfff) - 4;
   struct sk_buff *VAR_17 = FUNC_2 (VAR_16+2);

                        if (!VAR_17) {
                                FUNC_6 ("%s: Memory squeeze, deferring packet.\n",
                                        VAR_11->name);
                                VAR_11->stats.rx_dropped++;
                                VAR_14->mblength = 0;
                                VAR_14->rmd1_bits = VAR_8;
                                VAR_12->rx_new = (VAR_12->rx_new + 1) & VAR_12->rx_ring_mod_mask;
                                return 0;
                        }

                        FUNC_9 (VAR_17, 2);
                        FUNC_8 (VAR_17, VAR_16);
                        FUNC_7(VAR_17,
                                         (unsigned char *)&(VAR_13->rx_buf [VAR_12->rx_new][0]),
                                         VAR_16);
                        VAR_17->protocol = FUNC_3 (VAR_17, VAR_11);
   FUNC_5 (VAR_17);
   VAR_11->stats.rx_packets++;
   VAR_11->stats.rx_bytes += VAR_16;
                }


                VAR_14->mblength = 0;
                VAR_14->rmd1_bits = VAR_8;
                VAR_12->rx_new = (VAR_12->rx_new + 1) & VAR_12->rx_ring_mod_mask;
        }
        return 0;
}

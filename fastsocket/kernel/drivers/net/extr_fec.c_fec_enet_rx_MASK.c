
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ushort ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_dropped; int rx_packets; int rx_frame_errors; int rx_errors; int rx_fifo_errors; int rx_crc_errors; int rx_length_errors; } ;
struct net_device {TYPE_1__ stats; int name; } ;
struct fec_enet_private {int hw_lock; struct bufdesc* cur_rx; scalar_t__ hwp; struct bufdesc* rx_bd_base; int opened; } ;
struct bufdesc {unsigned short cbd_sc; int cbd_datlen; int cbd_bufaddr; } ;
typedef int __u8 ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 () ;
 struct fec_enet_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct sk_buff*,int *,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_16(struct net_device *VAR_13)
{
 struct fec_enet_private *VAR_14 = FUNC_6(VAR_13);
 struct bufdesc *VAR_15;
 unsigned short VAR_16;
 struct sk_buff *VAR_17;
 ushort VAR_18;
 __u8 *VAR_19;





 FUNC_12(&VAR_14->hw_lock);




 VAR_15 = VAR_14->cur_rx;

 while (!((VAR_16 = VAR_15->cbd_sc) & VAR_2)) {




  if ((VAR_16 & VAR_3) == 0)
   FUNC_8("FEC ENET: rcv is not +last\n");

  if (!VAR_14->opened)
   goto rx_processing_done;


  if (VAR_16 & (VAR_4 | VAR_7 | VAR_5 |
      VAR_1 | VAR_6)) {
   VAR_13->stats.rx_errors++;
   if (VAR_16 & (VAR_4 | VAR_7)) {

    VAR_13->stats.rx_length_errors++;
   }
   if (VAR_16 & VAR_5)
    VAR_13->stats.rx_frame_errors++;
   if (VAR_16 & VAR_1)
    VAR_13->stats.rx_crc_errors++;
   if (VAR_16 & VAR_6)
    VAR_13->stats.rx_fifo_errors++;
  }





  if (VAR_16 & VAR_0) {
   VAR_13->stats.rx_errors++;
   VAR_13->stats.rx_frame_errors++;
   goto rx_processing_done;
  }


  VAR_13->stats.rx_packets++;
  VAR_18 = VAR_15->cbd_datlen;
  VAR_13->stats.rx_bytes += VAR_18;
  VAR_19 = (__u8*)FUNC_0(VAR_15->cbd_bufaddr);

         FUNC_3(((void*)0), VAR_15->cbd_bufaddr, VAR_15->cbd_datlen,
           VAR_10);






  VAR_17 = FUNC_1(VAR_18 - 4 + VAR_12);

  if (FUNC_14(!VAR_17)) {
   FUNC_8("%s: Memory squeeze, dropping packet.\n",
     VAR_13->name);
   VAR_13->stats.rx_dropped++;
  } else {
   FUNC_11(VAR_17, VAR_12);
   FUNC_10(VAR_17, VAR_18 - 4);
   FUNC_9(VAR_17, VAR_19, VAR_18 - 4);
   VAR_17->protocol = FUNC_4(VAR_17, VAR_13);
   FUNC_7(VAR_17);
  }

         VAR_15->cbd_bufaddr = FUNC_2(((void*)0), VAR_19, VAR_15->cbd_datlen,
   VAR_10);
rx_processing_done:

  VAR_16 &= ~VAR_8;


  VAR_16 |= VAR_2;
  VAR_15->cbd_sc = VAR_16;


  if (VAR_16 & VAR_9)
   VAR_15 = VAR_14->rx_bd_base;
  else
   VAR_15++;




  FUNC_15(0, VAR_14->hwp + VAR_11);
 }
 VAR_14->cur_rx = VAR_15;

 FUNC_13(&VAR_14->hw_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; } ;
struct rtl8169_private {unsigned int cur_rx; unsigned int dirty_rx; int opts1_mask; scalar_t__ mac_version; int napi; int * Rx_databuff; struct RxDesc* RxDescArray; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_length_errors; int rx_fifo_errors; int rx_crc_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct RxDesc {int opts2; int addr; int opts1; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct rtl8169_private*,int ,struct net_device*,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct RxDesc*,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct rtl8169_private*,struct RxDesc*,struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,struct rtl8169_private*,int,int ) ;
 int FUNC_13 (struct rtl8169_private*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_11, struct rtl8169_private *VAR_12, u32 VAR_13)
{
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16;

 VAR_14 = VAR_12->cur_rx;
 VAR_15 = VAR_1 + VAR_12->dirty_rx - VAR_14;
 VAR_15 = FUNC_4(VAR_15, VAR_13);

 for (; VAR_15 > 0; VAR_15--, VAR_14++) {
  unsigned int VAR_17 = VAR_14 % VAR_1;
  struct RxDesc *VAR_18 = VAR_12->RxDescArray + VAR_17;
  u32 VAR_19;

  FUNC_7();
  VAR_19 = FUNC_2(VAR_18->opts1) & VAR_12->opts1_mask;

  if (VAR_19 & VAR_0)
   break;
  if (FUNC_15(VAR_19 & VAR_6)) {
   FUNC_6(VAR_12, VAR_10, VAR_11, "Rx ERROR. status = %08x\n",
       VAR_19);
   VAR_11->stats.rx_errors++;
   if (VAR_19 & (VAR_8 | VAR_7))
    VAR_11->stats.rx_length_errors++;
   if (VAR_19 & VAR_4)
    VAR_11->stats.rx_crc_errors++;
   if (VAR_19 & VAR_5) {
    FUNC_13(VAR_12, VAR_2);
    VAR_11->stats.rx_fifo_errors++;
   }
   FUNC_9(VAR_18, VAR_9);
  } else {
   struct sk_buff *VAR_20;
   dma_addr_t VAR_21 = FUNC_3(VAR_18->addr);
   int VAR_22 = (VAR_19 & 0x00003fff) - 4;






   if (FUNC_15(FUNC_8(VAR_19))) {
    VAR_11->stats.rx_dropped++;
    VAR_11->stats.rx_length_errors++;
    FUNC_9(VAR_18, VAR_9);
    continue;
   }

   VAR_20 = FUNC_12(VAR_12->Rx_databuff[VAR_17],
        VAR_12, VAR_22, VAR_21);
   FUNC_9(VAR_18, VAR_9);
   if (!VAR_20) {
    VAR_11->stats.rx_dropped++;
    continue;
   }

   FUNC_10(VAR_20, VAR_19);
   FUNC_14(VAR_20, VAR_22);
   VAR_20->protocol = FUNC_1(VAR_20, VAR_11);

   if (FUNC_11(VAR_12, VAR_18, VAR_20) < 0)
    FUNC_5(&VAR_12->napi, VAR_20);

   VAR_11->stats.rx_bytes += VAR_22;
   VAR_11->stats.rx_packets++;
  }


  if ((VAR_18->opts2 & FUNC_0(0xfffe000)) &&
      (VAR_12->mac_version == VAR_3)) {
   VAR_18->opts2 = 0;
   VAR_14++;
  }
 }

 VAR_16 = VAR_14 - VAR_12->cur_rx;
 VAR_12->cur_rx = VAR_14;

 VAR_12->dirty_rx += VAR_16;

 return VAR_16;
}

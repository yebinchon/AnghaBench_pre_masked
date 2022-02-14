
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_rx_hdr {int RSSI; int LQI; int srcaddr; } ;
struct untd_hdr_rst {int dummy; } ;
struct untd_hdr_cmp {int dummy; } ;
struct untd_hdr_1st {int fragment_len; } ;
struct untd_hdr {int len; } ;
struct sk_buff {int ip_summed; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct i1480u_rx_buf {struct sk_buff* data; TYPE_1__* urb; struct i1480u* i1480u; } ;
struct i1480u {size_t rx_untd_pkt_size; struct sk_buff* rx_skb; int rssi_stats; int lqe_stats; int rx_srcaddr; TYPE_2__* usb_iface; struct net_device* net_dev; } ;
struct device {int dummy; } ;
typedef int s8 ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int actual_length; void* transfer_buffer; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,struct i1480u*,void*,int) ;
 int FUNC_4 (struct device*,void*,int) ;
 int VAR_1 ;




 int FUNC_5 (struct i1480u*,char*,...) ;
 int FUNC_6 (struct i1480u*,char*) ;
 int FUNC_7 (struct i1480u*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ,void*,size_t) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct sk_buff*,size_t) ;
 int FUNC_12 (struct sk_buff*,size_t) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct untd_hdr*) ;
 int FUNC_17 (struct untd_hdr*) ;

__attribute__((used)) static
void FUNC_18(struct i1480u_rx_buf *VAR_2)
{
 unsigned VAR_3 = 0;
 size_t VAR_4, VAR_5;
 size_t VAR_6;
 struct wlp_rx_hdr *VAR_7 = ((void*)0);

 struct i1480u *VAR_8 = VAR_2->i1480u;
 struct sk_buff *VAR_9 = VAR_2->data;
 int VAR_10 = VAR_2->urb->actual_length;
 void *VAR_11 = VAR_2->urb->transfer_buffer;
 struct untd_hdr *VAR_12;

 struct net_device *VAR_13 = VAR_8->net_dev;
 struct device *VAR_14 = &VAR_8->usb_iface->dev;
 struct sk_buff *VAR_15;







 VAR_6 = sizeof(struct wlp_rx_hdr);

 while (VAR_10 > 0) {
  if (VAR_3) {
   FUNC_5(VAR_8, "RX: fragment follows completed"
      "packet in same buffer. Dropping\n");
   break;
  }
  VAR_12 = VAR_11;
  if (VAR_10 < sizeof(*VAR_12)) {
   FUNC_5(VAR_8, "RX: short UNTD header! Dropping\n");
   goto out;
  }
  if (FUNC_15(FUNC_16(VAR_12) == 0)) {
   FUNC_5(VAR_8, "RX: TX bit set! Dropping\n");
   goto out;
  }
  switch (FUNC_17(VAR_12)) {
  case 131: {
   struct untd_hdr_1st *VAR_16 = (void *) VAR_12;
   FUNC_1(VAR_14, "1st fragment\n");
   VAR_4 = sizeof(struct untd_hdr_1st);
   if (VAR_8->rx_skb != ((void*)0))
    FUNC_6(VAR_8, "RX: 1st fragment out of "
     "sequence! Fixing\n");
   if (VAR_10 < VAR_4 + VAR_6) {
    FUNC_5(VAR_8, "RX: short 1st fragment! "
     "Dropping\n");
    goto out;
   }
   VAR_8->rx_untd_pkt_size = FUNC_8(VAR_12->len)
       - VAR_6;
   VAR_5 = FUNC_8(VAR_16->fragment_len);
   if (VAR_10 < VAR_4 + VAR_5) {
    FUNC_5(VAR_8,
         "RX: short payload! Dropping\n");
    goto out;
   }
   VAR_8->rx_skb = VAR_9;
   VAR_7 = (void *) VAR_16 + VAR_4;
   VAR_8->rx_srcaddr = VAR_7->srcaddr;
   FUNC_12(VAR_8->rx_skb, VAR_4 + VAR_5);
   FUNC_11(VAR_8->rx_skb, VAR_4 + VAR_6);
   FUNC_14(&VAR_8->lqe_stats, (s8) VAR_7->LQI - 7);
   FUNC_14(&VAR_8->rssi_stats, VAR_7->RSSI + 18);
   VAR_2->data = ((void*)0);
   break;
  }
  case 128: {
   FUNC_1(VAR_14, "nxt fragment\n");
   VAR_4 = sizeof(struct untd_hdr_rst);
   if (VAR_8->rx_skb == ((void*)0)) {
    FUNC_5(VAR_8, "RX: next fragment out of "
         "sequence! Dropping\n");
    goto out;
   }
   if (VAR_10 < VAR_4) {
    FUNC_5(VAR_8, "RX: short NXT fragment! "
         "Dropping\n");
    goto out;
   }
   VAR_5 = FUNC_8(VAR_12->len);
   if (VAR_10 < VAR_4 + VAR_5) {
    FUNC_5(VAR_8,
         "RX: short payload! Dropping\n");
    goto out;
   }
   FUNC_9(FUNC_12(VAR_8->rx_skb, VAR_5),
     VAR_11 + VAR_4, VAR_5);
   break;
  }
  case 129: {
   FUNC_1(VAR_14, "Lst fragment\n");
   VAR_4 = sizeof(struct untd_hdr_rst);
   if (VAR_8->rx_skb == ((void*)0)) {
    FUNC_5(VAR_8, "RX: last fragment out of "
         "sequence! Dropping\n");
    goto out;
   }
   if (VAR_10 < VAR_4) {
    FUNC_5(VAR_8, "RX: short LST fragment! "
         "Dropping\n");
    goto out;
   }
   VAR_5 = FUNC_8(VAR_12->len);
   if (VAR_10 < VAR_5 + VAR_4) {
    FUNC_5(VAR_8,
         "RX: short payload! Dropping\n");
    goto out;
   }
   FUNC_9(FUNC_12(VAR_8->rx_skb, VAR_5),
     VAR_11 + VAR_4, VAR_5);
   VAR_3 = 1;
   break;
  }
  case 130: {
   FUNC_1(VAR_14, "cmp fragment\n");
   VAR_4 = sizeof(struct untd_hdr_cmp);
   if (VAR_8->rx_skb != ((void*)0))
    FUNC_6(VAR_8, "RX: fix out-of-sequence CMP"
        " fragment!\n");
   if (VAR_10 < VAR_4 + VAR_6) {
    FUNC_5(VAR_8, "RX: short CMP fragment! "
         "Dropping\n");
    goto out;
   }
   VAR_8->rx_untd_pkt_size = FUNC_8(VAR_12->len);
   VAR_5 = VAR_8->rx_untd_pkt_size;
   if (VAR_10 < VAR_8->rx_untd_pkt_size + VAR_4) {
    FUNC_5(VAR_8,
         "RX: short payload! Dropping\n");
    goto out;
   }
   VAR_8->rx_skb = VAR_9;
   VAR_7 = (void *) VAR_12 + VAR_4;
   VAR_8->rx_srcaddr = VAR_7->srcaddr;
   FUNC_14(&VAR_8->lqe_stats, (s8) VAR_7->LQI - 7);
   FUNC_14(&VAR_8->rssi_stats, VAR_7->RSSI + 18);
   FUNC_12(VAR_8->rx_skb, VAR_4 + VAR_8->rx_untd_pkt_size);
   FUNC_11(VAR_8->rx_skb, VAR_4 + VAR_6);
   VAR_2->data = ((void*)0);
   VAR_3 = 1;
   VAR_8->rx_untd_pkt_size -= VAR_6;
   break;
  }
  default:
   FUNC_5(VAR_8, "RX: unknown packet type %u! "
        "Dropping\n", FUNC_17(VAR_12));
   goto out;
  }
  VAR_10 -= VAR_4 + VAR_5;
  if (VAR_10 > 0)
   VAR_11 += VAR_4 + VAR_5;
 }
 if (VAR_3)
  FUNC_7(VAR_8);
out:

 if (VAR_2->data == ((void*)0)) {

  VAR_15 = FUNC_0(VAR_1);
  if (!VAR_15) {
   if (FUNC_10())
    FUNC_2(VAR_14,
    "RX: cannot allocate RX buffer\n");
  } else {
   VAR_15->dev = VAR_13;
   VAR_15->ip_summed = VAR_0;
   FUNC_13(VAR_15, 2);
   VAR_2->data = VAR_15;
  }
 }
 return;
}

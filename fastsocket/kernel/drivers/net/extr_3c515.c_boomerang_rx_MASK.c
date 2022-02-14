
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; struct net_device* dev; int protocol; int head; } ;
struct TYPE_3__ {short rx_bytes; int rx_packets; int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_over_errors; int rx_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;
struct corkscrew_private {int cur_rx; scalar_t__ dirty_rx; TYPE_2__* rx_ring; struct sk_buff** rx_skbuff; } ;
struct TYPE_4__ {int status; int addr; } ;


 scalar_t__ VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (short) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,void*,short) ;
 struct corkscrew_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,short,...) ;
 int FUNC_9 (char*,int ,void*,int ,void*) ;
 int VAR_7 ;
 short VAR_8 ;
 int VAR_9 ;
 void* FUNC_10 (struct sk_buff*,short) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_10)
{
 struct corkscrew_private *VAR_11 = FUNC_6(VAR_10);
 int VAR_12 = VAR_11->cur_rx % VAR_2;
 int VAR_13 = VAR_10->base_addr;
 int VAR_14;

 if (VAR_6 > 5)
  FUNC_8("   In boomerang_rx(), status %4.4x, rx_status %4.4x.\n",
   FUNC_2(VAR_13 + VAR_0), FUNC_2(VAR_13 + VAR_5));
 while ((VAR_14 = VAR_11->rx_ring[VAR_12].status) & VAR_3) {
  if (VAR_14 & VAR_4) {
   unsigned char VAR_15 = VAR_14 >> 16;
   if (VAR_6 > 2)
    FUNC_8(" Rx error: status %2.2x.\n",
           VAR_15);
   VAR_10->stats.rx_errors++;
   if (VAR_15 & 0x01)
    VAR_10->stats.rx_over_errors++;
   if (VAR_15 & 0x02)
    VAR_10->stats.rx_length_errors++;
   if (VAR_15 & 0x04)
    VAR_10->stats.rx_frame_errors++;
   if (VAR_15 & 0x08)
    VAR_10->stats.rx_crc_errors++;
   if (VAR_15 & 0x10)
    VAR_10->stats.rx_length_errors++;
  } else {

   short VAR_16 = VAR_14 & 0x1fff;
   struct sk_buff *VAR_17;

   VAR_10->stats.rx_bytes += VAR_16;
   if (VAR_6 > 4)
    FUNC_8("Receiving packet size %d status %4.4x.\n",
         VAR_16, VAR_14);



   if (VAR_16 < VAR_8
       && (VAR_17 = FUNC_0(VAR_16 + 4)) != ((void*)0)) {
    FUNC_11(VAR_17, 2);

    FUNC_5(FUNC_10(VAR_17, VAR_16),
           FUNC_3(VAR_11->rx_ring[VAR_12].
         addr), VAR_16);
    VAR_7++;
   } else {
    void *VAR_18;

    VAR_17 = VAR_11->rx_skbuff[VAR_12];
    VAR_11->rx_skbuff[VAR_12] = ((void*)0);
    VAR_18 = FUNC_10(VAR_17, VAR_16);

    if (FUNC_3(VAR_11->rx_ring[VAR_12].addr) != VAR_18)
     FUNC_9("%s: Warning -- the skbuff addresses do not match"
          " in boomerang_rx: %p vs. %p / %p.\n",
          VAR_10->name,
          FUNC_3(VAR_11->
        rx_ring[VAR_12].
        addr), VAR_17->head,
          VAR_18);
    VAR_9++;
   }
   VAR_17->protocol = FUNC_1(VAR_17, VAR_10);
   FUNC_7(VAR_17);
   VAR_10->stats.rx_packets++;
  }
  VAR_12 = (++VAR_11->cur_rx) % VAR_2;
 }

 for (; VAR_11->cur_rx - VAR_11->dirty_rx > 0; VAR_11->dirty_rx++) {
  struct sk_buff *VAR_19;
  VAR_12 = VAR_11->dirty_rx % VAR_2;
  if (VAR_11->rx_skbuff[VAR_12] == ((void*)0)) {
   VAR_19 = FUNC_0(VAR_1);
   if (VAR_19 == ((void*)0))
    break;
   VAR_19->dev = VAR_10;
   FUNC_11(VAR_19, 2);
   VAR_11->rx_ring[VAR_12].addr = FUNC_4(VAR_19->data);
   VAR_11->rx_skbuff[VAR_12] = VAR_19;
  }
  VAR_11->rx_ring[VAR_12].status = 0;
 }
 return 0;
}

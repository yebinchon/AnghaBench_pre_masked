
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; void* ip_summed; int protocol; struct net_device* dev; scalar_t__ data; } ;
struct net_device {int name; int mtu; struct ctcm_priv* ml_priv; } ;
struct ll_header {scalar_t__ type; int length; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_length_errors; int rx_frame_errors; } ;
struct ctcm_priv {TYPE_1__ stats; } ;
struct channel {scalar_t__ protocol; int logflags; struct net_device* netdev; } ;
typedef int __u16 ;


 void* VAR_0 ;
 int FUNC_0 (int ,struct net_device*,char*) ;
 int FUNC_1 (int ,int ,char*,int ,int ,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;

void FUNC_10(struct channel *VAR_12, struct sk_buff *VAR_13)
{
 struct net_device *VAR_14 = VAR_12->netdev;
 struct ctcm_priv *VAR_15 = VAR_14->ml_priv;
 __u16 VAR_16 = *((__u16 *) VAR_13->data);

 FUNC_7(VAR_13, 2 + VAR_6);
 FUNC_6(VAR_13, 2);
 VAR_13->dev = VAR_14;
 VAR_13->ip_summed = VAR_0;
 while (VAR_16 > 0) {
  struct sk_buff *VAR_17;
  int VAR_18;
  struct ll_header *VAR_19 = (struct ll_header *)VAR_13->data;

  FUNC_6(VAR_13, VAR_6);
  if ((VAR_12->protocol == VAR_2) &&
      (VAR_19->type != VAR_5)) {
   if (!(VAR_12->logflags & VAR_7)) {
    VAR_12->logflags |= VAR_7;






    FUNC_1(VAR_4, VAR_3,
     "%s(%s): Illegal packet type 0x%04x"
     " - dropping",
     VAR_1, VAR_14->name, VAR_19->type);
   }
   VAR_15->stats.rx_dropped++;
   VAR_15->stats.rx_frame_errors++;
   return;
  }
  VAR_13->protocol = FUNC_4(VAR_19->type);
  if ((VAR_19->length <= VAR_6) ||
      (VAR_16 <= VAR_6)) {
   if (!(VAR_12->logflags & VAR_8)) {
    FUNC_1(VAR_4, VAR_3,
     "%s(%s): Illegal packet size %d(%d,%d)"
     "- dropping",
     VAR_1, VAR_14->name,
     VAR_19->length, VAR_14->mtu, VAR_16);
    VAR_12->logflags |= VAR_8;
   }

   VAR_15->stats.rx_dropped++;
   VAR_15->stats.rx_length_errors++;
   return;
  }
  VAR_19->length -= VAR_6;
  VAR_16 -= VAR_6;
  if ((VAR_19->length > FUNC_9(VAR_13)) ||
   (VAR_19->length > VAR_16)) {
   if (!(VAR_12->logflags & VAR_10)) {
    FUNC_1(VAR_4, VAR_3,
     "%s(%s): Packet size %d (overrun)"
     " - dropping", VAR_1,
      VAR_14->name, VAR_19->length);
    VAR_12->logflags |= VAR_10;
   }

   VAR_15->stats.rx_dropped++;
   VAR_15->stats.rx_length_errors++;
   return;
  }
  FUNC_7(VAR_13, VAR_19->length);
  FUNC_8(VAR_13);
  VAR_16 -= VAR_19->length;
  VAR_17 = FUNC_2(VAR_13->len);
  if (!VAR_17) {
   if (!(VAR_12->logflags & VAR_9)) {
    FUNC_1(VAR_4, VAR_3,
     "%s(%s): MEMORY allocation error",
      VAR_1, VAR_14->name);
    VAR_12->logflags |= VAR_9;
   }
   VAR_15->stats.rx_dropped++;
   return;
  }
  FUNC_5(VAR_13, FUNC_7(VAR_17, VAR_13->len),
       VAR_13->len);
  FUNC_8(VAR_17);
  VAR_17->dev = VAR_13->dev;
  VAR_17->protocol = VAR_13->protocol;
  VAR_13->ip_summed = VAR_0;
  VAR_18 = VAR_17->len;



  VAR_12->logflags = 0;
  VAR_15->stats.rx_packets++;
  VAR_15->stats.rx_bytes += VAR_18;
  FUNC_3(VAR_17);
  if (VAR_16 > 0) {
   FUNC_6(VAR_13, VAR_19->length);
   if (FUNC_9(VAR_13) < VAR_6) {
    FUNC_0(VAR_11, VAR_14,
     "Overrun in ctcm_unpack_skb");
    VAR_12->logflags |= VAR_10;
    return;
   }
   FUNC_7(VAR_13, VAR_6);
  }
 }
}

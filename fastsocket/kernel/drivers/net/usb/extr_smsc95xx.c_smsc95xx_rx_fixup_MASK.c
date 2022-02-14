
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usbnet {TYPE_2__* net; scalar_t__* data; } ;
struct smsc95xx_priv {scalar_t__ use_rx_csum; } ;
struct sk_buff {scalar_t__ len; unsigned char* data; int truesize; } ;
typedef int header ;
struct TYPE_3__ {int rx_length_errors; int rx_frame_errors; int rx_crc_errors; int rx_dropped; int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct usbnet*,char*,int) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (struct usbnet*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct usbnet *VAR_10, struct sk_buff *VAR_11)
{
 struct smsc95xx_priv *VAR_12 = (struct smsc95xx_priv *)(VAR_10->data[0]);

 while (VAR_11->len > 0) {
  u32 VAR_13, VAR_14;
  struct sk_buff *VAR_15;
  unsigned char *VAR_16;
  u16 VAR_17;

  FUNC_3(&VAR_13, VAR_11->data, sizeof(VAR_13));
  FUNC_2(&VAR_13);
  FUNC_6(VAR_11, 4 + VAR_2);
  VAR_16 = VAR_11->data;


  VAR_17 = (u16)((VAR_13 & VAR_5) >> 16);
  VAR_14 = (4 - ((VAR_17 + VAR_2) % 4)) % 4;

  if (FUNC_10(VAR_13 & VAR_4)) {
   if (FUNC_4(VAR_10))
    FUNC_0(VAR_10, "Error header=0x%08x", VAR_13);
   VAR_10->net->stats.rx_errors++;
   VAR_10->net->stats.rx_dropped++;

   if (VAR_13 & VAR_3) {
    VAR_10->net->stats.rx_crc_errors++;
   } else {
    if (VAR_13 & (VAR_9 | VAR_8))
     VAR_10->net->stats.rx_frame_errors++;

    if ((VAR_13 & VAR_7) &&
     (!(VAR_13 & VAR_6)))
     VAR_10->net->stats.rx_length_errors++;
   }
  } else {

   if (FUNC_10(VAR_17 > (VAR_0 + 12))) {
    if (FUNC_4(VAR_10))
     FUNC_0(VAR_10, "size err header=0x%08x",
      VAR_13);
    return 0;
   }


   if (VAR_11->len == VAR_17) {
    if (VAR_12->use_rx_csum)
     FUNC_9(VAR_11);
    FUNC_8(VAR_11, VAR_11->len - 4);
    VAR_11->truesize = VAR_17 + sizeof(struct sk_buff);

    return 1;
   }

   VAR_15 = FUNC_5(VAR_11, VAR_1);
   if (FUNC_10(!VAR_15)) {
    FUNC_1(VAR_10, "Error allocating skb");
    return 0;
   }

   VAR_15->len = VAR_17;
   VAR_15->data = VAR_16;
   FUNC_7(VAR_15, VAR_17);

   if (VAR_12->use_rx_csum)
    FUNC_9(VAR_15);
   FUNC_8(VAR_15, VAR_15->len - 4);
   VAR_15->truesize = VAR_17 + sizeof(struct sk_buff);

   FUNC_11(VAR_10, VAR_15);
  }

  FUNC_6(VAR_11, VAR_17);


  if (VAR_11->len)
   FUNC_6(VAR_11, VAR_14);
 }

 if (FUNC_10(VAR_11->len < 0)) {
  FUNC_1(VAR_10, "invalid rx length<0 %d", VAR_11->len);
  return 0;
 }

 return 1;
}

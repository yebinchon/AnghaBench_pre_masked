
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int* data; void* dev; } ;
struct TYPE_5__ {int byte_rx; int err_rx; } ;
struct hci_dev {TYPE_2__ stat; } ;
struct btmrvl_sdio_card {int ioport; int func; } ;
struct TYPE_4__ {struct btmrvl_sdio_card* card; struct hci_dev* hcidev; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;
struct TYPE_6__ {int pkt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct btmrvl_private*,struct sk_buff*) ;
 int FUNC_4 (struct btmrvl_private*,struct sk_buff*) ;
 int FUNC_5 (struct btmrvl_sdio_card*,int*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,int ,int*,int) ;
 int FUNC_9 (int ,int*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_12(struct btmrvl_private *VAR_9)
{
 u16 VAR_10 = 0;
 int VAR_11, VAR_12, VAR_13;
 struct sk_buff *VAR_14 = ((void*)0);
 u32 VAR_15;
 u8 *VAR_16 = ((void*)0);
 struct hci_dev *VAR_17 = VAR_9->btmrvl_dev.hcidev;
 struct btmrvl_sdio_card *VAR_18 = VAR_9->btmrvl_dev.card;

 if (!VAR_18 || !VAR_18->func) {
  FUNC_0("card or function is NULL!");
  VAR_11 = -VAR_3;
  goto exit;
 }


 VAR_11 = FUNC_5(VAR_18, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0("read rx_len failed");
  VAR_11 = -VAR_4;
  goto exit;
 }

 VAR_13 = VAR_7;
 VAR_12 = (VAR_10 + VAR_13 - 1) / VAR_13;

 if (VAR_10 <= VAR_8
   || (VAR_12 * VAR_13) > VAR_0) {
  FUNC_0("invalid packet length: %d", VAR_10);
  VAR_11 = -VAR_3;
  goto exit;
 }


 VAR_14 = FUNC_2(VAR_12 * VAR_13 + VAR_1,
        VAR_5);
 if (VAR_14 == ((void*)0)) {
  FUNC_0("No free skb");
  goto exit;
 }

 if ((unsigned long) VAR_14->data & (VAR_1 - 1)) {
  FUNC_11(VAR_14, (unsigned long) VAR_14->data &
     (VAR_1 - 1));
  FUNC_10(VAR_14, (unsigned long) VAR_14->data &
     (VAR_1 - 1));
 }

 VAR_16 = VAR_14->data;

 VAR_11 = FUNC_9(VAR_18->func, VAR_16, VAR_18->ioport,
     VAR_12 * VAR_13);
 if (VAR_11 < 0) {
  FUNC_0("readsb failed: %d", VAR_11);
  VAR_11 = -VAR_4;
  goto exit;
 }





 VAR_10 = VAR_16[0];
 VAR_10 |= (u16) VAR_16[1] << 8;
 VAR_15 = VAR_16[3];

 switch (VAR_15) {
 case 131:
 case 129:
 case 130:
  FUNC_1(VAR_14)->pkt_type = VAR_15;
  VAR_14->dev = (void *)VAR_17;
  FUNC_11(VAR_14, VAR_10);
  FUNC_10(VAR_14, VAR_8);

  if (VAR_15 == 130)
   FUNC_3(VAR_9, VAR_14);

  FUNC_6(VAR_14);
  VAR_17->stat.byte_rx += VAR_10;
  break;

 case 128:
  FUNC_1(VAR_14)->pkt_type = VAR_6;
  VAR_14->dev = (void *)VAR_17;
  FUNC_11(VAR_14, VAR_10);
  FUNC_10(VAR_14, VAR_8);

  if (FUNC_4(VAR_9, VAR_14))
   FUNC_6(VAR_14);

  VAR_17->stat.byte_rx += VAR_10;
  break;

 default:
  FUNC_0("Unknow packet type:%d", VAR_15);
  FUNC_8("", VAR_2, VAR_16,
      VAR_13 * VAR_12);

  FUNC_7(VAR_14);
  VAR_14 = ((void*)0);
  break;
 }

exit:
 if (VAR_11) {
  VAR_17->stat.err_rx++;
  if (VAR_14)
   FUNC_7(VAR_14);
 }

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; int * data; } ;
struct hif_device_usb {int rx_remain_len; int rx_transfer_len; int htc_handle; TYPE_1__* udev; int rx_lock; struct sk_buff* remain_skb; scalar_t__ rx_pad_len; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,struct sk_buff*,int,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hif_device_usb *VAR_8,
        struct sk_buff *VAR_9)
{
 struct sk_buff *VAR_10, *VAR_11[VAR_2];
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = VAR_9->len;
 int VAR_15, VAR_16;
 u16 VAR_17 = 0;
 u8 *VAR_18;

 FUNC_8(&VAR_8->rx_lock);

 VAR_15 = VAR_8->rx_remain_len;
 VAR_16 = VAR_8->rx_transfer_len;

 if (VAR_15 != 0) {
  struct sk_buff *VAR_19 = VAR_8->remain_skb;

  if (VAR_19) {
   VAR_18 = (u8 *) VAR_19->data;

   VAR_12 = VAR_15;
   VAR_15 -= VAR_8->rx_pad_len;
   VAR_18 += VAR_16;

   FUNC_5(VAR_18, VAR_9->data, VAR_15);

   VAR_16 += VAR_15;
   VAR_8->rx_remain_len = 0;
   FUNC_6(VAR_19, VAR_16);

   VAR_11[VAR_17++] = VAR_19;

  } else {
   VAR_12 = VAR_15;
  }
 }

 FUNC_9(&VAR_8->rx_lock);

 while (VAR_12 < VAR_14) {
  u16 VAR_20;
  u16 VAR_21;
  u16 VAR_22;
  int VAR_23;

  VAR_18 = (u8 *) VAR_9->data;

  VAR_20 = FUNC_4(VAR_18 + VAR_12);
  VAR_21 = FUNC_4(VAR_18 + VAR_12 + 2);

  if (VAR_21 != VAR_0) {
   FUNC_0(VAR_7);
   return;
  }

  VAR_22 = 4 - (VAR_20 & 0x3);
  if (VAR_22 == 4)
   VAR_22 = 0;

  VAR_23 = VAR_12;
  VAR_12 = VAR_12 + 4 + VAR_20 + VAR_22;

  if (VAR_12 > VAR_3) {
   FUNC_8(&VAR_8->rx_lock);
   VAR_8->rx_remain_len = VAR_12 - VAR_3;
   VAR_8->rx_transfer_len =
    VAR_3 - VAR_23 - 4;
   VAR_8->rx_pad_len = VAR_22;

   VAR_10 = FUNC_1(VAR_20 + 32, VAR_1);
   if (!VAR_10) {
    FUNC_3(&VAR_8->udev->dev,
     "ath9k_htc: RX memory allocation error\n");
    FUNC_9(&VAR_8->rx_lock);
    goto err;
   }
   FUNC_7(VAR_10, 32);
   FUNC_0(VAR_5);

   FUNC_5(VAR_10->data, &(VAR_9->data[VAR_23+4]),
          VAR_8->rx_transfer_len);


   VAR_8->remain_skb = VAR_10;
   FUNC_9(&VAR_8->rx_lock);
  } else {
   VAR_10 = FUNC_1(VAR_20 + 32, VAR_1);
   if (!VAR_10) {
    FUNC_3(&VAR_8->udev->dev,
     "ath9k_htc: RX memory allocation error\n");
    goto err;
   }
   FUNC_7(VAR_10, 32);
   FUNC_0(VAR_5);

   FUNC_5(VAR_10->data, &(VAR_9->data[VAR_23+4]), VAR_20);
   FUNC_6(VAR_10, VAR_20);
   VAR_11[VAR_17++] = VAR_10;
  }
 }

err:
 for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
  FUNC_2(VAR_8->htc_handle, VAR_11[VAR_13],
     VAR_11[VAR_13]->len, VAR_4);
  FUNC_0(VAR_6);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct urb {int actual_length; int status; struct if_usb_card* context; } ;
struct sk_buff {int * data; } ;
struct lbs_private {int dummy; } ;
struct if_usb_card {TYPE_1__* udev; struct lbs_private* priv; struct sk_buff* rx_skb; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct if_usb_card*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (struct lbs_private*,int) ;
 int FUNC_6 (struct lbs_private*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int *,struct sk_buff*,struct if_usb_card*,struct lbs_private*) ;
 int FUNC_9 (int,struct sk_buff*,struct if_usb_card*,struct lbs_private*) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_2)
{
 struct if_usb_card *VAR_3 = VAR_2->context;
 struct sk_buff *VAR_4 = VAR_3->rx_skb;
 struct lbs_private *VAR_5 = VAR_3->priv;
 int VAR_6 = VAR_2->actual_length;
 uint8_t *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;
 __le32 *VAR_9 = (__le32 *)(VAR_4->data + VAR_0);
 uint32_t VAR_10;

 FUNC_2(VAR_1);

 if (VAR_6) {
  if (VAR_2->status) {
   FUNC_4(&VAR_3->udev->dev, "RX URB failed: %d\n",
         VAR_2->status);
   FUNC_1(VAR_4);
   goto setup_for_next;
  }

  VAR_7 = VAR_4->data + VAR_0;
  VAR_8 = FUNC_7(VAR_9[0]);
  FUNC_4(&VAR_3->udev->dev,
       "Recv length = 0x%x, Recv type = 0x%X\n",
       VAR_6, VAR_8);
 } else if (VAR_2->status) {
  FUNC_1(VAR_4);
  goto rx_exit;
 }

 switch (VAR_8) {
 case 130:
  FUNC_9(VAR_6, VAR_4, VAR_3, VAR_5);
  break;

 case 128:
  FUNC_8(VAR_6, VAR_7, VAR_4, VAR_3, VAR_5);
  break;

 case 129:

  VAR_10 = FUNC_7(VAR_9[1]);
  FUNC_4(&VAR_3->udev->dev, "**EVENT** 0x%X\n", VAR_10);
  FUNC_1(VAR_4);


  if (VAR_10 & 0xffff0000) {
   u32 VAR_11 = (VAR_10 & 0xffff0000) >> 16;

   FUNC_6(VAR_5, VAR_11);
  } else
   FUNC_5(VAR_5, VAR_10 & 0xFF);
  break;

 default:
  FUNC_4(&VAR_3->udev->dev, "Unknown command type 0x%X\n",
        VAR_8);
  FUNC_1(VAR_4);
  break;
 }

setup_for_next:
 FUNC_0(VAR_3);
rx_exit:
 FUNC_3(VAR_1);
}

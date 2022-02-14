
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u8 ;
struct lbtf_private {struct if_usb_card* card; } ;
struct if_usb_card {scalar_t__ ep_out_buf; TYPE_1__* udev; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct if_usb_card*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct lbtf_private *VAR_4, uint8_t VAR_5,
          uint8_t *VAR_6, uint16_t VAR_7)
{
 struct if_usb_card *VAR_8 = VAR_4->card;
 u8 VAR_9 = 0;

 FUNC_1(&VAR_8->udev->dev, "*** type = %u\n", VAR_5);
 FUNC_1(&VAR_8->udev->dev, "size after = %d\n", VAR_7);

 if (VAR_5 == VAR_3) {
  *(__le32 *)VAR_8->ep_out_buf = FUNC_0(VAR_1);
 } else {
  *(__le32 *)VAR_8->ep_out_buf = FUNC_0(VAR_0);
  VAR_9 = 1;
 }

 FUNC_2((VAR_8->ep_out_buf + VAR_2), VAR_6, VAR_7);

 return FUNC_3(VAR_8, VAR_8->ep_out_buf, VAR_7 + VAR_2,
       VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct lbs_private {int dnld_sent; struct if_usb_card* card; } ;
struct if_usb_card {scalar_t__ ep_out_buf; TYPE_1__* udev; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct if_usb_card*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_6, uint8_t VAR_7,
          uint8_t *VAR_8, uint16_t VAR_9)
{
 struct if_usb_card *VAR_10 = VAR_6->card;

 FUNC_1(&VAR_10->udev->dev,"*** type = %u\n", VAR_7);
 FUNC_1(&VAR_10->udev->dev,"size after = %d\n", VAR_9);

 if (VAR_7 == VAR_5) {
  *(__le32 *)VAR_10->ep_out_buf = FUNC_0(VAR_1);
  VAR_6->dnld_sent = VAR_2;
 } else {
  *(__le32 *)VAR_10->ep_out_buf = FUNC_0(VAR_0);
  VAR_6->dnld_sent = VAR_3;
 }

 FUNC_2((VAR_10->ep_out_buf + VAR_4), VAR_8, VAR_9);

 return FUNC_3(VAR_10, VAR_10->ep_out_buf, VAR_9 + VAR_4);
}

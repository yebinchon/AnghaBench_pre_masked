
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lbtf_private {int dummy; } ;
struct if_usb_card {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct lbtf_private*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_5(int VAR_3, struct sk_buff *VAR_4,
           struct if_usb_card *VAR_5,
           struct lbtf_private *VAR_6)
{
 if (VAR_3 > VAR_1 + VAR_0
     || VAR_3 < VAR_2) {
  FUNC_1(&VAR_5->udev->dev, "Packet length is Invalid\n");
  FUNC_0(VAR_4);
  return;
 }

 FUNC_4(VAR_4, VAR_3);
 FUNC_3(VAR_4, VAR_0);
 FUNC_2(VAR_6, VAR_4);
}

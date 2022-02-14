
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lbs_private {int dummy; } ;
struct if_usb_card {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct lbs_private*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_6(int VAR_4, struct sk_buff *VAR_5,
           struct if_usb_card *VAR_6,
           struct lbs_private *VAR_7)
{
 if (VAR_4 > VAR_2 + VAR_1
     || VAR_4 < VAR_3) {
  FUNC_1(&VAR_6->udev->dev, "Packet length is Invalid\n");
  FUNC_0(VAR_5);
  return;
 }

 FUNC_5(VAR_5, VAR_0);
 FUNC_4(VAR_5, VAR_4);
 FUNC_3(VAR_5, VAR_1);

 FUNC_2(VAR_7, VAR_5);
}

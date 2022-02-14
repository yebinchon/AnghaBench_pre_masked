
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct lbs_private {int surpriseremoved; TYPE_1__* dev; } ;
struct if_usb_card {int surprise_removed; scalar_t__ priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct if_usb_card*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct lbs_private*) ;
 struct if_usb_card* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_3)
{
 struct if_usb_card *VAR_4 = FUNC_7(VAR_3);
 struct lbs_private *VAR_5 = (struct lbs_private *) VAR_4->priv;

 FUNC_3(VAR_0);

 FUNC_0(&VAR_5->dev->dev, &VAR_1);
 FUNC_0(&VAR_5->dev->dev, &VAR_2);

 VAR_4->surprise_removed = 1;

 if (VAR_5) {
  VAR_5->surpriseremoved = 1;
  FUNC_6(VAR_5);
  FUNC_5(VAR_5);
 }


 FUNC_1(VAR_4);

 FUNC_9(VAR_3, ((void*)0));
 FUNC_8(FUNC_2(VAR_3));

 FUNC_4(VAR_0);
}

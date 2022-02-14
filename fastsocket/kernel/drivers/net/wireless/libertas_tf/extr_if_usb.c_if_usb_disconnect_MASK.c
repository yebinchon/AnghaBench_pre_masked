
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct lbtf_private {int dummy; } ;
struct if_usb_card {struct lbtf_private* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct if_usb_card*) ;
 int FUNC_1 (struct if_usb_card*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lbtf_private*) ;
 struct if_usb_card* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_1)
{
 struct if_usb_card *VAR_2 = FUNC_6(VAR_1);
 struct lbtf_private *VAR_3 = VAR_2->priv;

 FUNC_3(VAR_0);

 FUNC_1(VAR_2);

 if (VAR_3)
  FUNC_5(VAR_3);


 FUNC_0(VAR_2);

 FUNC_8(VAR_1, ((void*)0));
 FUNC_7(FUNC_2(VAR_1));

 FUNC_4(VAR_0);
}

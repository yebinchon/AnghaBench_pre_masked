
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int uwb_rc; } ;
struct whc {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct umc_dev {int dev; } ;


 struct usb_hcd* FUNC_0 (int *) ;
 struct wusbhc* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct whc*) ;
 int FUNC_6 (struct whc*) ;
 int FUNC_7 (struct wusbhc*) ;
 int FUNC_8 (struct wusbhc*) ;
 struct whc* FUNC_9 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_10(struct umc_dev *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_0(&VAR_0->dev);
 struct wusbhc *VAR_2 = FUNC_1(VAR_1);
 struct whc *VAR_3 = FUNC_9(VAR_2);

 if (VAR_1) {
  FUNC_6(VAR_3);
  FUNC_7(VAR_2);
  FUNC_3(VAR_1);
  FUNC_8(VAR_2);
  FUNC_4(VAR_2->uwb_rc);
  FUNC_5(VAR_3);
  FUNC_2(VAR_1);
 }
}

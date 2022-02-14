
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int regs; } ;
struct ssb_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ssb_device*,int ) ;
 struct usb_hcd* FUNC_2 (struct ssb_device*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_5(struct ssb_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1);
 FUNC_0(VAR_1->regs);
 FUNC_3(VAR_1);
 FUNC_1(VAR_0, 0);
}

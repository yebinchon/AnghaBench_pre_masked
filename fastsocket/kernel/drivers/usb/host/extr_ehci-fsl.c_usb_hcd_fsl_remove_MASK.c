
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rsrc_len; int rsrc_start; int regs; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;

void FUNC_4(struct usb_hcd *VAR_0, struct platform_device *VAR_1)
{
 FUNC_3(VAR_0);
 FUNC_0(VAR_0->regs);
 FUNC_1(VAR_0->rsrc_start, VAR_0->rsrc_len);
 FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rsrc_len; int rsrc_start; int regs; } ;
struct pxa27x_ohci {int clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pxa27x_ohci*,int *) ;
 int FUNC_3 (int ,int ) ;
 struct pxa27x_ohci* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;

void FUNC_7 (struct usb_hcd *VAR_0, struct platform_device *VAR_1)
{
 struct pxa27x_ohci *VAR_2 = FUNC_4(VAR_0);

 FUNC_6(VAR_0);
 FUNC_2(VAR_2, &VAR_1->dev);
 FUNC_1(VAR_0->regs);
 FUNC_3(VAR_0->rsrc_start, VAR_0->rsrc_len);
 FUNC_5(VAR_0);
 FUNC_0(VAR_2->clk);
}

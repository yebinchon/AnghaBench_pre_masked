
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rsrc_len; int rsrc_start; int regs; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_1,
   struct platform_device *VAR_2)
{
 FUNC_5(VAR_1);
 FUNC_1(&VAR_2->dev);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1->regs);
 FUNC_3(VAR_1->rsrc_start, VAR_1->rsrc_len);
 FUNC_4(VAR_1);
}

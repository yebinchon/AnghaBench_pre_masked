
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rsrc_len; int rsrc_start; int regs; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_8(struct usb_hcd *VAR_3,
    struct platform_device *VAR_4)
{
 FUNC_7(VAR_3);
 FUNC_0(VAR_4);
 FUNC_4(VAR_3->regs);
 FUNC_5(VAR_3->rsrc_start, VAR_3->rsrc_len);
 FUNC_6(VAR_3);

 if (FUNC_2())
  FUNC_1(VAR_1);
 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
 VAR_0 = VAR_2 = VAR_1 = ((void*)0);

 FUNC_3(&VAR_4->dev, ((void*)0));
}

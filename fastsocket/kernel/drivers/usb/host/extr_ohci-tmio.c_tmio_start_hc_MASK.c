
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {unsigned long rsrc_start; int irq; } ;
struct tmio_hcd {scalar_t__ ccr; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int ,unsigned long,int ) ;
 struct tmio_hcd* FUNC_1 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct platform_device*) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_4)
{
 struct usb_hcd *VAR_5 = FUNC_2(VAR_4);
 struct tmio_hcd *VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7 = VAR_5->rsrc_start;

 FUNC_6(VAR_4);
 FUNC_4(VAR_7, VAR_6->ccr + VAR_0);
 FUNC_4(VAR_7 >> 16, VAR_6->ccr + VAR_0 + 2);
 FUNC_5(1, VAR_6->ccr + VAR_1);
 FUNC_5(2, VAR_6->ccr + VAR_2);

 FUNC_0(&VAR_4->dev, "revision %d @ 0x%08llx, irq %d\n",
   FUNC_3(VAR_6->ccr + VAR_3), VAR_5->rsrc_start, VAR_5->irq);
}

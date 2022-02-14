
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct tmio_hcd {int lock; scalar_t__ ccr; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tmio_hcd* FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_5)
{
 struct usb_hcd *VAR_6 = FUNC_1(VAR_5);
 struct tmio_hcd *VAR_7 = FUNC_0(VAR_6);
 u16 VAR_8;
 unsigned long VAR_9;

 FUNC_2(&VAR_7->lock, VAR_9);

 VAR_8 = VAR_2 | VAR_1 |
      VAR_3 | VAR_4;

 FUNC_4(VAR_8, VAR_7->ccr + VAR_0);
 FUNC_3(&VAR_7->lock, VAR_9);
}

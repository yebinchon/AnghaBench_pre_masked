
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct isp116x {int addr_reg; int data_reg; } ;


 int VAR_0 ;
 struct isp116x* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct isp116x*) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_2(VAR_1);
 struct isp116x *VAR_3;
 struct resource *VAR_4;

 if (!VAR_2)
  return 0;
 VAR_3 = FUNC_0(VAR_2);
 FUNC_5(VAR_3);
 FUNC_7(VAR_2);

 FUNC_1(VAR_3->data_reg);
 VAR_4 = FUNC_3(VAR_1, VAR_0, 1);
 FUNC_4(VAR_4->start, 2);
 FUNC_1(VAR_3->addr_reg);
 VAR_4 = FUNC_3(VAR_1, VAR_0, 0);
 FUNC_4(VAR_4->start, 2);

 FUNC_6(VAR_2);
 return 0;
}

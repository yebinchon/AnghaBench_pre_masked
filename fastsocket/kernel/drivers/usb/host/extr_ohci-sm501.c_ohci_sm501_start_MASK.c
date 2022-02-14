
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus_name; struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_0)
{
 struct device *VAR_1 = VAR_0->self.controller;
 int VAR_2;

 VAR_2 = FUNC_2(FUNC_1(VAR_0));
 if (VAR_2 < 0) {
  FUNC_0(VAR_1, "can't start %s", VAR_0->self.bus_name);
  FUNC_3(VAR_0);
 }

 return VAR_2;
}

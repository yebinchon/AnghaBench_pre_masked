
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_0)
{
 FUNC_0(VAR_0->self.controller, "stopping USB Controller\n");
 FUNC_1(VAR_0);
 FUNC_2(0);
}

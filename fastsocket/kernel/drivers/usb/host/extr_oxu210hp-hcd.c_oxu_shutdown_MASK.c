
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct oxu_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int configured_flag; } ;


 int FUNC_0 (struct oxu_hcd*) ;
 int FUNC_1 (struct oxu_hcd*) ;
 struct oxu_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_0)
{
 struct oxu_hcd *VAR_1 = FUNC_2(VAR_0);

 (void) FUNC_0(VAR_1);
 FUNC_1(VAR_1);


 FUNC_4(0, &VAR_1->regs->configured_flag);


 FUNC_3(&VAR_1->regs->configured_flag);
}

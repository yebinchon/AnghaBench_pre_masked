
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int rsrc_len; int rsrc_start; int regs; } ;
struct platform_device {int dummy; } ;
struct ohci_hcd {TYPE_1__* transceiver; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct ohci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (struct usb_hcd*) ;

__attribute__((used)) static inline void
FUNC_10 (struct usb_hcd *VAR_2, struct platform_device *VAR_3)
{
 struct ohci_hcd *VAR_4 = FUNC_2 (VAR_2);

 FUNC_9(VAR_2);
 if (VAR_4->transceiver) {
  (void) FUNC_5(VAR_4->transceiver, 0);
  FUNC_6(VAR_4->transceiver->dev);
 }
 if (FUNC_4())
  FUNC_1(9);
 FUNC_3(VAR_2->regs);
 FUNC_7(VAR_2->rsrc_start, VAR_2->rsrc_len);
 FUNC_8(VAR_2);
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
}

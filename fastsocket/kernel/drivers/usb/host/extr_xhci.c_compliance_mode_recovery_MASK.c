
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int num_usb3_ports; int port_status_u0; int comp_mode_recovery_timer; struct usb_hcd* shared_hcd; int * usb3_ports; } ;
struct usb_hcd {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct xhci_hcd*,char*,...) ;
 int FUNC_5 (struct xhci_hcd*,int ) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_5)
{
 struct xhci_hcd *VAR_6;
 struct usb_hcd *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = (struct xhci_hcd *)VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_usb3_ports; VAR_9++) {
  VAR_8 = FUNC_5(VAR_6, VAR_6->usb3_ports[VAR_9]);
  if ((VAR_8 & VAR_2) == VAR_3) {




   FUNC_4(VAR_6, "Compliance mode detected->port %d\n",
     VAR_9 + 1);
   FUNC_4(VAR_6, "Attempting compliance mode recovery\n");
   VAR_7 = VAR_6->shared_hcd;

   if (VAR_7->state == VAR_1)
    FUNC_3(VAR_7);

   FUNC_2(VAR_7);
  }
 }

 if (VAR_6->port_status_u0 != ((1 << VAR_6->num_usb3_ports)-1))
  FUNC_0(&VAR_6->comp_mode_recovery_timer,
   VAR_4 + FUNC_1(VAR_0));
}

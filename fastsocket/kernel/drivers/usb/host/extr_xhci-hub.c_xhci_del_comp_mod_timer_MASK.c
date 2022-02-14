
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct xhci_hcd {int num_usb3_ports; int quirks; scalar_t__ port_status_u0; int comp_mode_recovery_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xhci_hcd*,char*) ;

void FUNC_2(struct xhci_hcd *VAR_3, u32 VAR_4, u16 VAR_5)
{
 u32 VAR_6 = ((1 << VAR_3->num_usb3_ports)-1);
 bool VAR_7 = ((VAR_4 & VAR_0) == VAR_1);

 if (!(VAR_3->quirks & VAR_2))
  return;

 if ((VAR_3->port_status_u0 != VAR_6) && VAR_7) {
  VAR_3->port_status_u0 |= 1 << VAR_5;
  if (VAR_3->port_status_u0 == VAR_6) {
   FUNC_0(&VAR_3->comp_mode_recovery_timer);
   FUNC_1(VAR_3, "All USB3 ports have entered U0 already!\n");
   FUNC_1(VAR_3, "Compliance Mode Recovery Timer Deleted.\n");
  }
 }
}

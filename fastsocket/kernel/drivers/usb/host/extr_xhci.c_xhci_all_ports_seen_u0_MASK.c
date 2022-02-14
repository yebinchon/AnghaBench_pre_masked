
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int port_status_u0; int num_usb3_ports; } ;



__attribute__((used)) static int FUNC_0(struct xhci_hcd *VAR_0)
{
 return (VAR_0->port_status_u0 == ((1 << VAR_0->num_usb3_ports)-1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {TYPE_1__* regs; } ;
typedef enum fsl_usb2_phy_modes { ____Placeholder_fsl_usb2_phy_modes } fsl_usb2_phy_modes ;
struct TYPE_2__ {int * port_status; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ehci_hcd*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ehci_hcd *VAR_4,
         enum fsl_usb2_phy_modes VAR_5,
         unsigned int VAR_6)
{
 u32 VAR_7 = 0;
 switch (VAR_5) {
 case 130:
  VAR_7 |= VAR_2;
  break;
 case 131:
  VAR_7 |= VAR_1;
  break;
 case 128:
  VAR_7 |= VAR_0;

 case 129:
  VAR_7 |= VAR_3;
  break;
 case 132:
  break;
 }
 FUNC_0(VAR_4, VAR_7, &VAR_4->regs->port_status[VAR_6]);
}

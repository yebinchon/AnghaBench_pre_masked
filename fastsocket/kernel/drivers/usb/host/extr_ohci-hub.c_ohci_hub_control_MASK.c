
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_hub_descriptor {int dummy; } ;
struct TYPE_4__ {int b_hnp_enable; int otg_port; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct ohci_hcd {int num_ports; TYPE_3__* regs; int (* start_hnp ) (struct ohci_hcd*) ;} ;
struct TYPE_5__ {int * portstatus; int status; } ;
struct TYPE_6__ {TYPE_2__ roothub; } ;






 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct usb_hcd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct ohci_hcd*,char*,int,int) ;
 struct ohci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct ohci_hcd*,struct usb_hub_descriptor*) ;
 int FUNC_4 (struct ohci_hcd*,int,int *) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct ohci_hcd*,int) ;
 int FUNC_7 (struct ohci_hcd*,int) ;
 int FUNC_8 (struct ohci_hcd*) ;
 int FUNC_9 (struct ohci_hcd*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11 (
 struct usb_hcd *VAR_15,
 u16 VAR_16,
 u16 VAR_17,
 u16 VAR_18,
 char *VAR_19,
 u16 VAR_20
) {
 struct ohci_hcd *VAR_21 = FUNC_2 (VAR_15);
 int VAR_22 = VAR_21->num_ports;
 u32 VAR_23;
 int VAR_24 = 0;

 if (FUNC_10(!FUNC_0(VAR_15)))
  return -VAR_1;

 switch (VAR_16) {
 case 143:
  switch (VAR_17) {
  case 144:
   FUNC_4 (VAR_21, VAR_4,
     &VAR_21->regs->roothub.status);
  case 145:
   break;
  default:
   goto error;
  }
  break;
 case 142:
  if (!VAR_18 || VAR_18 > VAR_22)
   goto error;
  VAR_18--;

  switch (VAR_17) {
  case 131:
   VAR_23 = VAR_5;
   break;
  case 135:
   VAR_23 = VAR_9;
   break;
  case 128:
   VAR_23 = VAR_10;
   break;
  case 132:
   VAR_23 = VAR_14;
   break;
  case 130:
   VAR_23 = VAR_7;
   break;
  case 136:
   VAR_23 = VAR_6;
   break;
  case 134:
   VAR_23 = VAR_8;
   break;
  case 133:
   VAR_23 = VAR_12;
   break;
  default:
   goto error;
  }
  FUNC_4 (VAR_21, VAR_23,
    &VAR_21->regs->roothub.portstatus [VAR_18]);

  break;
 case 141:
  FUNC_3 (VAR_21, (struct usb_hub_descriptor *) VAR_19);
  break;
 case 140:
  VAR_23 = FUNC_8 (VAR_21) & ~(VAR_2 | VAR_3);
  FUNC_5(VAR_23, VAR_19);
  break;
 case 139:
  if (!VAR_18 || VAR_18 > VAR_22)
   goto error;
  VAR_18--;
  VAR_23 = FUNC_7 (VAR_21, VAR_18);
  FUNC_5(VAR_23, VAR_19);


 if (*(u16*)(VAR_19+2))

  FUNC_1 (VAR_21, "GetStatus", VAR_18, VAR_23);
  break;
 case 138:
  switch (VAR_17) {
  case 144:

  case 145:
   break;
  default:
   goto error;
  }
  break;
 case 137:
  if (!VAR_18 || VAR_18 > VAR_22)
   goto error;
  VAR_18--;
  switch (VAR_17) {
  case 128:






   FUNC_4 (VAR_21, VAR_13,
    &VAR_21->regs->roothub.portstatus [VAR_18]);
   break;
  case 130:
   FUNC_4 (VAR_21, VAR_11,
    &VAR_21->regs->roothub.portstatus [VAR_18]);
   break;
  case 129:
   VAR_24 = FUNC_6 (VAR_21, VAR_18);
   break;
  default:
   goto error;
  }
  break;

 default:
error:

  VAR_24 = -VAR_0;
 }
 return VAR_24;
}

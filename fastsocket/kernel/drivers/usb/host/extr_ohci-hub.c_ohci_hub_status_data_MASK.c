
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int flags; } ;
struct ohci_hcd {int flags; int num_ports; int lock; TYPE_2__* regs; } ;
struct TYPE_3__ {int a; } ;
struct TYPE_4__ {int intrstatus; TYPE_1__ roothub; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hcd*) ;
 int VAR_1 ;
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
 int FUNC_1 (int ,int *) ;
 struct ohci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct ohci_hcd*,int *) ;
 scalar_t__ FUNC_4 (struct ohci_hcd*,int,int,int) ;
 int FUNC_5 (struct ohci_hcd*,char*,int) ;
 int FUNC_6 (struct ohci_hcd*,int,int *) ;
 int FUNC_7 (struct ohci_hcd*) ;
 int FUNC_8 (struct ohci_hcd*,int) ;
 int FUNC_9 (struct ohci_hcd*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_13 (struct usb_hcd *VAR_13, char *VAR_14)
{
 struct ohci_hcd *VAR_15 = FUNC_2 (VAR_13);
 int VAR_16, VAR_17 = 0, VAR_18 = 1;
 int VAR_19 = 0;
 int VAR_20;
 unsigned long VAR_21;

 FUNC_11 (&VAR_15->lock, VAR_21);
 if (!FUNC_0(VAR_13))
  goto done;


 if ((VAR_15->flags & VAR_3)
   && (FUNC_7 (VAR_15) & VAR_4) > VAR_1) {
  FUNC_5 (VAR_15, "bogus NDP, rereads as NDP=%d\n",
     FUNC_3 (VAR_15, &VAR_15->regs->roothub.a) & VAR_4);

  goto done;
 }


 if (FUNC_9 (VAR_15) & (VAR_5 | VAR_6))
  VAR_14 [0] = VAR_17 = 1;
 else
  VAR_14 [0] = 0;
 if (VAR_15->num_ports > 7) {
  VAR_14 [1] = 0;
  VAR_18++;
 }


 FUNC_6(VAR_15, VAR_2, &VAR_15->regs->intrstatus);
 VAR_20 = FUNC_3(VAR_15, &VAR_15->regs->intrstatus) &
   VAR_2;


 for (VAR_16 = 0; VAR_16 < VAR_15->num_ports; VAR_16++) {
  u32 VAR_22 = FUNC_8 (VAR_15, VAR_16);


  VAR_19 |= (VAR_22 & VAR_7);

  if (VAR_22 & (VAR_8 | VAR_10 | VAR_12
    | VAR_9 | VAR_11)) {
   VAR_17 = 1;
   if (VAR_16 < 7)
       VAR_14 [0] |= 1 << (VAR_16 + 1);
   else
       VAR_14 [1] |= 1 << (VAR_16 - 7);
  }
 }

 if (FUNC_4(VAR_15, VAR_17,
   VAR_19, VAR_20))
  FUNC_10(VAR_0, &VAR_13->flags);
 else
  FUNC_1(VAR_0, &VAR_13->flags);


done:
 FUNC_12 (&VAR_15->lock, VAR_21);

 return VAR_17 ? VAR_18 : 0;
}

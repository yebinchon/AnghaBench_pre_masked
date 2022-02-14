
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int state; } ;
struct ehci_hcd {int lock; scalar_t__* reset_done; int port_c_suspend; TYPE_1__* regs; scalar_t__ has_ppcd; int hcs_params; } ;
struct TYPE_2__ {int * port_status; int status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ehci_hcd*,int *) ;
 struct ehci_hcd* FUNC_3 (struct usb_hcd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (struct usb_hcd *VAR_6, char *VAR_7)
{
 struct ehci_hcd *VAR_8 = FUNC_3 (VAR_6);
 u32 VAR_9, VAR_10 = 0;
 u32 VAR_11;
 int VAR_12, VAR_13, VAR_14 = 1;
 unsigned long VAR_15;
 u32 VAR_16 = 0;


 if (!FUNC_1(VAR_6->state))
  return 0;


 VAR_7 [0] = 0;
 VAR_12 = FUNC_0 (VAR_8->hcs_params);
 if (VAR_12 > 7) {
  VAR_7 [1] = 0;
  VAR_14++;
 }







 if (!VAR_4)
  VAR_11 = VAR_0 | VAR_2 | VAR_1;
 else
  VAR_11 = VAR_0 | VAR_2;





 FUNC_4 (&VAR_8->lock, VAR_15);


 if (VAR_8->has_ppcd)
  VAR_16 = FUNC_2(VAR_8, &VAR_8->regs->status) >> 16;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {

  if (VAR_8->has_ppcd && !(VAR_16 & (1 << VAR_13)))
   continue;
  VAR_9 = FUNC_2(VAR_8, &VAR_8->regs->port_status [VAR_13]);
  if ((VAR_9 & VAR_11) != 0 || FUNC_6(VAR_13, &VAR_8->port_c_suspend)
    || (VAR_8->reset_done[VAR_13] && FUNC_7(
     VAR_5, VAR_8->reset_done[VAR_13]))) {
   if (VAR_13 < 7)
       VAR_7 [0] |= 1 << (VAR_13 + 1);
   else
       VAR_7 [1] |= 1 << (VAR_13 - 7);
   VAR_10 = VAR_3;
  }
 }

 FUNC_5 (&VAR_8->lock, VAR_15);
 return VAR_10 ? VAR_14 : 0;
}

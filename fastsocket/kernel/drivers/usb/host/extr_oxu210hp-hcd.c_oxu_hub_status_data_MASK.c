
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int state; } ;
struct oxu_hcd {int lock; scalar_t__* reset_done; TYPE_1__* regs; int hcs_params; } ;
struct TYPE_2__ {int * port_status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct oxu_hcd* FUNC_2 (struct usb_hcd*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_8, char *VAR_9)
{
 struct oxu_hcd *VAR_10 = FUNC_2(VAR_8);
 u32 VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16 = 1;
 unsigned long VAR_17;


 if (!FUNC_1(VAR_8->state))
  return 0;


 VAR_9[0] = 0;
 VAR_14 = FUNC_0(VAR_10->hcs_params);
 if (VAR_14 > 7) {
  VAR_9[1] = 0;
  VAR_16++;
 }







 if (!VAR_6)
  VAR_12 = VAR_1 | VAR_3 | VAR_2;
 else
  VAR_12 = VAR_1 | VAR_3;




 FUNC_4(&VAR_10->lock, VAR_17);
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_11 = FUNC_3(&VAR_10->regs->port_status[VAR_15]);
  if (!(VAR_11 & VAR_0))
   VAR_10->reset_done[VAR_15] = 0;
  if ((VAR_11 & VAR_12) != 0 || ((VAR_11 & VAR_4) != 0 &&
    FUNC_6(VAR_7, VAR_10->reset_done[VAR_15]))) {
   if (VAR_15 < 7)
    VAR_9[0] |= 1 << (VAR_15 + 1);
   else
    VAR_9[1] |= 1 << (VAR_15 - 7);
   VAR_13 = VAR_5;
  }
 }

 FUNC_5(&VAR_10->lock, VAR_17);
 return VAR_13 ? VAR_16 : 0;
}

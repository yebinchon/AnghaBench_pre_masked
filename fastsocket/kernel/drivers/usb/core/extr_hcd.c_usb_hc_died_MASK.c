
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root_hub; int controller; } ;
struct usb_hcd {TYPE_1__ self; int flags; scalar_t__ rh_registered; struct usb_hcd* shared_hcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8 (struct usb_hcd *VAR_5)
{
 unsigned long VAR_6;

 FUNC_1 (VAR_5->self.controller, "HC died; cleaning up\n");

 FUNC_3 (&VAR_4, VAR_6);
 FUNC_0(VAR_2, &VAR_5->flags);
 FUNC_2(VAR_0, &VAR_5->flags);
 if (VAR_5->rh_registered) {
  FUNC_0(VAR_1, &VAR_5->flags);


  FUNC_7 (VAR_5->self.root_hub,
    VAR_3);
  FUNC_6 (VAR_5->self.root_hub);
 }
 if (FUNC_5(VAR_5) && VAR_5->shared_hcd) {
  VAR_5 = VAR_5->shared_hcd;
  if (VAR_5->rh_registered) {
   FUNC_0(VAR_1, &VAR_5->flags);


   FUNC_7(VAR_5->self.root_hub,
     VAR_3);
   FUNC_6(VAR_5->self.root_hub);
  }
 }
 FUNC_4 (&VAR_4, VAR_6);

}

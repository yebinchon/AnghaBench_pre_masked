
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
struct dummy {scalar_t__ rh_state; int lock; int timer; int urbp_list; } ;


 scalar_t__ VAR_0 ;
 struct dummy* FUNC_0 (struct usb_hcd*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_2, struct urb *VAR_3, int VAR_4)
{
 struct dummy *VAR_5;
 unsigned long VAR_6;
 int VAR_7;



 VAR_5 = FUNC_0 (VAR_2);
 FUNC_3 (&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (!VAR_7 && VAR_5->rh_state != VAR_0 &&
   !FUNC_1(&VAR_5->urbp_list))
  FUNC_2 (&VAR_5->timer, VAR_1);

 FUNC_4 (&VAR_5->lock, VAR_6);
 return VAR_7;
}

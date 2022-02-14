
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dev_data {int state; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dev_data*,char*,int) ;



 int FUNC_1 (struct dev_data*) ;
 struct dev_data* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct dev_data*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (struct usb_gadget *VAR_1)
{
 struct dev_data *VAR_2 = FUNC_2 (VAR_1);

 FUNC_0 (VAR_2, "suspended from state %d\n", VAR_2->state);
 FUNC_4 (&VAR_2->lock);
 switch (VAR_2->state) {
 case 129:
 case 130:
 case 128:
  FUNC_3 (VAR_2, VAR_0);
  FUNC_1 (VAR_2);

 default:
  break;
 }
 FUNC_5 (&VAR_2->lock);
}

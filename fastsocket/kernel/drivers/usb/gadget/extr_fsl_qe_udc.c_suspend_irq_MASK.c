
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qe_udc {int gadget; TYPE_1__* driver; int usb_state; int resume_state; } ;
struct TYPE_2__ {int (* suspend ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qe_udc *VAR_1)
{
 VAR_1->resume_state = VAR_1->usb_state;
 VAR_1->usb_state = VAR_0;


 if (VAR_1->driver->suspend)
  VAR_1->driver->suspend(&VAR_1->gadget);
}

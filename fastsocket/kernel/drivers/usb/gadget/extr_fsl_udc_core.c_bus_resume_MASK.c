
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_udc {int gadget; TYPE_1__* driver; scalar_t__ resume_state; scalar_t__ usb_state; } ;
struct TYPE_2__ {int (* resume ) (int *) ;} ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fsl_udc *VAR_0)
{
 VAR_0->usb_state = VAR_0->resume_state;
 VAR_0->resume_state = 0;


 if (VAR_0->driver->resume)
  VAR_0->driver->resume(&VAR_0->gadget);
}

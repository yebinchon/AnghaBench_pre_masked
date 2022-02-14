
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int speed; } ;
struct fsl_udc {int usb_state; int resume_state; TYPE_1__ gadget; } ;
struct TYPE_4__ {int portsc1; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fsl_udc *VAR_8)
{
 u32 VAR_9;


 if (!(FUNC_0(&VAR_7->portsc1) & VAR_0)) {

  VAR_9 = (FUNC_0(&VAR_7->portsc1)
    & VAR_1);
  switch (VAR_9) {
  case 129:
   VAR_8->gadget.speed = VAR_3;
   break;
  case 130:
   VAR_8->gadget.speed = VAR_2;
   break;
  case 128:
   VAR_8->gadget.speed = VAR_4;
   break;
  default:
   VAR_8->gadget.speed = VAR_5;
   break;
  }
 }


 if (!VAR_8->resume_state)
  VAR_8->usb_state = VAR_6;
}

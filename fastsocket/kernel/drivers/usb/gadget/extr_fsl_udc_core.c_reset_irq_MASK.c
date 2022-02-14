
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ a_alt_hnp_support; scalar_t__ a_hnp_support; scalar_t__ b_hnp_enable; } ;
struct fsl_udc {int usb_state; TYPE_1__ gadget; scalar_t__ remote_wakeup; int ep0_state; scalar_t__ ep0_dir; scalar_t__ resume_state; scalar_t__ device_address; } ;
struct TYPE_4__ {int portsc1; int endptflush; int endpointprime; int endptcomplete; int endptsetupstat; int deviceaddr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct fsl_udc*) ;
 int FUNC_4 (struct fsl_udc*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (struct fsl_udc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *) ;
 int VAR_6 ;
 int FUNC_8 (struct fsl_udc*) ;
 scalar_t__ FUNC_9 (int,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct fsl_udc *VAR_7)
{
 u32 VAR_8;
 unsigned long VAR_9;


 VAR_8 = FUNC_6(&VAR_5->deviceaddr);
 FUNC_7(VAR_8 & ~VAR_1, &VAR_5->deviceaddr);

 VAR_7->device_address = 0;


 VAR_7->resume_state = 0;
 VAR_7->ep0_dir = 0;
 VAR_7->ep0_state = VAR_4;
 VAR_7->remote_wakeup = 0;
 VAR_7->gadget.b_hnp_enable = 0;
 VAR_7->gadget.a_hnp_support = 0;
 VAR_7->gadget.a_alt_hnp_support = 0;


 VAR_8 = FUNC_6(&VAR_5->endptsetupstat);
 FUNC_7(VAR_8, &VAR_5->endptsetupstat);


 VAR_8 = FUNC_6(&VAR_5->endptcomplete);
 FUNC_7(VAR_8, &VAR_5->endptcomplete);

 VAR_9 = VAR_6 + 100;
 while (FUNC_6(&VAR_5->endpointprime)) {

  if (FUNC_9(VAR_6, VAR_9)) {
   FUNC_0("Timeout for reset\n");
   break;
  }
  FUNC_2();
 }


 FUNC_7(0xffffffff, &VAR_5->endptflush);

 if (FUNC_6(&VAR_5->portsc1) & VAR_0) {
  FUNC_1("Bus reset");


  FUNC_8(VAR_7);
  VAR_7->usb_state = VAR_3;
 } else {
  FUNC_1("Controller reset");


  FUNC_4(VAR_7);


  FUNC_8(VAR_7);

  FUNC_5(VAR_7);


  FUNC_3(VAR_7);
  VAR_7->usb_state = VAR_2;
 }
}

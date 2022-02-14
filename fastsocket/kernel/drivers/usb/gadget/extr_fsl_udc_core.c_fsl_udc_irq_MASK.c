
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fsl_udc {scalar_t__ usb_state; int lock; int local_setup_buff; scalar_t__ stopped; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int endptcomplete; int endptsetupstat; int portsc1; int usbsts; int usbintr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct fsl_udc*) ;
 TYPE_1__* VAR_12 ;
 int FUNC_2 (struct fsl_udc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct fsl_udc*) ;
 int FUNC_6 (struct fsl_udc*) ;
 int FUNC_7 (struct fsl_udc*,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct fsl_udc*) ;
 int FUNC_11 (struct fsl_udc*,int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_13, void *VAR_14)
{
 struct fsl_udc *VAR_15 = VAR_14;
 u32 VAR_16;
 irqreturn_t VAR_17 = VAR_2;
 unsigned long VAR_18;


 if (VAR_15->stopped)
  return VAR_2;
 FUNC_8(&VAR_15->lock, VAR_18);
 VAR_16 = FUNC_3(&VAR_12->usbsts) & FUNC_3(&VAR_12->usbintr);

 FUNC_4(VAR_16, &VAR_12->usbsts);




 if (VAR_15->usb_state == VAR_4)
  if ((FUNC_3(&VAR_12->portsc1) & VAR_3) == 0)
   FUNC_1(VAR_15);


 if (VAR_16 & VAR_6) {
  FUNC_0("Packet int");

  if (FUNC_3(&VAR_12->endptsetupstat) & VAR_0) {
   FUNC_11(VAR_15, 0,
     (u8 *) (&VAR_15->local_setup_buff));
   FUNC_7(VAR_15, &VAR_15->local_setup_buff);
   VAR_17 = VAR_1;
  }


  if (FUNC_3(&VAR_12->endptcomplete)) {
   FUNC_2(VAR_15);
   VAR_17 = VAR_1;
  }
 }


 if (VAR_16 & VAR_9) {
  VAR_17 = VAR_1;
 }


 if (VAR_16 & VAR_7) {
  FUNC_5(VAR_15);
  VAR_17 = VAR_1;
 }


 if (VAR_16 & VAR_8) {
  FUNC_6(VAR_15);
  VAR_17 = VAR_1;
 }


 if (VAR_16 & VAR_10) {
  FUNC_10(VAR_15);
  VAR_17 = VAR_1;
 }

 if (VAR_16 & (VAR_5 | VAR_11)) {
  FUNC_0("Error IRQ %x", VAR_16);
 }

 FUNC_9(&VAR_15->lock, VAR_18);
 return VAR_17;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qe_udc {int lock; TYPE_1__* usb_regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int usb_usber; int usb_usbmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qe_udc*) ;
 int FUNC_1 (struct qe_udc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct qe_udc*) ;
 int FUNC_5 (struct qe_udc*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct qe_udc*) ;
 int FUNC_9 (struct qe_udc*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct qe_udc *VAR_10 = (struct qe_udc *)VAR_9;
 u16 VAR_11;
 irqreturn_t VAR_12 = VAR_1;
 unsigned long VAR_13;

 FUNC_6(&VAR_10->lock, VAR_13);

 VAR_11 = FUNC_2(&VAR_10->usb_regs->usb_usber) &
  FUNC_2(&VAR_10->usb_regs->usb_usbmr);

 FUNC_3(&VAR_10->usb_regs->usb_usber, VAR_11);

 if (VAR_11 & VAR_3) {
  FUNC_1(VAR_10);
  VAR_11 &= ~VAR_3;
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_6) {
  FUNC_8(VAR_10);
  VAR_11 &= ~VAR_6;
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_5) {
  FUNC_5(VAR_10);
  VAR_11 &= ~VAR_5;
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_4) {
  FUNC_4(VAR_10);
  VAR_11 &= ~VAR_4;
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_2) {
  FUNC_0(VAR_10);
  VAR_11 &= ~VAR_2;
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_7) {
  FUNC_9(VAR_10);
  VAR_11 &= ~VAR_7;
  VAR_12 = VAR_0;
 }

 FUNC_7(&VAR_10->lock, VAR_13);

 return VAR_12;
}

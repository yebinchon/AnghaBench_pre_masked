
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct TYPE_2__ {unsigned int pin_state; } ;
struct oti6858_private {int lock; TYPE_1__ status; int intr_wait; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct oti6858_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_11, unsigned int VAR_12)
{
 struct oti6858_private *VAR_13 = FUNC_3(VAR_11);
 unsigned long VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17;

 FUNC_1(&VAR_13->lock, VAR_14);
 VAR_15 = VAR_13->status.pin_state;
 FUNC_2(&VAR_13->lock, VAR_14);

 while (1) {
  FUNC_4(VAR_13->intr_wait,
     VAR_13->status.pin_state != VAR_15);
  if (FUNC_0(VAR_10))
   return -VAR_0;

  FUNC_1(&VAR_13->lock, VAR_14);
  VAR_16 = VAR_13->status.pin_state & VAR_4;
  FUNC_2(&VAR_13->lock, VAR_14);

  VAR_17 = VAR_15 ^ VAR_16;

  if (((VAR_12 & VAR_9) && (VAR_17 & VAR_5)) ||
      ((VAR_12 & VAR_8) && (VAR_17 & VAR_3)) ||
      ((VAR_12 & VAR_6) && (VAR_17 & VAR_2)) ||
      ((VAR_12 & VAR_7) && (VAR_17 & VAR_1)))
   return 0;
  VAR_15 = VAR_16;
 }


 return 0;
}

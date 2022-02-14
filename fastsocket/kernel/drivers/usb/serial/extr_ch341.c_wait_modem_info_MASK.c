
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct ch341_private {int line_status; int multi_status_change; int lock; int delta_msr_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ch341_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_10, unsigned int VAR_11)
{
 struct ch341_private *VAR_12 = FUNC_4(VAR_10);
 unsigned long VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u8 VAR_17 = 0;

 FUNC_2(&VAR_12->lock, VAR_13);
 VAR_14 = VAR_12->line_status;
 VAR_12->multi_status_change = 0;
 FUNC_3(&VAR_12->lock, VAR_13);

 while (!VAR_17) {
  FUNC_0(&VAR_12->delta_msr_wait);

  if (FUNC_1(VAR_9))
   return -VAR_4;

  FUNC_2(&VAR_12->lock, VAR_13);
  VAR_15 = VAR_12->line_status;
  VAR_17 = VAR_12->multi_status_change;
  FUNC_3(&VAR_12->lock, VAR_13);

  VAR_16 = VAR_14 ^ VAR_15;

  if (((VAR_11 & VAR_8) && (VAR_16 & VAR_3)) ||
      ((VAR_11 & VAR_7) && (VAR_16 & VAR_2)) ||
      ((VAR_11 & VAR_5) && (VAR_16 & VAR_1)) ||
      ((VAR_11 & VAR_6) && (VAR_16 & VAR_0))) {
   return 0;
  }
  VAR_14 = VAR_15;
 }

 return 0;
}

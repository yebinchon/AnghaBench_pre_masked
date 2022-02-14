
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct spcp8x5_private {unsigned int line_status; int lock; int delta_msr_wait; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct spcp8x5_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_10,
       unsigned int VAR_11)
{
 struct spcp8x5_private *VAR_12 = FUNC_4(VAR_10);
 unsigned long VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;

 FUNC_2(&VAR_12->lock, VAR_13);
 VAR_14 = VAR_12->line_status;
 FUNC_3(&VAR_12->lock, VAR_13);

 while (1) {

  FUNC_0(&VAR_12->delta_msr_wait);


  if (FUNC_1(VAR_9))
   return -VAR_0;

  FUNC_2(&VAR_12->lock, VAR_13);
  VAR_15 = VAR_12->line_status;
  FUNC_3(&VAR_12->lock, VAR_13);

  VAR_16 = VAR_14^VAR_15;

  if (((VAR_11 & VAR_8) && (VAR_16 & VAR_4)) ||
      ((VAR_11 & VAR_7) && (VAR_16 & VAR_3)) ||
      ((VAR_11 & VAR_5) && (VAR_16 & VAR_2)) ||
      ((VAR_11 & VAR_6) && (VAR_16 & VAR_1)))
   return 0;

  VAR_14 = VAR_15;
 }

 return 0;
}

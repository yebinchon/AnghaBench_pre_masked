
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct spcp8x5_private {unsigned int line_control; unsigned int line_status; int lock; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct spcp8x5_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_12, struct file *VAR_13)
{
 struct usb_serial_port *VAR_14 = VAR_12->driver_data;
 struct spcp8x5_private *VAR_15 = FUNC_2(VAR_14);
 unsigned long VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;

 FUNC_0(&VAR_15->lock, VAR_16);
 VAR_17 = VAR_15->line_control;
 VAR_18 = VAR_15->line_status;
 FUNC_1(&VAR_15->lock, VAR_16);

 VAR_19 = ((VAR_17 & VAR_0) ? VAR_9 : 0)
    | ((VAR_17 & VAR_1) ? VAR_11 : 0)
    | ((VAR_18 & VAR_2) ? VAR_7 : 0)
    | ((VAR_18 & VAR_4) ? VAR_8 : 0)
    | ((VAR_18 & VAR_5) ? VAR_10 : 0)
    | ((VAR_18 & VAR_3) ? VAR_6 : 0);

 return VAR_19;
}

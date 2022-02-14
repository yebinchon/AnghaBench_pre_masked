
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct file {int dummy; } ;
struct ch341_private {int lock; int line_control; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ch341_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4, struct file *VAR_5,
     unsigned int VAR_6, unsigned int VAR_7)
{
 struct usb_serial_port *VAR_8 = VAR_4->driver_data;
 struct ch341_private *VAR_9 = FUNC_3(VAR_8);
 unsigned long VAR_10;
 u8 VAR_11;

 FUNC_1(&VAR_9->lock, VAR_10);
 if (VAR_6 & VAR_3)
  VAR_9->line_control |= VAR_1;
 if (VAR_6 & VAR_2)
  VAR_9->line_control |= VAR_0;
 if (VAR_7 & VAR_3)
  VAR_9->line_control &= ~VAR_1;
 if (VAR_7 & VAR_2)
  VAR_9->line_control &= ~VAR_0;
 VAR_11 = VAR_9->line_control;
 FUNC_2(&VAR_9->lock, VAR_10);

 return FUNC_0(VAR_8->serial->dev, VAR_11);
}

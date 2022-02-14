
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct pl2303_private {int lock; int line_control; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; int interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 struct pl2303_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_5, struct file *VAR_6,
      unsigned int VAR_7, unsigned int VAR_8)
{
 struct usb_serial_port *VAR_9 = VAR_5->driver_data;
 struct pl2303_private *VAR_10 = FUNC_4(VAR_9);
 unsigned long VAR_11;
 u8 VAR_12;

 if (!FUNC_3(VAR_9->serial->interface))
  return -VAR_2;

 FUNC_1(&VAR_10->lock, VAR_11);
 if (VAR_7 & VAR_4)
  VAR_10->line_control |= VAR_1;
 if (VAR_7 & VAR_3)
  VAR_10->line_control |= VAR_0;
 if (VAR_8 & VAR_4)
  VAR_10->line_control &= ~VAR_1;
 if (VAR_8 & VAR_3)
  VAR_10->line_control &= ~VAR_0;
 VAR_12 = VAR_10->line_control;
 FUNC_2(&VAR_10->lock, VAR_11);

 return FUNC_0(VAR_9->serial->dev, VAR_12);
}

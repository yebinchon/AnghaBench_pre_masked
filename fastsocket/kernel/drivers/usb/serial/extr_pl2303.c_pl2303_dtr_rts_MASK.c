
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct pl2303_private {int line_control; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pl2303_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_2, int VAR_3)
{
 struct pl2303_private *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 u8 VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);

 if (VAR_3)
  VAR_4->line_control |= (VAR_0 | VAR_1);
 else
  VAR_4->line_control &= ~(VAR_0 | VAR_1);
 VAR_6 = VAR_4->line_control;
 FUNC_2(&VAR_4->lock, VAR_5);
 FUNC_0(VAR_2->serial->dev, VAR_6);
}

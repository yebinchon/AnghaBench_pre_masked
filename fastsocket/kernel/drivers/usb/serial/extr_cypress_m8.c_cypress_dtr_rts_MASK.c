
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct cypress_private {int line_control; int cmd_ctrl; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct usb_serial_port*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cypress_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_2, int VAR_3)
{
 struct cypress_private *VAR_4 = FUNC_3(VAR_2);

 VAR_4 = FUNC_3(VAR_2);
 FUNC_1(&VAR_4->lock);
 if (VAR_3 == 0)
  VAR_4->line_control = 0;
 else
  VAR_4->line_control = VAR_0 | VAR_1;
 VAR_4->cmd_ctrl = 1;
 FUNC_2(&VAR_4->lock);
 FUNC_0(((void*)0), VAR_2, ((void*)0), 0);
}

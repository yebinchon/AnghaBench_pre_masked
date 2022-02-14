
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct usb_serial {int num_ports; struct usb_serial_port** port; } ;
struct oti6858_private {int * buf; int delayed_write_work; int delayed_setup_work; struct usb_serial_port* port; int intr_wait; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oti6858_private*) ;
 struct oti6858_private* FUNC_3 (int,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 struct oti6858_private* FUNC_7 (struct usb_serial_port*) ;
 int FUNC_8 (struct usb_serial_port*,struct oti6858_private*) ;

__attribute__((used)) static int FUNC_9(struct usb_serial *VAR_5)
{
 struct usb_serial_port *VAR_6 = VAR_5->port[0];
 struct oti6858_private *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_ports; ++VAR_8) {
  VAR_7 = FUNC_3(sizeof(struct oti6858_private), VAR_1);
  if (!VAR_7)
   break;
  VAR_7->buf = FUNC_4(VAR_2);
  if (VAR_7->buf == ((void*)0)) {
   FUNC_2(VAR_7);
   break;
  }

  FUNC_6(&VAR_7->lock);
  FUNC_1(&VAR_7->intr_wait);


  VAR_7->port = VAR_6;
  FUNC_0(&VAR_7->delayed_setup_work, VAR_4);
  FUNC_0(&VAR_7->delayed_write_work, VAR_3);

  FUNC_8(VAR_5->port[VAR_8], VAR_7);
 }
 if (VAR_8 == VAR_5->num_ports)
  return 0;

 for (--VAR_8; VAR_8 >= 0; --VAR_8) {
  VAR_7 = FUNC_7(VAR_5->port[VAR_8]);
  FUNC_5(VAR_7->buf);
  FUNC_2(VAR_7);
  FUNC_8(VAR_5->port[VAR_8], ((void*)0));
 }
 return -VAR_0;
}

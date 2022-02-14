
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {int dummy; } ;
struct list_head {int dummy; } ;
struct gs_port {struct list_head write_pool; TYPE_1__* port_usb; int port_tty; scalar_t__ n_read; struct list_head read_pool; } ;
struct TYPE_2__ {struct usb_ep* in; struct usb_ep* out; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ep*,struct list_head*,int ) ;
 int FUNC_1 (struct usb_ep*,struct list_head*) ;
 int VAR_1 ;
 unsigned int FUNC_2 (struct gs_port*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gs_port *VAR_3)
{
 struct list_head *VAR_4 = &VAR_3->read_pool;
 struct usb_ep *VAR_5 = VAR_3->port_usb->out;
 int VAR_6;
 unsigned VAR_7;







 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3->port_usb->in, &VAR_3->write_pool,
   VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_5, VAR_4);
  return VAR_6;
 }


 VAR_3->n_read = 0;
 VAR_7 = FUNC_2(VAR_3);


 if (VAR_7) {
  FUNC_3(VAR_3->port_tty);
 } else {
  FUNC_1(VAR_5, VAR_4);
  FUNC_1(VAR_3->port_usb->in, &VAR_3->write_pool);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}

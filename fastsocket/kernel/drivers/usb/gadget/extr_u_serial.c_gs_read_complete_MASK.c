
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int list; } ;
struct usb_ep {struct gs_port* driver_data; } ;
struct gs_port {int port_lock; int push; int read_queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct gs_port *VAR_2 = VAR_0->driver_data;


 FUNC_1(&VAR_2->port_lock);
 FUNC_0(&VAR_1->list, &VAR_2->read_queue);
 FUNC_3(&VAR_2->push);
 FUNC_2(&VAR_2->port_lock);
}

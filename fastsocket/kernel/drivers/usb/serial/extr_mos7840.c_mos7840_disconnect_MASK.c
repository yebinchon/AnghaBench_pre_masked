
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int num_ports; int * port; } ;
struct moschip_port {int zombie; int control_urb; int pool_lock; } ;


 int FUNC_0 (char*,...) ;
 struct moschip_port* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usb_serial *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;
 struct moschip_port *VAR_3;
 FUNC_0("%s", " disconnect :entering..........");

 if (!VAR_0) {
  FUNC_0("%s", "Invalid Handler");
  return;
 }






 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; ++VAR_1) {
  VAR_3 = FUNC_1(VAR_0->port[VAR_1]);
  FUNC_0 ("mos7840_port %d = %p", VAR_1, VAR_3);
  if (VAR_3) {
   FUNC_2(&VAR_3->pool_lock, VAR_2);
   VAR_3->zombie = 1;
   FUNC_3(&VAR_3->pool_lock, VAR_2);
   FUNC_4(VAR_3->control_urb);
  }
 }

 FUNC_0("%s", "Thank u :: ");

}

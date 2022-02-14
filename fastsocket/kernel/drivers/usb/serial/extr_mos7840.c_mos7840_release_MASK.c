
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int num_ports; int * port; } ;
struct moschip_port {struct moschip_port* dr; struct moschip_port* ctrl_buf; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct moschip_port*) ;
 struct moschip_port* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_serial *VAR_0)
{
 int VAR_1;
 struct moschip_port *VAR_2;
 FUNC_0("%s", " release :entering..........");

 if (!VAR_0) {
  FUNC_0("%s", "Invalid Handler");
  return;
 }






 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; ++VAR_1) {
  VAR_2 = FUNC_2(VAR_0->port[VAR_1]);
  FUNC_0("mos7840_port %d = %p", VAR_1, VAR_2);
  if (VAR_2) {
   FUNC_1(VAR_2->ctrl_buf);
   FUNC_1(VAR_2->dr);
   FUNC_1(VAR_2);
  }
 }

 FUNC_0("%s", "Thank u :: ");

}

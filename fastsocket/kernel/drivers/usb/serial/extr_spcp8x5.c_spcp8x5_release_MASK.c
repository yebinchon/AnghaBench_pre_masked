
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int num_ports; int * port; } ;
struct spcp8x5_private {int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct spcp8x5_private*) ;
 struct spcp8x5_private* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_serial *VAR_0)
{
 int VAR_1;
 struct spcp8x5_private *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++) {
  VAR_2 = FUNC_2(VAR_0->port[VAR_1]);
  if (VAR_2) {
   FUNC_0(VAR_2->buf);
   FUNC_1(VAR_2);
  }
 }
}

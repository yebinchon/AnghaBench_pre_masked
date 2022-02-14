
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int num_ports; int * port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_serial*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_serial *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; ++VAR_1)
  FUNC_0(FUNC_2(VAR_0->port[VAR_1]));


 FUNC_0(FUNC_1(VAR_0));
}

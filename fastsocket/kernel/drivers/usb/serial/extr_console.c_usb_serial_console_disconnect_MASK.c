
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {scalar_t__* port; } ;
struct TYPE_2__ {scalar_t__ port; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct usb_serial*) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(struct usb_serial *VAR_1)
{
 if (VAR_1 && VAR_1->port && VAR_1->port[0]
    && VAR_1->port[0] == VAR_0.port) {
  FUNC_0();
  FUNC_1(VAR_1);
 }
}

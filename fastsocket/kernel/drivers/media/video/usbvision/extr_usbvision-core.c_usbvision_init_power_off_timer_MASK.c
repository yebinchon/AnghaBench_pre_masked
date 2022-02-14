
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long data; int function; } ;
struct usb_usbvision {TYPE_1__ power_off_timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(struct usb_usbvision *VAR_1)
{
 FUNC_0(&VAR_1->power_off_timer);
 VAR_1->power_off_timer.data = (long)VAR_1;
 VAR_1->power_off_timer.function = VAR_0;
}

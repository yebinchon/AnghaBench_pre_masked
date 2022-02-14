
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int power_off_work; int power_off_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct usb_usbvision *VAR_3 = (void *)VAR_2;

 FUNC_1(VAR_0, "");
 FUNC_2(&VAR_3->power_off_timer);
 FUNC_0(&VAR_3->power_off_work, VAR_1);
 (void) FUNC_3(&VAR_3->power_off_work);
}

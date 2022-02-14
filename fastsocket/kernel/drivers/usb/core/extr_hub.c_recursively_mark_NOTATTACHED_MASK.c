
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int maxchild; scalar_t__ state; int discon_suspended; int active_duration; struct usb_device** children; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct usb_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->maxchild; ++VAR_4) {
  if (VAR_3->children[VAR_4])
   FUNC_0(VAR_3->children[VAR_4]);
 }
 if (VAR_3->state == VAR_1) {
  VAR_3->discon_suspended = 1;
  VAR_3->active_duration -= VAR_2;
 }
 VAR_3->state = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_se401 {int removed; int wq; scalar_t__ streaming; TYPE_1__* frame; int user; int vdev; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {void* grabstate; } ;


 void* VAR_0 ;
 struct usb_se401* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_se401*) ;
 int FUNC_2 (struct usb_interface*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_1)
{
 struct usb_se401 *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, ((void*)0));
 if (VAR_2) {
  FUNC_3(&VAR_2->vdev);
  if (!VAR_2->user)
   FUNC_1(VAR_2);
  else {
   VAR_2->frame[0].grabstate = VAR_0;
   VAR_2->frame[0].grabstate = VAR_0;

   VAR_2->streaming = 0;

   FUNC_4(&VAR_2->wq);
   VAR_2->removed = 1;
  }
 }
}

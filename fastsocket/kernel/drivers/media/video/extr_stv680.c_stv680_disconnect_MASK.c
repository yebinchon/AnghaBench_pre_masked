
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stv {int removed; int user; int * vdev; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int *) ;
 struct usb_stv* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*,int *) ;
 int FUNC_3 (struct usb_stv*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (struct usb_interface *VAR_0)
{
 struct usb_stv *VAR_1 = FUNC_1 (VAR_0);

 FUNC_2 (VAR_0, ((void*)0));

 if (VAR_1) {

  if (VAR_1->vdev) {
   FUNC_0(VAR_1->vdev);
   FUNC_4(VAR_1->vdev);
   VAR_1->vdev = ((void*)0);
  }
  if (!VAR_1->user) {
   FUNC_3 (VAR_1);
  } else {
   VAR_1->removed = 1;
  }
 }
}

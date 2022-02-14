
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct stk_camera {int vdev; int wait_frame; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct stk_camera*) ;
 struct stk_camera* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct stk_camera *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, ((void*)0));
 FUNC_1(VAR_1);

 FUNC_6(&VAR_1->wait_frame);

 FUNC_0("Syntek USB2.0 Camera release resources device %s\n",
   FUNC_4(&VAR_1->vdev));

 FUNC_5(&VAR_1->vdev);
}

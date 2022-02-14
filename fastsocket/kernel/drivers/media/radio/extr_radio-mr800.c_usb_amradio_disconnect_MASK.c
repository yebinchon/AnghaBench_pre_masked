
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct amradio_device {int removed; int v4l2_dev; int videodev; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct amradio_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct amradio_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->lock);
 VAR_1->removed = 1;
 FUNC_1(&VAR_1->lock);

 FUNC_3(VAR_0, ((void*)0));
 FUNC_5(VAR_1->videodev);
 FUNC_4(&VAR_1->v4l2_dev);
}

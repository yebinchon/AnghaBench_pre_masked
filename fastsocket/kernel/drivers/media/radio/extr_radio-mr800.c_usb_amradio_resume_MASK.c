
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct amradio_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amradio_device*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct amradio_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1)
{
 struct amradio_device *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 < 0)
  FUNC_2(&VAR_1->dev, "amradio_start failed\n");

 FUNC_1(&VAR_1->dev, "coming out of suspend..\n");

 return 0;
}

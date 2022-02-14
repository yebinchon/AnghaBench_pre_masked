
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dsbr100_device {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct dsbr100_device*) ;
 struct dsbr100_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1)
{
 struct dsbr100_device *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 if (VAR_2->status == VAR_0) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 < 0)
   FUNC_1(&VAR_1->dev, "dsbr100_start failed\n");
 }

 FUNC_0(&VAR_1->dev, "coming out of suspend..\n");

 return 0;
}

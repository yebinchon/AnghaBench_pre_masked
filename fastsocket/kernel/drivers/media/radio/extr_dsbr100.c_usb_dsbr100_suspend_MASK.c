
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dsbr100_device {scalar_t__ status; int lock; } ;
typedef int pm_message_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct dsbr100_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dsbr100_device* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_1, pm_message_t VAR_2)
{
 struct dsbr100_device *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 if (VAR_3->status == VAR_0) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 < 0)
   FUNC_1(&VAR_1->dev, "dsbr100_stop failed\n");







  FUNC_3(&VAR_3->lock);
  VAR_3->status = VAR_0;
  FUNC_4(&VAR_3->lock);
 }

 FUNC_0(&VAR_1->dev, "going into suspend..\n");

 return 0;
}

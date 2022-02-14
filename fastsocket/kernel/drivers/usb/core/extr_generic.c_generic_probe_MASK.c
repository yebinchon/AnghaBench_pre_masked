
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {scalar_t__ authorized; int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct usb_device*) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_0)
{
 int VAR_1, VAR_2;




 if (FUNC_2(VAR_0))
  ;
 else if (VAR_0->authorized == 0)
  FUNC_0(&VAR_0->dev, "Device is not authorized for usage\n");
 else {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 >= 0) {
   VAR_1 = FUNC_4(VAR_0, VAR_2);
   if (VAR_1) {
    FUNC_0(&VAR_0->dev, "can't set config #%d, error %d\n",
     VAR_2, VAR_1);


   }
  }
 }

 FUNC_3(VAR_0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct usb_device {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct usb_device*) ;

int FUNC_4(struct usb_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, &VAR_0);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto error;
 return VAR_3;
error:
 FUNC_3(VAR_1);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,unsigned int,void***) ;

int FUNC_1(struct usb_device *VAR_1, unsigned VAR_2, void *VAR_3)
{
 int VAR_4;
 void **VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;
 if (*VAR_5 != VAR_3)
  return -VAR_0;
 *VAR_5 = ((void*)0);
 return VAR_4;
}

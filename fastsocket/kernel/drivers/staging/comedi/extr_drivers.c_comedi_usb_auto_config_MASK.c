
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int *,int ) ;

int FUNC_2(struct usb_device *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0 == ((void*)0));
 return FUNC_1(&VAR_0->dev, VAR_1, ((void*)0), 0);
}

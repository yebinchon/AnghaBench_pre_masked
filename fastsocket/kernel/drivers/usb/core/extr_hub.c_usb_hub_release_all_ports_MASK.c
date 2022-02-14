
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int maxchild; } ;


 int FUNC_0 (struct usb_device*,int,void***) ;

void FUNC_1(struct usb_device *VAR_0, void *VAR_1)
{
 int VAR_2;
 void **VAR_3;

 VAR_2 = FUNC_0(VAR_0, 1, &VAR_3);
 if (VAR_2 == 0) {
  for (; VAR_2 < VAR_0->maxchild; (++VAR_2, ++VAR_3)) {
   if (*VAR_3 == VAR_1)
    *VAR_3 = ((void*)0);
  }
 }
}

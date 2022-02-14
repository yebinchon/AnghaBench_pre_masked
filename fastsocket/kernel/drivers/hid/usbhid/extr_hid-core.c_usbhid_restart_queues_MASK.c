
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {scalar_t__ urbout; } ;


 int FUNC_0 (struct usbhid_device*) ;
 int FUNC_1 (struct usbhid_device*) ;

__attribute__((used)) static void FUNC_2(struct usbhid_device *VAR_0)
{
 if (VAR_0->urbout)
  FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}

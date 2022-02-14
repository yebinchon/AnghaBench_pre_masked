
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;
struct wusbhc {TYPE_2__ usb_hcd; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct wusbhc*) ;
 int FUNC_4 (struct wusbhc*) ;

int FUNC_5(struct wusbhc *VAR_1)
{
 int VAR_2 = 0;
 struct device *VAR_3 = VAR_1->usb_hcd.self.controller;

 VAR_2 = FUNC_1(FUNC_3(VAR_1), &VAR_0);
 if (VAR_2 < 0) {
  FUNC_0(VAR_3, "Cannot register WUSBHC attributes: %d\n", VAR_2);
  goto error_create_attr_group;
 }

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0)
  goto error_pal_register;
 return 0;

error_pal_register:
 FUNC_2(FUNC_3(VAR_1), &VAR_0);
error_create_attr_group:
 return VAR_2;
}

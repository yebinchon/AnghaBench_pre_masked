
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_driver {int dummy; } ;
struct TYPE_2__ {struct usb_driver* usb; } ;
struct drm_driver {int * bus; TYPE_1__ kdriver; int device_list; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_driver*) ;

int FUNC_3(struct drm_driver *VAR_1, struct usb_driver *VAR_2)
{
 int VAR_3;
 FUNC_0("\n");

 FUNC_1(&VAR_1->device_list);
 VAR_1->kdriver.usb = VAR_2;
 VAR_1->bus = &VAR_0;

 VAR_3 = FUNC_2(VAR_2);
 return VAR_3;
}

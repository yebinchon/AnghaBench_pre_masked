
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {struct platform_device* platform_device; } ;
struct drm_driver {int device_list; int * bus; TYPE_1__ kdriver; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*,struct drm_driver*) ;
 int VAR_0 ;

int FUNC_3(struct drm_driver *VAR_1, struct platform_device *VAR_2)
{
 FUNC_0("\n");

 VAR_1->kdriver.platform_device = VAR_2;
 VAR_1->bus = &VAR_0;
 FUNC_1(&VAR_1->device_list);
 return FUNC_2(VAR_2, VAR_1);
}

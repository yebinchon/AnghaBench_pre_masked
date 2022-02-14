
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_close {int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_file*,int ) ;

int
FUNC_1(struct drm_device *VAR_2, void *VAR_3,
      struct drm_file *VAR_4)
{
 struct drm_gem_close *VAR_5 = VAR_3;
 int VAR_6;

 if (!(VAR_2->driver->driver_features & VAR_0))
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4, VAR_5->handle);

 return VAR_6;
}

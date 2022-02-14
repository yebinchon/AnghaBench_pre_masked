
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {scalar_t__ type; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct device {int * type; } ;
struct TYPE_2__ {int (* resume ) (struct drm_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*) ;
 struct drm_minor* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3)
{
 if (VAR_3->type == &VAR_2) {
  struct drm_minor *VAR_4 = FUNC_2(VAR_3);
  struct drm_device *VAR_5 = VAR_4->dev;

  if (VAR_4->type == VAR_1 &&
      !FUNC_0(VAR_5, VAR_0) &&
      VAR_5->driver->resume)
   return VAR_5->driver->resume(VAR_5);
 }
 return 0;
}

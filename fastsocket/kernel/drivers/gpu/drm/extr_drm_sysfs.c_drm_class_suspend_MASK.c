
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {scalar_t__ type; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct device {int * type; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int (* suspend ) (struct drm_device*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int ) ;
 struct drm_minor* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, pm_message_t VAR_4)
{
 if (VAR_3->type == &VAR_2) {
  struct drm_minor *VAR_5 = FUNC_2(VAR_3);
  struct drm_device *VAR_6 = VAR_5->dev;

  if (VAR_5->type == VAR_1 &&
      !FUNC_0(VAR_6, VAR_0) &&
      VAR_6->driver->suspend)
   return VAR_6->driver->suspend(VAR_6, VAR_4);
 }
 return 0;
}

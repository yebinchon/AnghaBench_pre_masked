
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* dirty_info_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char*,int ,int ) ;

int FUNC_2(struct drm_device *VAR_2)
{
 struct drm_property *VAR_3;

 if (VAR_2->mode_config.dirty_info_property)
  return 0;

 VAR_3 =
  FUNC_1(VAR_2, VAR_0,
        "dirty",
        VAR_1,
        FUNC_0(VAR_1));
 VAR_2->mode_config.dirty_info_property = VAR_3;

 return 0;
}

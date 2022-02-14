
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* dpms_property; struct drm_property* edid_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_property* FUNC_1 (struct drm_device*,int,char*,int ) ;
 struct drm_property* FUNC_2 (struct drm_device*,int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3)
{
 struct drm_property *VAR_4;
 struct drm_property *VAR_5;




 VAR_4 = FUNC_1(VAR_3, VAR_0 |
       VAR_1,
       "EDID", 0);
 VAR_3->mode_config.edid_property = VAR_4;

 VAR_5 = FUNC_2(VAR_3, 0,
       "DPMS", VAR_2,
       FUNC_0(VAR_2));
 VAR_3->mode_config.dpms_property = VAR_5;

 return 0;
}

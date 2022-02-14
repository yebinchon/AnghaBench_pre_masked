
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* dvi_i_subconnector_property; struct drm_property* dvi_i_select_subconnector_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char*,int ,int ) ;

int FUNC_2(struct drm_device *VAR_3)
{
 struct drm_property *VAR_4;
 struct drm_property *VAR_5;

 if (VAR_3->mode_config.dvi_i_select_subconnector_property)
  return 0;

 VAR_4 =
  FUNC_1(VAR_3, 0,
        "select subconnector",
        VAR_1,
        FUNC_0(VAR_1));
 VAR_3->mode_config.dvi_i_select_subconnector_property = VAR_4;

 VAR_5 = FUNC_1(VAR_3, VAR_0,
        "subconnector",
        VAR_2,
        FUNC_0(VAR_2));
 VAR_3->mode_config.dvi_i_subconnector_property = VAR_5;

 return 0;
}

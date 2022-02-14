
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {scalar_t__ refresh; } ;
struct intel_tv {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct intel_tv* FUNC_2 (struct drm_connector*) ;
 struct tv_mode* FUNC_3 (struct intel_tv*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_connector *VAR_2,
      struct drm_display_mode *VAR_3)
{
 struct intel_tv *VAR_4 = FUNC_2(VAR_2);
 const struct tv_mode *VAR_5 = FUNC_3(VAR_4);


 if (VAR_5 && FUNC_0(VAR_5->refresh - FUNC_1(VAR_3) * 1000)
    < 1000)
  return VAR_1;

 return VAR_0;
}

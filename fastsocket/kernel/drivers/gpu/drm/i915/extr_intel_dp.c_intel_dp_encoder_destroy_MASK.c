
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int panel_vdd_work; int adapter; } ;
struct intel_digital_port {struct intel_dp dp; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_encoder*) ;
 struct intel_digital_port* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int *) ;
 struct drm_device* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 scalar_t__ FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_digital_port*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_encoder *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_2(VAR_0);
 struct intel_dp *VAR_2 = &VAR_1->dp;
 struct drm_device *VAR_3 = FUNC_4(VAR_2);

 FUNC_3(&VAR_2->adapter);
 FUNC_1(VAR_0);
 if (FUNC_6(VAR_2)) {
  FUNC_0(&VAR_2->panel_vdd_work);
  FUNC_8(&VAR_3->mode_config.mutex);
  FUNC_5(VAR_2);
  FUNC_9(&VAR_3->mode_config.mutex);
 }
 FUNC_7(VAR_1);
}

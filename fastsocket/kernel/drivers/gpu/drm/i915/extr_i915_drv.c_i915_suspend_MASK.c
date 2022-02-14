
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ switch_power_state; int pdev; int dev_private; } ;
struct TYPE_3__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct drm_device *VAR_5, pm_message_t VAR_6)
{
 int VAR_7;

 if (!VAR_5 || !VAR_5->dev_private) {
  FUNC_0("dev: %p\n", VAR_5);
  FUNC_0("DRM not initialized, aborting suspend.\n");
  return -VAR_1;
 }

 if (VAR_6.event == VAR_3)
  return 0;


 if (VAR_5->switch_power_state == VAR_0)
  return 0;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_6.event == VAR_4) {

  FUNC_2(VAR_5->pdev);
  FUNC_3(VAR_5->pdev, VAR_2);
 }

 return 0;
}

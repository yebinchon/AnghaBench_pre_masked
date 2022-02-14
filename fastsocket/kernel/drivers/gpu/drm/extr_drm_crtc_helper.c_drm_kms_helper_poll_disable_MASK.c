
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_poll_slow_work; int poll_enabled; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drm_device *VAR_0)
{
 if (!VAR_0->mode_config.poll_enabled)
  return;
 FUNC_0(&VAR_0->mode_config.output_poll_slow_work);
}

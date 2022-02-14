
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int poll_enabled; int output_poll_slow_work; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct drm_device *VAR_2)
{
 FUNC_2(VAR_0);
 FUNC_0(&VAR_2->mode_config.output_poll_slow_work,
          &VAR_1);
 VAR_2->mode_config.poll_enabled = 1;

 FUNC_1(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {scalar_t__ cce_mode; scalar_t__ cce_running; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_r128_private_t *VAR_4 = VAR_1->dev_private;
 FUNC_1("\n");

 FUNC_2(VAR_1, VAR_3);

 FUNC_0(VAR_4);

 if (VAR_4->cce_running || VAR_4->cce_mode == VAR_0) {
  FUNC_1("while CCE running\n");
  return 0;
 }

 FUNC_3(VAR_4);

 return 0;
}

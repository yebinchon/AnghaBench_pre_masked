
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int flags; scalar_t__ cp_running; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 FUNC_0("\n");

 FUNC_1(VAR_3, VAR_5);

 if (!VAR_6) {
  FUNC_0("called before init done\n");
  return -VAR_1;
 }

 if ((VAR_6->flags & VAR_2) >= VAR_0)
  FUNC_2(VAR_6);
 else
  FUNC_3(VAR_6);


 VAR_6->cp_running = 0;

 return 0;
}

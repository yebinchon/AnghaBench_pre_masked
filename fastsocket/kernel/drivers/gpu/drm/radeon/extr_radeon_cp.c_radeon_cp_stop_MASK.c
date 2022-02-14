
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_8__ {int flags; int cp_running; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_9__ {scalar_t__ idle; scalar_t__ flush; } ;
typedef TYPE_2__ drm_radeon_cp_stop_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct drm_device*) ;

int FUNC_9(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_2->dev_private;
 drm_radeon_cp_stop_t *VAR_6 = VAR_3;
 int VAR_7;
 FUNC_0("\n");

 FUNC_1(VAR_2, VAR_4);

 if (!VAR_5->cp_running)
  return 0;




 if (VAR_6->flush) {
  FUNC_5(VAR_5);
 }




 if (VAR_6->idle) {
  if ((VAR_5->flags & VAR_1) >= VAR_0)
   VAR_7 = FUNC_2(VAR_5);
  else
   VAR_7 = FUNC_6(VAR_5);
  if (VAR_7)
   return VAR_7;
 }





 if ((VAR_5->flags & VAR_1) >= VAR_0)
  FUNC_3(VAR_5);
 else
  FUNC_7(VAR_5);


 if ((VAR_5->flags & VAR_1) >= VAR_0)
  FUNC_4(VAR_2);
 else
  FUNC_8(VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_r128_private_t ;
struct TYPE_2__ {scalar_t__ idle; scalar_t__ flush; } ;
typedef TYPE_1__ drm_r128_cce_stop_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 drm_r128_private_t *VAR_3 = VAR_0->dev_private;
 drm_r128_cce_stop_t *VAR_4 = VAR_1;
 int VAR_5;
 FUNC_1("\n");

 FUNC_2(VAR_0, VAR_2);

 FUNC_0(VAR_3);




 if (VAR_4->flush)
  FUNC_3(VAR_3);




 if (VAR_4->idle) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5)
   return VAR_5;
 }





 FUNC_5(VAR_3);


 FUNC_6(VAR_0);

 return 0;
}

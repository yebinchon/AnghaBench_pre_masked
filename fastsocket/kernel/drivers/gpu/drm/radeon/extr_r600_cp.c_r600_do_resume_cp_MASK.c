
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,TYPE_1__*,struct drm_file*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_2->dev_private;

 FUNC_0("\n");
 if (((VAR_4->flags & VAR_1) >= VAR_0)) {
  FUNC_6(VAR_2);
  FUNC_5(VAR_4);
 } else {
  FUNC_4(VAR_2);
  FUNC_2(VAR_4);
 }
 FUNC_1(VAR_2, VAR_4, VAR_3);
 FUNC_3(VAR_2);

 return 0;
}

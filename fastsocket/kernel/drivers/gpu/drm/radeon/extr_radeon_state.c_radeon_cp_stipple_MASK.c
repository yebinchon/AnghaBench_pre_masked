
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
struct TYPE_2__ {int mask; } ;
typedef TYPE_1__ drm_radeon_stipple_t ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int **,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_1->dev_private;
 drm_radeon_stipple_t *VAR_5 = VAR_2;
 u32 VAR_6[32];

 FUNC_2(VAR_1, VAR_3);

 if (FUNC_1(&VAR_6, VAR_5->mask, 32 * sizeof(u32)))
  return -VAR_0;

 FUNC_3(VAR_4);

 FUNC_4(VAR_1, VAR_6);

 FUNC_0();
 return 0;
}

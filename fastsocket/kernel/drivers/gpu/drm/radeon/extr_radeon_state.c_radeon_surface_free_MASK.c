
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
struct TYPE_2__ {int address; } ;
typedef TYPE_1__ drm_radeon_surface_free_t ;
typedef int drm_radeon_private_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_file*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_1->dev_private;
 drm_radeon_surface_free_t *VAR_5 = VAR_2;

 if (FUNC_0(VAR_3, VAR_4, VAR_5->address))
  return -VAR_0;
 else
  return 0;
}

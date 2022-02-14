
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int addr_space_offset; } ;
struct nouveau_bo {TYPE_1__ bo; } ;
struct drm_gem_object {struct nouveau_bo* driver_private; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;

int
FUNC_2(struct drm_file *VAR_1,
    struct drm_device *VAR_2,
    uint32_t VAR_3, uint64_t *VAR_4)
{
 struct drm_gem_object *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_5) {
  struct nouveau_bo *VAR_6 = VAR_5->driver_private;
  *VAR_4 = VAR_6->bo.addr_space_offset;
  FUNC_1(VAR_5);
  return 0;
 }

 return -VAR_0;
}

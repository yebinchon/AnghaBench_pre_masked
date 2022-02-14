
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_file*,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_device*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;

__attribute__((used)) static int
FUNC_8(struct drm_file *VAR_3,
  struct drm_device *VAR_4,
  uint64_t VAR_5,
  uint32_t *VAR_6)
{
 struct drm_i915_gem_object *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_5 = FUNC_6(VAR_5, VAR_2);
 if (VAR_5 == 0)
  return -VAR_0;


 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_3, &VAR_7->base, &VAR_9);
 if (VAR_8) {
  FUNC_1(&VAR_7->base);
  FUNC_4(VAR_4->dev_private, VAR_7->base.size);
  FUNC_5(VAR_7);
  return VAR_8;
 }


 FUNC_2(&VAR_7->base);
 FUNC_7(VAR_7);

 *VAR_6 = VAR_9;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mappable_end; } ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct drm_i915_gem_init {int gtt_start; int gtt_end; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct drm_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct drm_device *VAR_4, void *VAR_5,
      struct drm_file *VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_4->dev_private;
 struct drm_i915_gem_init *VAR_8 = VAR_5;

 if (FUNC_1(VAR_4, VAR_0))
  return -VAR_2;

 if (VAR_8->gtt_start >= VAR_8->gtt_end ||
     (VAR_8->gtt_end | VAR_8->gtt_start) & (VAR_3 - 1))
  return -VAR_1;


 if (FUNC_0(VAR_4)->gen >= 5)
  return -VAR_2;

 FUNC_3(&VAR_4->struct_mutex);
 FUNC_2(VAR_4, VAR_8->gtt_start, VAR_8->gtt_end,
      VAR_8->gtt_end);
 VAR_7->gtt.mappable_end = VAR_8->gtt_end;
 FUNC_4(&VAR_4->struct_mutex);

 return 0;
}

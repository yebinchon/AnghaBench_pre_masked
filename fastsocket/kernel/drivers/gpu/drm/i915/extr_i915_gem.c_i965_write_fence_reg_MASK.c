
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct drm_i915_gem_object {int gtt_offset; int stride; scalar_t__ tiling_mode; TYPE_1__* gtt_space; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_4__ {int gen; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_7, int VAR_8,
     struct drm_i915_gem_object *VAR_9)
{
 drm_i915_private_t *VAR_10 = VAR_7->dev_private;
 int VAR_11;
 int VAR_12;
 uint64_t VAR_13;

 if (FUNC_1(VAR_7)->gen >= 6) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_6;
 } else {
  VAR_11 = VAR_0;
  VAR_12 = VAR_3;
 }

 if (VAR_9) {
  u32 VAR_14 = VAR_9->gtt_space->size;

  VAR_13 = (uint64_t)((VAR_9->gtt_offset + VAR_14 - 4096) &
     0xfffff000) << 32;
  VAR_13 |= VAR_9->gtt_offset & 0xfffff000;
  VAR_13 |= (uint64_t)((VAR_9->stride / 128) - 1) << VAR_12;
  if (VAR_9->tiling_mode == VAR_2)
   VAR_13 |= 1 << VAR_5;
  VAR_13 |= VAR_4;
 } else
  VAR_13 = 0;

 VAR_11 += VAR_8 * 8;
 FUNC_0(VAR_11, VAR_13);
 FUNC_2(VAR_11);
}

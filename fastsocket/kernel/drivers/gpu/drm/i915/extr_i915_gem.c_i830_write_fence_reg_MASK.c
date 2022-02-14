
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct drm_i915_gem_object {int gtt_offset; int stride; scalar_t__ tiling_mode; TYPE_1__* gtt_space; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_6, int VAR_7,
    struct drm_i915_gem_object *VAR_8)
{
 drm_i915_private_t *VAR_9 = VAR_6->dev_private;
 uint32_t VAR_10;

 if (VAR_8) {
  u32 VAR_11 = VAR_8->gtt_space->size;
  uint32_t VAR_12;

  FUNC_3((VAR_8->gtt_offset & ~VAR_3) ||
       (VAR_11 & -VAR_11) != VAR_11 ||
       (VAR_8->gtt_offset & (VAR_11 - 1)),
       "object 0x%08x not 512K or pot-size 0x%08x aligned\n",
       VAR_8->gtt_offset, VAR_11);

  VAR_12 = VAR_8->stride / 128;
  VAR_12 = FUNC_4(VAR_12) - 1;

  VAR_10 = VAR_8->gtt_offset;
  if (VAR_8->tiling_mode == VAR_5)
   VAR_10 |= 1 << VAR_4;
  VAR_10 |= FUNC_0(VAR_11);
  VAR_10 |= VAR_12 << VAR_1;
  VAR_10 |= VAR_2;
 } else
  VAR_10 = 0;

 FUNC_1(VAR_0 + VAR_7 * 4, VAR_10);
 FUNC_2(VAR_0 + VAR_7 * 4);
}

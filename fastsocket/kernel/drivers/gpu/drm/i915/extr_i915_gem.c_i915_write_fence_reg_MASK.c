
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_gem_object {int gtt_offset; scalar_t__ tiling_mode; int stride; int map_and_fenceable; TYPE_1__* gtt_space; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_7, int VAR_8,
     struct drm_i915_gem_object *VAR_9)
{
 drm_i915_private_t *VAR_10 = VAR_7->dev_private;
 u32 VAR_11;

 if (VAR_9) {
  u32 VAR_12 = VAR_9->gtt_space->size;
  int VAR_13;
  int VAR_14;

  FUNC_4((VAR_9->gtt_offset & ~VAR_5) ||
       (VAR_12 & -VAR_12) != VAR_12 ||
       (VAR_9->gtt_offset & (VAR_12 - 1)),
       "object 0x%08x [fenceable? %d] not 1M or pot-size (0x%08x) aligned\n",
       VAR_9->gtt_offset, VAR_9->map_and_fenceable, VAR_12);

  if (VAR_9->tiling_mode == VAR_6 && FUNC_0(VAR_7))
   VAR_14 = 128;
  else
   VAR_14 = 512;


  VAR_13 = VAR_9->stride / VAR_14;
  VAR_13 = FUNC_5(VAR_13) - 1;

  VAR_11 = VAR_9->gtt_offset;
  if (VAR_9->tiling_mode == VAR_6)
   VAR_11 |= 1 << VAR_4;
  VAR_11 |= FUNC_1(VAR_12);
  VAR_11 |= VAR_13 << VAR_2;
  VAR_11 |= VAR_3;
 } else
  VAR_11 = 0;

 if (VAR_8 < 8)
  VAR_8 = VAR_0 + VAR_8 * 4;
 else
  VAR_8 = VAR_1 + (VAR_8 - 8) * 4;

 FUNC_2(VAR_8, VAR_11);
 FUNC_3(VAR_8);
}

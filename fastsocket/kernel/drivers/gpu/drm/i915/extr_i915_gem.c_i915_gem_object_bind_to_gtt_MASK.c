
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_mm_node {int start; int size; } ;
struct TYPE_6__ {int size; struct drm_device* dev; } ;
struct drm_i915_gem_object {int gtt_offset; int map_and_fenceable; TYPE_2__ base; struct drm_mm_node* gtt_space; int mm_list; int gtt_list; int cache_level; int tiling_mode; } ;
struct drm_device {TYPE_4__* dev_private; } ;
struct TYPE_7__ {scalar_t__ mappable_end; scalar_t__ total; } ;
struct TYPE_5__ {int inactive_list; int bound_list; int gtt_space; } ;
struct TYPE_8__ {TYPE_3__ gtt; TYPE_1__ mm; } ;
typedef TYPE_4__ drm_i915_private_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct drm_mm_node*,int,unsigned int,int ) ;
 int FUNC_3 (int *,struct drm_mm_node*,int,unsigned int,int ,int ,scalar_t__) ;
 int FUNC_4 (struct drm_mm_node*) ;
 int FUNC_5 (struct drm_device*,int,unsigned int,int ,int,int) ;
 int FUNC_6 (struct drm_device*,int,int ,int) ;
 int FUNC_7 (struct drm_device*,int,int ) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int FUNC_9 (struct drm_i915_gem_object*) ;
 int FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (struct drm_i915_gem_object*) ;
 int FUNC_12 (struct drm_device*,struct drm_mm_node*,int ) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct drm_i915_gem_object*,int) ;

__attribute__((used)) static int
FUNC_19(struct drm_i915_gem_object *VAR_4,
       unsigned VAR_5,
       bool VAR_6,
       bool VAR_7)
{
 struct drm_device *VAR_8 = VAR_4->base.dev;
 drm_i915_private_t *VAR_9 = VAR_8->dev_private;
 struct drm_mm_node *VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 bool VAR_15, VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(VAR_8,
        VAR_4->base.size,
        VAR_4->tiling_mode);
 VAR_13 = FUNC_6(VAR_8,
           VAR_4->base.size,
           VAR_4->tiling_mode, 1);
 VAR_14 =
  FUNC_6(VAR_8,
          VAR_4->base.size,
          VAR_4->tiling_mode, 0);

 if (VAR_5 == 0)
  VAR_5 = VAR_6 ? VAR_13 :
      VAR_14;
 if (VAR_6 && VAR_5 & (VAR_13 - 1)) {
  FUNC_0("Invalid object alignment requested %u\n", VAR_5);
  return -VAR_1;
 }

 VAR_11 = VAR_6 ? VAR_12 : VAR_4->base.size;




 if (VAR_4->base.size >
     (VAR_6 ? VAR_9->gtt.mappable_end : VAR_9->gtt.total)) {
  FUNC_0("Attempting to bind an object larger than the aperture\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_9(VAR_4);
 if (VAR_17)
  return VAR_17;

 FUNC_10(VAR_4);

 VAR_10 = FUNC_15(sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_11(VAR_4);
  return -VAR_2;
 }

 search_free:
 if (VAR_6)
  VAR_17 = FUNC_3(&VAR_9->mm.gtt_space, VAR_10,
         VAR_11, VAR_5, VAR_4->cache_level,
         0, VAR_9->gtt.mappable_end);
 else
  VAR_17 = FUNC_2(&VAR_9->mm.gtt_space, VAR_10,
       VAR_11, VAR_5, VAR_4->cache_level);
 if (VAR_17) {
  VAR_17 = FUNC_5(VAR_8, VAR_11, VAR_5,
            VAR_4->cache_level,
            VAR_6,
            VAR_7);
  if (VAR_17 == 0)
   goto search_free;

  FUNC_11(VAR_4);
  FUNC_14(VAR_10);
  return VAR_17;
 }
 if (FUNC_1(!FUNC_12(VAR_8, VAR_10, VAR_4->cache_level))) {
  FUNC_11(VAR_4);
  FUNC_4(VAR_10);
  return -VAR_1;
 }

 VAR_17 = FUNC_8(VAR_4);
 if (VAR_17) {
  FUNC_11(VAR_4);
  FUNC_4(VAR_10);
  return VAR_17;
 }

 FUNC_17(&VAR_4->gtt_list, &VAR_9->mm.bound_list);
 FUNC_16(&VAR_4->mm_list, &VAR_9->mm.inactive_list);

 VAR_4->gtt_space = VAR_10;
 VAR_4->gtt_offset = VAR_10->start;

 VAR_16 =
  VAR_10->size == VAR_12 &&
  (VAR_10->start & (VAR_13 - 1)) == 0;

 VAR_15 =
  VAR_4->gtt_offset + VAR_4->base.size <= VAR_9->gtt.mappable_end;

 VAR_4->map_and_fenceable = VAR_15 && VAR_16;

 FUNC_11(VAR_4);
 FUNC_18(VAR_4, VAR_6);
 FUNC_13(VAR_8);
 return 0;
}

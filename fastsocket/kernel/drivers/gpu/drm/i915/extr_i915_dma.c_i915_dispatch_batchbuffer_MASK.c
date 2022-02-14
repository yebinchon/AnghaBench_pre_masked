
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_clip_rect {int dummy; } ;
struct TYPE_4__ {int num_cliprects; int start; int used; int DR4; int DR1; } ;
typedef TYPE_1__ drm_i915_batchbuffer_t ;
struct TYPE_5__ {int gen; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct drm_device*,struct drm_clip_rect*,int ,int ) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;

__attribute__((used)) static int FUNC_12(struct drm_device * VAR_9,
         drm_i915_batchbuffer_t * VAR_10,
         struct drm_clip_rect *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_9->dev_private;
 int VAR_13 = VAR_10->num_cliprects;
 int VAR_14, VAR_15, VAR_16;

 if ((VAR_10->start | VAR_10->used) & 0x7) {
  FUNC_2("alignment");
  return -VAR_0;
 }

 FUNC_11(VAR_9);

 VAR_15 = VAR_13 ? VAR_13 : 1;
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  if (VAR_14 < VAR_13) {
   VAR_16 = FUNC_9(VAR_9, &VAR_11[VAR_14],
         VAR_10->DR1, VAR_10->DR4);
   if (VAR_16)
    return VAR_16;
  }

  if (!FUNC_7(VAR_9) && !FUNC_4(VAR_9)) {
   VAR_16 = FUNC_1(2);
   if (VAR_16)
    return VAR_16;

   if (FUNC_3(VAR_9)->gen >= 4) {
    FUNC_8(VAR_2 | (2 << 6) | VAR_4);
    FUNC_8(VAR_10->start);
   } else {
    FUNC_8(VAR_2 | (2 << 6));
    FUNC_8(VAR_10->start | VAR_3);
   }
  } else {
   VAR_16 = FUNC_1(4);
   if (VAR_16)
    return VAR_16;

   FUNC_8(VAR_1);
   FUNC_8(VAR_10->start | VAR_3);
   FUNC_8(VAR_10->start + VAR_10->used - 4);
   FUNC_8(0);
  }
  FUNC_0();
 }


 if (FUNC_5(VAR_9) || FUNC_6(VAR_9)) {
  if (FUNC_1(2) == 0) {
   FUNC_8(VAR_5 | VAR_8 | VAR_6);
   FUNC_8(VAR_7);
   FUNC_0();
  }
 }

 FUNC_10(VAR_9);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_clip_rect {int dummy; } ;
struct TYPE_3__ {int num_cliprects; int sz; int DR4; int DR1; } ;
typedef TYPE_1__ drm_i915_cmdbuffer_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_clip_rect*,int ,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,void*,int) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device * VAR_1,
       drm_i915_cmdbuffer_t *VAR_2,
       struct drm_clip_rect *VAR_3,
       void *VAR_4)
{
 int VAR_5 = VAR_2->num_cliprects;
 int VAR_6 = 0, VAR_7, VAR_8;

 if (VAR_2->sz & 0x3) {
  FUNC_0("alignment");
  return -VAR_0;
 }

 FUNC_4(VAR_1);

 VAR_7 = VAR_5 ? VAR_5 : 1;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_6 < VAR_5) {
   VAR_8 = FUNC_1(VAR_1, &VAR_3[VAR_6],
         VAR_2->DR1, VAR_2->DR4);
   if (VAR_8)
    return VAR_8;
  }

  VAR_8 = FUNC_3(VAR_1, VAR_4, VAR_2->sz / 4);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_2(VAR_1);
 return 0;
}

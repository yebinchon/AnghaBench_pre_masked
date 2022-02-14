
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int next_seqno; int last_seqno; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_device*,int ) ;

int
FUNC_1(struct drm_device *VAR_0, u32 *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;


 if (VAR_2->next_seqno == 0) {
  int VAR_3 = FUNC_0(VAR_0, 0);
  if (VAR_3)
   return VAR_3;

  VAR_2->next_seqno = 1;
 }

 *VAR_1 = VAR_2->last_seqno = VAR_2->next_seqno++;
 return 0;
}

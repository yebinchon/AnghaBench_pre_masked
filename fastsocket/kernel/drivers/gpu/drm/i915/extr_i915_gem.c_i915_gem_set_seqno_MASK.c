
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {scalar_t__ last_seqno; scalar_t__ next_seqno; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,scalar_t__) ;

int FUNC_1(struct drm_device *VAR_1, u32 VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->dev_private;
 int VAR_4;

 if (VAR_2 == 0)
  return -VAR_0;




 VAR_4 = FUNC_0(VAR_1, VAR_2 - 1);
 if (VAR_4)
  return VAR_4;




 VAR_3->next_seqno = VAR_2;
 VAR_3->last_seqno = VAR_2 - 1;
 if (VAR_3->last_seqno == 0)
  VAR_3->last_seqno--;

 return 0;
}

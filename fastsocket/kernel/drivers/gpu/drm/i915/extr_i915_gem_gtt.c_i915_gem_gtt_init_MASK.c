
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gtt {int (* gtt_probe ) (struct drm_device*,int*,int*,int *,int*) ;int total; int stolen_size; int mappable_end; int mappable_base; int gtt_remove; } ;
struct drm_i915_private {struct i915_gtt gtt; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef int gtt_pte_t ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_device*,int*,int*,int *,int*) ;
 int VAR_1 ;
 int FUNC_4 (struct drm_device*,int*,int*,int *,int*) ;
 int VAR_2 ;
 int FUNC_5 (struct drm_device*,int*,int*,int *,int*) ;

int FUNC_6(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct i915_gtt *VAR_5 = &VAR_4->gtt;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_3)->gen <= 5) {
  VAR_4->gtt.gtt_probe = FUNC_4;
  VAR_4->gtt.gtt_remove = VAR_2;
 } else {
  VAR_4->gtt.gtt_probe = FUNC_3;
  VAR_4->gtt.gtt_remove = VAR_1;
 }

 VAR_7 = VAR_4->gtt.gtt_probe(VAR_3, &VAR_4->gtt.total,
         &VAR_4->gtt.stolen_size,
         &VAR_5->mappable_base,
         &VAR_5->mappable_end);
 if (VAR_7)
  return VAR_7;

 VAR_6 = (VAR_4->gtt.total >> VAR_0) * sizeof(gtt_pte_t);


 FUNC_1("Memory usable by graphics device = %zdM\n",
   VAR_4->gtt.total >> 20);
 FUNC_0("GMADR size = %ldM\n",
    VAR_4->gtt.mappable_end >> 20);
 FUNC_0("GTT stolen size = %zdM\n",
    VAR_4->gtt.stolen_size >> 20);

 return 0;
}

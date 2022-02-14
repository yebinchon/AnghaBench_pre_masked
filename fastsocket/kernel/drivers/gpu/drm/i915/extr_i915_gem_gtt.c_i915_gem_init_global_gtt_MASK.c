
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gtt_space; } ;
struct TYPE_4__ {unsigned long total; unsigned long mappable_end; } ;
struct drm_i915_private {TYPE_1__ mm; TYPE_2__ gtt; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;

void FUNC_6(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_3->gtt.total;
 VAR_5 = VAR_3->gtt.mappable_end;

 if (FUNC_5(VAR_2) && FUNC_1(VAR_2)) {
  int VAR_6;


  VAR_4 -= VAR_0*VAR_1;

  FUNC_4(VAR_2, 0, VAR_5, VAR_4);

  VAR_6 = FUNC_3(VAR_2);
  if (!VAR_6)
   return;

  FUNC_0("Aliased PPGTT setup failed %d\n", VAR_6);
  FUNC_2(&VAR_3->mm.gtt_space);
  VAR_4 += VAR_0*VAR_1;
 }
 FUNC_4(VAR_2, 0, VAR_5, VAR_4);
}

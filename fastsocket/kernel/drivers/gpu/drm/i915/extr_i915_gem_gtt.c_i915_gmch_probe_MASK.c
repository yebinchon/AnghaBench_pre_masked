
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gtt_insert_entries; int gtt_clear_range; int do_idle_maps; } ;
struct drm_i915_private {TYPE_1__ gtt; TYPE_2__* dev; int bridge_dev; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {int pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (size_t*,size_t*,int *,unsigned long*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3,
      size_t *VAR_4,
      size_t *VAR_5,
      phys_addr_t *VAR_6,
      unsigned long *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_3->dev_private;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8->bridge_dev, VAR_8->dev->pdev, ((void*)0));
 if (!VAR_9) {
  FUNC_0("failed to set up gmch\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_8->gtt.do_idle_maps = FUNC_3(VAR_8->dev);
 VAR_8->gtt.gtt_clear_range = VAR_1;
 VAR_8->gtt.gtt_insert_entries = VAR_2;

 return 0;
}

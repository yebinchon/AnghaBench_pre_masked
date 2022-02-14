
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scratch_page; int scratch_page_dma; } ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct drm_device {int pdev; struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 FUNC_3(VAR_3->gtt.scratch_page, 1);
 FUNC_1(VAR_2->pdev, VAR_3->gtt.scratch_page_dma,
         VAR_0, VAR_1);
 FUNC_2(VAR_3->gtt.scratch_page);
 FUNC_0(VAR_3->gtt.scratch_page);
}

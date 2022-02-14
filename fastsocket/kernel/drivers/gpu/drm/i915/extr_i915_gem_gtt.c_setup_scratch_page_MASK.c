
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int scratch_page_dma; struct page* scratch_page; } ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct drm_device {int pdev; struct drm_i915_private* dev_private; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct page*,int ,int ,int ) ;
 int FUNC_5 (struct page*,int) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 struct page *VAR_9;
 dma_addr_t VAR_10;

 VAR_9 = FUNC_0(VAR_3 | VAR_2 | VAR_6);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 FUNC_1(VAR_9);
 FUNC_5(VAR_9, 1);







 VAR_10 = FUNC_2(VAR_9);

 VAR_8->gtt.scratch_page = VAR_9;
 VAR_8->gtt.scratch_page_dma = VAR_10;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int page_addr; } ;
struct intel_ring_buffer {TYPE_1__ status_page; TYPE_3__* dev; } ;
struct drm_i915_private {TYPE_2__* status_page_dmah; } ;
struct TYPE_9__ {int gen; } ;
struct TYPE_8__ {struct drm_i915_private* dev_private; } ;
struct TYPE_7__ {int busaddr; int vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_ring_buffer *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev->dev_private;
 u32 VAR_5;

 if (!VAR_4->status_page_dmah) {
  VAR_4->status_page_dmah =
   FUNC_2(VAR_3->dev, VAR_2, VAR_2);
  if (!VAR_4->status_page_dmah)
   return -VAR_0;
 }

 VAR_5 = VAR_4->status_page_dmah->busaddr;
 if (FUNC_1(VAR_3->dev)->gen >= 4)
  VAR_5 |= (VAR_4->status_page_dmah->busaddr >> 28) & 0xf0;
 FUNC_0(VAR_1, VAR_5);

 VAR_3->status_page.page_addr = VAR_4->status_page_dmah->vaddr;
 FUNC_3(VAR_3->status_page.page_addr, 0, VAR_2);

 return 0;
}

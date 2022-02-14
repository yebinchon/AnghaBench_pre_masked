
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ gfx_addr; } ;
struct intel_ring_buffer {TYPE_2__ status_page; } ;
struct drm_device {TYPE_3__* dev_private; } ;
struct TYPE_5__ {int gfx_hws_cpu_addr; } ;
struct TYPE_7__ {TYPE_1__ dri1; int * status_page_dmah; } ;
typedef TYPE_3__ drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct intel_ring_buffer* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct drm_device*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev_private;
 struct intel_ring_buffer *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->status_page_dmah) {
  FUNC_2(VAR_1, VAR_2->status_page_dmah);
  VAR_2->status_page_dmah = ((void*)0);
 }

 if (VAR_3->status_page.gfx_addr) {
  VAR_3->status_page.gfx_addr = 0;
  FUNC_3(VAR_2->dri1.gfx_hws_cpu_addr);
 }


 FUNC_0(VAR_0, 0x1ffff000);
}

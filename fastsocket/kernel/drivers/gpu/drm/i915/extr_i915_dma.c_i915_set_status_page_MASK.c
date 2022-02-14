
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int gfx_addr; int page_addr; } ;
struct intel_ring_buffer {TYPE_3__ status_page; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_4__* dev_private; } ;
struct TYPE_8__ {int * gfx_hws_cpu_addr; } ;
struct TYPE_7__ {scalar_t__ mappable_base; } ;
struct TYPE_10__ {TYPE_2__ dri1; TYPE_1__ gtt; } ;
typedef TYPE_4__ drm_i915_private_t ;
struct TYPE_11__ {int addr; } ;
typedef TYPE_5__ drm_i915_hws_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,int) ;
 struct intel_ring_buffer* FUNC_4 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int * FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_6, void *VAR_7,
    struct drm_file *VAR_8)
{
 drm_i915_private_t *VAR_9 = VAR_6->dev_private;
 drm_i915_hws_addr_t *VAR_10 = VAR_7;
 struct intel_ring_buffer *VAR_11;

 if (FUNC_6(VAR_6, VAR_0))
  return -VAR_2;

 if (!FUNC_2(VAR_6))
  return -VAR_1;

 if (!VAR_9) {
  FUNC_1("called with no initialization\n");
  return -VAR_1;
 }

 if (FUNC_6(VAR_6, VAR_0)) {
  FUNC_5(1, "tried to set status page when mode setting active\n");
  return 0;
 }

 FUNC_0("set status page addr 0x%08x\n", (u32)VAR_10->addr);

 VAR_11 = FUNC_4(VAR_9);
 VAR_11->status_page.gfx_addr = VAR_10->addr & (0x1ffff<<12);

 VAR_9->dri1.gfx_hws_cpu_addr =
  FUNC_8(VAR_9->gtt.mappable_base + VAR_10->addr, 4096);
 if (VAR_9->dri1.gfx_hws_cpu_addr == ((void*)0)) {
  FUNC_7(VAR_6);
  VAR_11->status_page.gfx_addr = 0;
  FUNC_1("can not ioremap virtual address for"
    " G33 hw status page\n");
  return -VAR_3;
 }

 FUNC_9(VAR_9->dri1.gfx_hws_cpu_addr, 0, VAR_5);
 FUNC_3(VAR_4, VAR_11->status_page.gfx_addr);

 FUNC_0("load hws HWS_PGA with gfx mem 0x%x\n",
    VAR_11->status_page.gfx_addr);
 FUNC_0("load hws at %p\n",
    VAR_11->status_page.page_addr);
 return 0;
}

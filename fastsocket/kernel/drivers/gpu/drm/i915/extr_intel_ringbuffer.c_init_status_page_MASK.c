
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gfx_addr; int * page_addr; struct drm_i915_gem_object* obj; } ;
struct intel_ring_buffer {TYPE_2__ status_page; int name; struct drm_device* dev; } ;
struct drm_i915_gem_object {int base; TYPE_1__* pages; int gtt_offset; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int sgl; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_i915_gem_object*,int,int,int) ;
 int FUNC_5 (struct drm_i915_gem_object*,int ) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct intel_ring_buffer*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct intel_ring_buffer *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_i915_gem_object *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4, 4096);
 if (VAR_5 == ((void*)0)) {
  FUNC_1("Failed to allocate status page\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 FUNC_5(VAR_5, VAR_1);

 VAR_6 = FUNC_4(VAR_5, 4096, 1, 0);
 if (VAR_6 != 0) {
  goto err_unref;
 }

 VAR_3->status_page.gfx_addr = VAR_5->gtt_offset;
 VAR_3->status_page.page_addr = FUNC_8(FUNC_10(VAR_5->pages->sgl));
 if (VAR_3->status_page.page_addr == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err_unpin;
 }
 VAR_3->status_page.obj = VAR_5;
 FUNC_9(VAR_3->status_page.page_addr, 0, VAR_2);

 FUNC_7(VAR_3);
 FUNC_0("%s hws offset: 0x%08x\n",
   VAR_3->name, VAR_3->status_page.gfx_addr);

 return 0;

err_unpin:
 FUNC_6(VAR_5);
err_unref:
 FUNC_2(&VAR_5->base);
err:
 return VAR_6;
}

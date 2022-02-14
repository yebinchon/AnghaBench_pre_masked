
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_control {struct drm_i915_gem_object* obj; int gtt_offset; int * cpu_page; } ;
struct intel_ring_buffer {struct pipe_control* private; int name; int dev; } ;
struct drm_i915_gem_object {int base; TYPE_1__* pages; int gtt_offset; } ;
struct TYPE_2__ {int sgl; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct drm_i915_gem_object* FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_i915_gem_object*,int,int,int) ;
 int FUNC_5 (struct drm_i915_gem_object*,int ) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct pipe_control*) ;
 struct pipe_control* FUNC_8 (int,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct intel_ring_buffer *VAR_3)
{
 struct pipe_control *VAR_4;
 struct drm_i915_gem_object *VAR_5;
 int VAR_6;

 if (VAR_3->private)
  return 0;

 VAR_4 = FUNC_8(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3->dev, 4096);
 if (VAR_5 == ((void*)0)) {
  FUNC_1("Failed to allocate seqno page\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 FUNC_5(VAR_5, VAR_2);

 VAR_6 = FUNC_4(VAR_5, 4096, 1, 0);
 if (VAR_6)
  goto err_unref;

 VAR_4->gtt_offset = VAR_5->gtt_offset;
 VAR_4->cpu_page = FUNC_9(FUNC_10(VAR_5->pages->sgl));
 if (VAR_4->cpu_page == ((void*)0))
  goto err_unpin;

 FUNC_0("%s pipe control offset: 0x%08x\n",
    VAR_3->name, VAR_4->gtt_offset);

 VAR_4->obj = VAR_5;
 VAR_3->private = VAR_4;
 return 0;

err_unpin:
 FUNC_6(VAR_5);
err_unref:
 FUNC_2(&VAR_5->base);
err:
 FUNC_7(VAR_4);
 return VAR_6;
}

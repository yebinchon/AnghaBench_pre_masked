
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct drm_i915_master_private {scalar_t__ sarea_priv; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_2__* primary; scalar_t__ dev_private; } ;
struct drm_clip_rect {int dummy; } ;
struct TYPE_12__ {int last_dispatch; } ;
typedef TYPE_4__ drm_i915_sarea_t ;
struct TYPE_11__ {int allow_batchbuffer; } ;
struct TYPE_13__ {TYPE_3__ dri1; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_14__ {int num_cliprects; int cliprects; int used; int start; } ;
typedef TYPE_6__ drm_i915_batchbuffer_t ;
struct TYPE_10__ {TYPE_1__* master; } ;
struct TYPE_9__ {struct drm_i915_master_private* driver_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;
 int FUNC_4 (struct drm_clip_rect*,int ,int) ;
 scalar_t__ FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*,TYPE_6__*,struct drm_clip_rect*) ;
 struct drm_clip_rect* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct drm_clip_rect*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_6, void *VAR_7,
       struct drm_file *VAR_8)
{
 drm_i915_private_t *VAR_9 = (drm_i915_private_t *) VAR_6->dev_private;
 struct drm_i915_master_private *VAR_10 = VAR_6->primary->master->driver_priv;
 drm_i915_sarea_t *VAR_11 = (drm_i915_sarea_t *)
     VAR_10->sarea_priv;
 drm_i915_batchbuffer_t *VAR_12 = VAR_7;
 int VAR_13;
 struct drm_clip_rect *VAR_14 = ((void*)0);

 if (FUNC_5(VAR_6, VAR_0))
  return -VAR_3;

 if (!VAR_9->dri1.allow_batchbuffer) {
  FUNC_1("Batchbuffer ioctl disabled\n");
  return -VAR_2;
 }

 FUNC_0("i915 batchbuffer, start %x used %d cliprects %d\n",
   VAR_12->start, VAR_12->used, VAR_12->num_cliprects);

 FUNC_3(VAR_6, VAR_8);

 if (VAR_12->num_cliprects < 0)
  return -VAR_2;

 if (VAR_12->num_cliprects) {
  VAR_14 = FUNC_7(VAR_12->num_cliprects,
        sizeof(struct drm_clip_rect),
        VAR_5);
  if (VAR_14 == ((void*)0))
   return -VAR_4;

  VAR_13 = FUNC_4(VAR_14, VAR_12->cliprects,
         VAR_12->num_cliprects *
         sizeof(struct drm_clip_rect));
  if (VAR_13 != 0) {
   VAR_13 = -VAR_1;
   goto fail_free;
  }
 }

 FUNC_9(&VAR_6->struct_mutex);
 VAR_13 = FUNC_6(VAR_6, VAR_12, VAR_14);
 FUNC_10(&VAR_6->struct_mutex);

 if (VAR_11)
  VAR_11->last_dispatch = FUNC_2(VAR_9);

fail_free:
 FUNC_8(VAR_14);

 return VAR_13;
}

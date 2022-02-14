
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct drm_i915_master_private {TYPE_4__* sarea_priv; TYPE_8__* sarea; } ;
struct drm_device {TYPE_2__* primary; TYPE_5__* dev_private; } ;
struct TYPE_14__ {scalar_t__ pf_current_page; } ;
typedef TYPE_4__ drm_i915_sarea_t ;
struct TYPE_13__ {int allow_batchbuffer; scalar_t__ current_page; int front_offset; int back_offset; int cpp; } ;
struct TYPE_15__ {TYPE_3__ dri1; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_16__ {int sarea_priv_offset; scalar_t__ ring_size; int front_offset; int back_offset; int cpp; int ring_start; } ;
typedef TYPE_6__ drm_i915_init_t ;
struct TYPE_18__ {int * obj; } ;
struct TYPE_17__ {scalar_t__ handle; } ;
struct TYPE_12__ {TYPE_1__* master; } ;
struct TYPE_11__ {struct drm_i915_master_private* driver_priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_9__* FUNC_2 (TYPE_5__*) ;
 TYPE_8__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct drm_device * VAR_1, drm_i915_init_t * VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_1->dev_private;
 struct drm_i915_master_private *VAR_4 = VAR_1->primary->master->driver_priv;
 int VAR_5;

 VAR_4->sarea = FUNC_3(VAR_1);
 if (VAR_4->sarea) {
  VAR_4->sarea_priv = (drm_i915_sarea_t *)
   ((u8 *)VAR_4->sarea->handle + VAR_2->sarea_priv_offset);
 } else {
  FUNC_0("sarea not found assuming DRI2 userspace\n");
 }

 if (VAR_2->ring_size != 0) {
  if (FUNC_2(VAR_3)->obj != ((void*)0)) {
   FUNC_4(VAR_1);
   FUNC_1("Client tried to initialize ringbuffer in "
      "GEM mode\n");
   return -VAR_0;
  }

  VAR_5 = FUNC_5(VAR_1,
       VAR_2->ring_start,
       VAR_2->ring_size);
  if (VAR_5) {
   FUNC_4(VAR_1);
   return VAR_5;
  }
 }

 VAR_3->dri1.cpp = VAR_2->cpp;
 VAR_3->dri1.back_offset = VAR_2->back_offset;
 VAR_3->dri1.front_offset = VAR_2->front_offset;
 VAR_3->dri1.current_page = 0;
 if (VAR_4->sarea_priv)
  VAR_4->sarea_priv->pf_current_page = 0;



 VAR_3->dri1.allow_batchbuffer = 1;

 return 0;
}

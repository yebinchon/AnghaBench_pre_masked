
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_3__* sarea_priv; } ;
struct drm_file {TYPE_5__* master; } ;
struct drm_device_dma {size_t buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; int * dev_private; } ;
struct drm_buf {scalar_t__ used; scalar_t__ pending; struct drm_file* file_priv; } ;
struct TYPE_6__ {size_t idx; scalar_t__ prim; scalar_t__ discard; scalar_t__ count; } ;
typedef TYPE_1__ drm_radeon_vertex_t ;
struct TYPE_7__ {scalar_t__ prim; int vc_format; scalar_t__ numverts; scalar_t__ finish; scalar_t__ start; } ;
typedef TYPE_2__ drm_radeon_tcl_prim_t ;
struct TYPE_8__ {int dirty; int vc_format; int tex_state; int context_state; } ;
typedef TYPE_3__ drm_radeon_sarea_t ;
typedef int drm_radeon_private_t ;
struct TYPE_9__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,size_t,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*,TYPE_5__*,struct drm_buf*) ;
 int FUNC_7 (struct drm_device*,struct drm_file*,struct drm_buf*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int *,struct drm_file*,int *,int ,int) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_8, void *VAR_9, struct drm_file *VAR_10)
{
 drm_radeon_private_t *VAR_11 = VAR_8->dev_private;
 struct drm_radeon_master_private *VAR_12 = VAR_10->master->driver_priv;
 drm_radeon_sarea_t *VAR_13;
 struct drm_device_dma *VAR_14 = VAR_8->dma;
 struct drm_buf *VAR_15;
 drm_radeon_vertex_t *VAR_16 = VAR_9;
 drm_radeon_tcl_prim_t VAR_17;

 FUNC_3(VAR_8, VAR_10);

 VAR_13 = VAR_12->sarea_priv;

 FUNC_1("pid=%d index=%d count=%d discard=%d\n",
    VAR_0, VAR_16->idx, VAR_16->count, VAR_16->discard);

 if (VAR_16->idx < 0 || VAR_16->idx >= VAR_14->buf_count) {
  FUNC_2("buffer index %d (of %d max)\n",
     VAR_16->idx, VAR_14->buf_count - 1);
  return -VAR_1;
 }
 if (VAR_16->prim < 0 || VAR_16->prim > VAR_2) {
  FUNC_2("buffer prim %d\n", VAR_16->prim);
  return -VAR_1;
 }

 FUNC_4(VAR_11);
 FUNC_5(VAR_11);

 VAR_15 = VAR_14->buflist[VAR_16->idx];

 if (VAR_15->file_priv != VAR_10) {
  FUNC_2("process %d using buffer owned by %p\n",
     VAR_0, VAR_15->file_priv);
  return -VAR_1;
 }
 if (VAR_15->pending) {
  FUNC_2("sending pending buffer %d\n", VAR_16->idx);
  return -VAR_1;
 }



 if (VAR_16->count) {
  VAR_15->used = VAR_16->count;

  if (VAR_13->dirty & ~VAR_4) {
   if (FUNC_8(VAR_11, VAR_10,
           &VAR_13->context_state,
           VAR_13->tex_state,
           VAR_13->dirty)) {
    FUNC_2("radeon_emit_state failed\n");
    return -VAR_1;
   }

   VAR_13->dirty &= ~(VAR_5 |
            VAR_6 |
            VAR_7 |
            VAR_3);
  }

  VAR_17.start = 0;
  VAR_17.finish = VAR_16->count;
  VAR_17.prim = VAR_16->prim;
  VAR_17.numverts = VAR_16->count;
  VAR_17.vc_format = VAR_13->vc_format;

  FUNC_7(VAR_8, VAR_10, VAR_15, &VAR_17);
 }

 if (VAR_16->discard) {
  FUNC_6(VAR_8, VAR_10->master, VAR_15);
 }

 FUNC_0();
 return 0;
}

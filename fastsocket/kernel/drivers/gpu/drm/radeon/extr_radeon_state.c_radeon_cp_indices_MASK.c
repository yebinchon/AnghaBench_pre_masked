
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct drm_radeon_master_private {TYPE_2__* sarea_priv; } ;
struct drm_file {TYPE_4__* master; } ;
struct drm_device_dma {size_t buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; int * dev_private; } ;
struct drm_buf {int used; scalar_t__ pending; struct drm_file* file_priv; } ;
struct TYPE_7__ {int start; int finish; scalar_t__ prim; int vc_format; int numverts; scalar_t__ offset; } ;
typedef TYPE_1__ drm_radeon_tcl_prim_t ;
struct TYPE_8__ {int dirty; int vc_format; int tex_state; int context_state; } ;
typedef TYPE_2__ drm_radeon_sarea_t ;
typedef int drm_radeon_private_t ;
struct TYPE_9__ {size_t idx; int start; int end; scalar_t__ prim; scalar_t__ discard; } ;
typedef TYPE_3__ drm_radeon_indices_t ;
struct TYPE_10__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,size_t,int,int,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*,TYPE_4__*,struct drm_buf*) ;
 int FUNC_7 (struct drm_device*,TYPE_4__*,struct drm_buf*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,struct drm_file*,int *,int ,int) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_10, void *VAR_11, struct drm_file *VAR_12)
{
 drm_radeon_private_t *VAR_13 = VAR_10->dev_private;
 struct drm_radeon_master_private *VAR_14 = VAR_12->master->driver_priv;
 drm_radeon_sarea_t *VAR_15;
 struct drm_device_dma *VAR_16 = VAR_10->dma;
 struct drm_buf *VAR_17;
 drm_radeon_indices_t *VAR_18 = VAR_11;
 drm_radeon_tcl_prim_t VAR_19;
 int VAR_20;

 FUNC_3(VAR_10, VAR_12);

 VAR_15 = VAR_14->sarea_priv;

 FUNC_1("pid=%d index=%d start=%d end=%d discard=%d\n",
    VAR_0, VAR_18->idx, VAR_18->start, VAR_18->end,
    VAR_18->discard);

 if (VAR_18->idx < 0 || VAR_18->idx >= VAR_16->buf_count) {
  FUNC_2("buffer index %d (of %d max)\n",
     VAR_18->idx, VAR_16->buf_count - 1);
  return -VAR_1;
 }
 if (VAR_18->prim < 0 || VAR_18->prim > VAR_4) {
  FUNC_2("buffer prim %d\n", VAR_18->prim);
  return -VAR_1;
 }

 FUNC_4(VAR_13);
 FUNC_5(VAR_13);

 VAR_17 = VAR_16->buflist[VAR_18->idx];

 if (VAR_17->file_priv != VAR_12) {
  FUNC_2("process %d using buffer owned by %p\n",
     VAR_0, VAR_17->file_priv);
  return -VAR_1;
 }
 if (VAR_17->pending) {
  FUNC_2("sending pending buffer %d\n", VAR_18->idx);
  return -VAR_1;
 }

 VAR_20 = (VAR_18->end - VAR_18->start) / sizeof(u16);
 VAR_18->start -= VAR_2;

 if (VAR_18->start & 0x7) {
  FUNC_2("misaligned buffer 0x%x\n", VAR_18->start);
  return -VAR_1;
 }
 if (VAR_18->start < VAR_17->used) {
  FUNC_2("no header 0x%x - 0x%x\n", VAR_18->start, VAR_17->used);
  return -VAR_1;
 }

 VAR_17->used = VAR_18->end;

 if (VAR_15->dirty & ~VAR_6) {
  if (FUNC_8(VAR_13, VAR_12,
          &VAR_15->context_state,
          VAR_15->tex_state,
          VAR_15->dirty)) {
   FUNC_2("radeon_emit_state failed\n");
   return -VAR_1;
  }

  VAR_15->dirty &= ~(VAR_7 |
           VAR_8 |
           VAR_9 |
           VAR_5);
 }



 VAR_19.start = VAR_18->start;
 VAR_19.finish = VAR_18->end;
 VAR_19.prim = VAR_18->prim;
 VAR_19.offset = 0;
 VAR_19.numverts = VAR_3;
 VAR_19.vc_format = VAR_15->vc_format;

 FUNC_7(VAR_10, VAR_12->master, VAR_17, &VAR_19);
 if (VAR_18->discard) {
  FUNC_6(VAR_10, VAR_12->master, VAR_17);
 }

 FUNC_0();
 return 0;
}

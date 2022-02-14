
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_4__* sarea_priv; } ;
struct drm_file {TYPE_8__* master; } ;
struct drm_device_dma {size_t buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; int * dev_private; } ;
struct drm_buf {scalar_t__ pending; struct drm_file* file_priv; } ;
typedef int state ;
typedef int prim ;
struct TYPE_12__ {size_t idx; int nr_prims; scalar_t__ discard; int * state; int * prim; } ;
typedef TYPE_1__ drm_radeon_vertex2_t ;
struct TYPE_13__ {int prim; int offset; int numverts; int vc_format; int finish; int start; } ;
typedef TYPE_2__ drm_radeon_tcl_prim_t ;
struct TYPE_14__ {unsigned char stateidx; int prim; int numverts; int vc_format; int finish; int start; } ;
typedef TYPE_3__ drm_radeon_state_t ;
struct TYPE_15__ {int nbox; } ;
typedef TYPE_4__ drm_radeon_sarea_t ;
typedef int drm_radeon_private_t ;
typedef TYPE_3__ drm_radeon_prim_t ;
struct TYPE_16__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,size_t,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct drm_device*,struct drm_file*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*,TYPE_8__*,struct drm_buf*) ;
 int FUNC_8 (struct drm_device*,TYPE_8__*,struct drm_buf*,TYPE_2__*) ;
 int FUNC_9 (struct drm_device*,struct drm_file*,struct drm_buf*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *,struct drm_file*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_6, void *VAR_7, struct drm_file *VAR_8)
{
 drm_radeon_private_t *VAR_9 = VAR_6->dev_private;
 struct drm_radeon_master_private *VAR_10 = VAR_8->master->driver_priv;
 drm_radeon_sarea_t *VAR_11;
 struct drm_device_dma *VAR_12 = VAR_6->dma;
 struct drm_buf *VAR_13;
 drm_radeon_vertex2_t *VAR_14 = VAR_7;
 int VAR_15;
 unsigned char VAR_16;

 FUNC_4(VAR_6, VAR_8);

 VAR_11 = VAR_10->sarea_priv;

 FUNC_2("pid=%d index=%d discard=%d\n",
    VAR_0, VAR_14->idx, VAR_14->discard);

 if (VAR_14->idx < 0 || VAR_14->idx >= VAR_12->buf_count) {
  FUNC_3("buffer index %d (of %d max)\n",
     VAR_14->idx, VAR_12->buf_count - 1);
  return -VAR_2;
 }

 FUNC_5(VAR_9);
 FUNC_6(VAR_9);

 VAR_13 = VAR_12->buflist[VAR_14->idx];

 if (VAR_13->file_priv != VAR_8) {
  FUNC_3("process %d using buffer owned by %p\n",
     VAR_0, VAR_13->file_priv);
  return -VAR_2;
 }

 if (VAR_13->pending) {
  FUNC_3("sending pending buffer %d\n", VAR_14->idx);
  return -VAR_2;
 }

 if (VAR_11->nbox > VAR_4)
  return -VAR_2;

 for (VAR_16 = 0xff, VAR_15 = 0; VAR_15 < VAR_14->nr_prims; VAR_15++) {
  drm_radeon_prim_t VAR_17;
  drm_radeon_tcl_prim_t VAR_18;

  if (FUNC_1(&VAR_17, &VAR_14->prim[VAR_15], sizeof(VAR_17)))
   return -VAR_1;

  if (VAR_17.stateidx != VAR_16) {
   drm_radeon_state_t VAR_19;

   if (FUNC_1(&VAR_19,
            &VAR_14->state[VAR_17.stateidx],
            sizeof(VAR_19)))
    return -VAR_1;

   if (FUNC_10(VAR_9, VAR_8, &VAR_19)) {
    FUNC_3("radeon_emit_state2 failed\n");
    return -VAR_2;
   }

   VAR_16 = VAR_17.stateidx;
  }

  VAR_18.start = VAR_17.start;
  VAR_18.finish = VAR_17.finish;
  VAR_18.prim = VAR_17.prim;
  VAR_18.vc_format = VAR_17.vc_format;

  if (VAR_17.prim & VAR_5) {
   VAR_18.offset = VAR_17.numverts * 64;
   VAR_18.numverts = VAR_3;

   FUNC_8(VAR_6, VAR_8->master, VAR_13, &VAR_18);
  } else {
   VAR_18.numverts = VAR_17.numverts;
   VAR_18.offset = 0;

   FUNC_9(VAR_6, VAR_8, VAR_13, &VAR_18);
  }

  if (VAR_11->nbox == 1)
   VAR_11->nbox = 0;
 }

 if (VAR_14->discard) {
  FUNC_7(VAR_6, VAR_8->master, VAR_13);
 }

 FUNC_0();
 return 0;
}

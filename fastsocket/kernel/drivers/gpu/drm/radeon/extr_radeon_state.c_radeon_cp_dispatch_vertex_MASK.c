
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_3__* sarea_priv; } ;
struct drm_file {TYPE_1__* master; } ;
struct drm_device {TYPE_4__* dev_private; } ;
struct drm_buf {int offset; } ;
struct TYPE_8__ {int start; int prim; int vc_format; scalar_t__ numverts; int finish; } ;
typedef TYPE_2__ drm_radeon_tcl_prim_t ;
struct TYPE_9__ {int nbox; int * boxes; } ;
typedef TYPE_3__ drm_radeon_sarea_t ;
struct TYPE_10__ {int gart_buffers_offset; } ;
typedef TYPE_4__ drm_radeon_private_t ;
struct TYPE_7__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int,int,int,int ,scalar_t__) ;
 int FUNC_4 (char*,int,scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_8(struct drm_device * VAR_6,
          struct drm_file *VAR_7,
          struct drm_buf * VAR_8,
          drm_radeon_tcl_prim_t * VAR_9)
{
 drm_radeon_private_t *VAR_10 = VAR_6->dev_private;
 struct drm_radeon_master_private *VAR_11 = VAR_7->master->driver_priv;
 drm_radeon_sarea_t *VAR_12 = VAR_11->sarea_priv;
 int VAR_13 = VAR_10->gart_buffers_offset + VAR_8->offset + VAR_9->start;
 int VAR_14 = (int)VAR_9->numverts;
 int VAR_15 = VAR_12->nbox;
 int VAR_16 = 0;
 VAR_5;

 FUNC_3("hwprim 0x%x vfmt 0x%x %d..%d %d verts\n",
    VAR_9->prim,
    VAR_9->vc_format, VAR_9->start, VAR_9->finish, VAR_9->numverts);

 if (FUNC_6(VAR_9->prim, VAR_9->numverts)) {
  FUNC_4("bad prim %x numverts %d\n",
     VAR_9->prim, VAR_9->numverts);
  return;
 }

 do {

  if (VAR_16 < VAR_15) {
   FUNC_7(VAR_10, &VAR_12->boxes[VAR_16]);
  }


  FUNC_1(5);

  FUNC_5(FUNC_2(VAR_0, 3));
  FUNC_5(VAR_13);
  FUNC_5(VAR_14);
  FUNC_5(VAR_9->vc_format);
  FUNC_5(VAR_9->prim | VAR_3 |
    VAR_1 |
    VAR_4 |
    (VAR_14 << VAR_2));

  FUNC_0();

  VAR_16++;
 } while (VAR_16 < VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct drm_radeon_master_private {TYPE_3__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {TYPE_1__* agp_buffer_map; TYPE_4__* dev_private; } ;
struct drm_buf {int offset; } ;
struct TYPE_8__ {int offset; int start; int finish; int prim; int vc_format; int numverts; } ;
typedef TYPE_2__ drm_radeon_tcl_prim_t ;
struct TYPE_9__ {int nbox; int * boxes; } ;
typedef TYPE_3__ drm_radeon_sarea_t ;
struct TYPE_10__ {int gart_buffers_offset; } ;
typedef TYPE_4__ drm_radeon_private_t ;
struct TYPE_7__ {scalar_t__ handle; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct drm_device*,struct drm_buf*,int,int) ;
 int FUNC_5 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_6,
           struct drm_master *VAR_7,
           struct drm_buf * VAR_8,
           drm_radeon_tcl_prim_t * VAR_9)
{
 drm_radeon_private_t *VAR_10 = VAR_6->dev_private;
 struct drm_radeon_master_private *VAR_11 = VAR_7->driver_priv;
 drm_radeon_sarea_t *VAR_12 = VAR_11->sarea_priv;
 int VAR_13 = VAR_10->gart_buffers_offset + VAR_9->offset;
 u32 *VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = VAR_9->start + VAR_2;
 int VAR_18 = (VAR_9->finish - VAR_17) / sizeof(u16);
 int VAR_19 = VAR_12->nbox;

 FUNC_1("hwprim 0x%x vfmt 0x%x %d..%d offset: %x nr %d\n",
    VAR_9->prim,
    VAR_9->vc_format,
    VAR_9->start, VAR_9->finish, VAR_9->offset, VAR_9->numverts);

 if (FUNC_3(VAR_9->prim, VAR_18)) {
  FUNC_2("bad prim %x count %d\n", VAR_9->prim, VAR_18);
  return;
 }

 if (VAR_17 >= VAR_9->finish || (VAR_9->start & 0x7)) {
  FUNC_2("buffer prim %d\n", VAR_9->prim);
  return;
 }

 VAR_15 = (VAR_9->finish - VAR_9->start + 3) / sizeof(u32);

 VAR_14 = (u32 *) ((char *)VAR_6->agp_buffer_map->handle +
   VAR_8->offset + VAR_9->start);

 VAR_14[0] = FUNC_0(VAR_0, VAR_15 - 2);
 VAR_14[1] = VAR_13;
 VAR_14[2] = VAR_9->numverts;
 VAR_14[3] = VAR_9->vc_format;
 VAR_14[4] = (VAR_9->prim |
     VAR_4 |
     VAR_1 |
     VAR_5 |
     (VAR_18 << VAR_3));

 do {
  if (VAR_16 < VAR_19)
   FUNC_5(VAR_10, &VAR_12->boxes[VAR_16]);

  FUNC_4(VAR_6, VAR_8,
         VAR_9->start, VAR_9->finish);

  VAR_16++;
 } while (VAR_16 < VAR_19);

}

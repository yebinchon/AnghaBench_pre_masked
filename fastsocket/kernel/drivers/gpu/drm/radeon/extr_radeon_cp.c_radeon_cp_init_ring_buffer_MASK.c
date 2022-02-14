
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u32 ;
struct drm_radeon_master_private {TYPE_7__* sarea_priv; } ;
struct drm_file {TYPE_6__* master; } ;
struct drm_device {TYPE_4__* sg; TYPE_2__* agp; } ;
struct TYPE_21__ {int tail; int fetch_size_l2ow; int rptr_update_l2qw; int size_l2qw; } ;
struct TYPE_24__ {int gart_vm_start; int fb_location; int flags; int gart_size; TYPE_5__ ring; TYPE_3__* ring_rptr; TYPE_1__* cp_ring; int new_memmap; } ;
typedef TYPE_8__ drm_radeon_private_t ;
struct TYPE_23__ {scalar_t__ last_clear; scalar_t__ last_dispatch; scalar_t__ last_frame; } ;
struct TYPE_22__ {struct drm_radeon_master_private* driver_priv; } ;
struct TYPE_20__ {scalar_t__ virtual; } ;
struct TYPE_19__ {unsigned long offset; } ;
struct TYPE_18__ {int base; } ;
struct TYPE_17__ {unsigned long offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_8__*,int) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,int) ;
 int FUNC_7 (TYPE_8__*,int) ;
 int FUNC_8 (TYPE_8__*,int) ;
 int FUNC_9 (TYPE_8__*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct drm_device * VAR_19,
           drm_radeon_private_t *VAR_20,
           struct drm_file *VAR_21)
{
 struct drm_radeon_master_private *VAR_22;
 u32 VAR_23, VAR_24;






 if (!VAR_20->new_memmap)
  FUNC_8(VAR_20,
        ((VAR_20->gart_vm_start - 1) & 0xffff0000)
        | (VAR_20->fb_location >> 16));
  VAR_23 = (VAR_20->cp_ring->offset
         - (unsigned long)VAR_19->sg->virtual
         + VAR_20->gart_vm_start);

 FUNC_2(VAR_1, VAR_23);


 FUNC_2(VAR_6, 0);


 VAR_24 = FUNC_0(VAR_3);
 FUNC_2(VAR_5, VAR_24);
 FUNC_3(VAR_20, VAR_24);
 VAR_20->ring.tail = VAR_24;
 {
  FUNC_2(VAR_4,
        VAR_20->ring_rptr->offset
        - ((unsigned long) VAR_19->sg->virtual)
        + VAR_20->gart_vm_start);
 }
 FUNC_2(VAR_2,
       (VAR_20->ring.fetch_size_l2ow << 18) |
       (VAR_20->ring.rptr_update_l2qw << 8) |
       VAR_20->ring.size_l2qw);
 FUNC_2(VAR_16, FUNC_0(VAR_4)
       + VAR_17);

 FUNC_2(VAR_18, 0x7);

 FUNC_5(VAR_20);

 FUNC_9(VAR_20, FUNC_1(0), 0);
 FUNC_2(VAR_15, 0);

 FUNC_9(VAR_20, FUNC_1(1), 0);
 FUNC_2(VAR_14, 0);

 FUNC_9(VAR_20, FUNC_1(2), 0);
 FUNC_2(VAR_13, 0);


 VAR_22 = VAR_21->master->driver_priv;
 if (VAR_22->sarea_priv) {
  VAR_22->sarea_priv->last_frame = 0;
  VAR_22->sarea_priv->last_dispatch = 0;
  VAR_22->sarea_priv->last_clear = 0;
 }

 FUNC_4(VAR_20);


 FUNC_2(VAR_9,
       (VAR_7 |
        VAR_8 |
        VAR_11 |
        VAR_10));

}

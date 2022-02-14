
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct drm_radeon_master_private {TYPE_7__* sarea_priv; } ;
struct drm_file {TYPE_6__* master; } ;
struct drm_device {TYPE_5__* sg; TYPE_3__* agp; } ;
struct TYPE_19__ {int rptr_update_l2qw; int size_l2qw; scalar_t__ tail; } ;
struct TYPE_25__ {int flags; int gart_vm_start; int gart_size; TYPE_4__* cp_ring; TYPE_2__ ring; TYPE_1__* ring_rptr; } ;
typedef TYPE_8__ drm_radeon_private_t ;
struct TYPE_24__ {scalar_t__ last_clear; scalar_t__ last_dispatch; scalar_t__ last_frame; } ;
struct TYPE_23__ {struct drm_radeon_master_private* driver_priv; } ;
struct TYPE_22__ {scalar_t__ virtual; } ;
struct TYPE_21__ {unsigned long offset; } ;
struct TYPE_20__ {int base; } ;
struct TYPE_18__ {unsigned long offset; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (struct drm_device*,TYPE_8__*) ;
 int FUNC_7 (struct drm_device*,TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*,int) ;
 int FUNC_10 (TYPE_8__*,int) ;
 int FUNC_11 (TYPE_8__*,int ,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct drm_device *VAR_26,
           drm_radeon_private_t *VAR_27,
           struct drm_file *VAR_28)
{
 struct drm_radeon_master_private *VAR_29;
 u32 VAR_30;
 u64 VAR_31;

 if (((VAR_27->flags & VAR_23) >= VAR_0))
  FUNC_7(VAR_26, VAR_27);
 else
  FUNC_6(VAR_26, VAR_27);

 FUNC_2(VAR_12, VAR_21);
 FUNC_1(VAR_12);
 FUNC_4(15);
 FUNC_2(VAR_12, 0);
 FUNC_2(VAR_5,
       VAR_25 |
       (VAR_27->ring.rptr_update_l2qw << 8) |
       VAR_27->ring.size_l2qw);


 FUNC_2(VAR_11, 0x0);


 FUNC_2(VAR_10, 0);
 FUNC_2(VAR_5,
       VAR_16 |
       VAR_17 |
       (VAR_27->ring.rptr_update_l2qw << 8) |
       VAR_27->ring.size_l2qw);



 FUNC_2(VAR_8, 0);
 FUNC_2(VAR_9, 0);
 FUNC_3(VAR_27, 0);
 VAR_27->ring.tail = 0;
 {
  VAR_31 = VAR_27->ring_rptr->offset
   - ((unsigned long) VAR_26->sg->virtual)
   + VAR_27->gart_vm_start;
 }
 FUNC_2(VAR_6, (VAR_31 & 0xfffffffc));
 FUNC_2(VAR_7, FUNC_12(VAR_31));







 FUNC_2(VAR_5,
       (VAR_27->ring.rptr_update_l2qw << 8) |
       VAR_27->ring.size_l2qw);
  VAR_30 = (VAR_27->cp_ring->offset
         - (unsigned long)VAR_26->sg->virtual
         + VAR_27->gart_vm_start);

 FUNC_2(VAR_4, VAR_30 >> 8);

 FUNC_2(VAR_3, 0xff);

 FUNC_2(VAR_2, (1 << 27) | (1 << 28));
 {
  u64 VAR_32;

  VAR_32 = FUNC_1(VAR_6) & 0xFFFFFFFC;
  VAR_32 |= ((u64)FUNC_1(VAR_7)) << 32;
  VAR_32 += VAR_19;
  VAR_32 >>= 8;
  VAR_32 &= 0xffffffff;

  FUNC_2(VAR_18, (uint32_t)VAR_32);
 }

 FUNC_2(VAR_20, 0x7);


 FUNC_8(VAR_27);

 FUNC_11(VAR_27, FUNC_0(0), 0);
 FUNC_2(VAR_15, 0);

 FUNC_11(VAR_27, FUNC_0(1), 0);
 FUNC_2(VAR_14, 0);

 FUNC_11(VAR_27, FUNC_0(2), 0);
 FUNC_2(VAR_13, 0);


 VAR_29 = VAR_28->master->driver_priv;
 if (VAR_29->sarea_priv) {
  VAR_29->sarea_priv->last_frame = 0;
  VAR_29->sarea_priv->last_dispatch = 0;
  VAR_29->sarea_priv->last_clear = 0;
 }

 FUNC_5(VAR_27);

}

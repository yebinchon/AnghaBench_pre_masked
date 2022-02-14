
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_3__ {int bus_addr; } ;
struct TYPE_4__ {int gart_vm_start; int gart_size; TYPE_1__ gart_info; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_26)
{
 drm_radeon_private_t *VAR_27 = VAR_26->dev_private;

 u32 VAR_28, VAR_29;
 u32 VAR_30;
 u32 VAR_31, VAR_32;

 FUNC_5(VAR_20, VAR_27->gart_vm_start >> 12);
 FUNC_5(VAR_19, (VAR_27->gart_vm_start + VAR_27->gart_size - 1) >> 12);
 FUNC_5(VAR_18, 0);

 VAR_30 = VAR_10 |
     VAR_9 |
     VAR_21 |
     VAR_22 |
     FUNC_1(5) |
     FUNC_0(5);

 FUNC_5(VAR_15, VAR_30);
 FUNC_5(VAR_16, VAR_30);
 FUNC_5(VAR_17, VAR_30);
 FUNC_5(VAR_11, VAR_30);
 FUNC_5(VAR_12, VAR_30);
 FUNC_5(VAR_13, VAR_30);
 FUNC_5(VAR_14, VAR_30);

 VAR_31 = VAR_3 | VAR_7 | VAR_2;
 VAR_31 |= FUNC_4(7);
 FUNC_5(VAR_4, VAR_31);

 FUNC_5(VAR_5, 0);
 VAR_32 = FUNC_2(0) | FUNC_3(2);
 FUNC_5(VAR_6, VAR_32);

 VAR_28 = VAR_1 | VAR_8;

 FUNC_5(VAR_0, VAR_28);

 VAR_28 &= ~VAR_1;


 for (VAR_29 = 1; VAR_29 < 8; VAR_29++)
  FUNC_5(VAR_0 + (VAR_29 * 4), VAR_28);

 FUNC_5(VAR_23, VAR_27->gart_info.bus_addr >> 12);
 FUNC_5(VAR_25, VAR_27->gart_vm_start >> 12);
 FUNC_5(VAR_24, (VAR_27->gart_vm_start + VAR_27->gart_size - 1) >> 12);

 FUNC_6(VAR_26);
}

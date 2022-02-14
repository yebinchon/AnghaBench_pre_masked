
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


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void FUNC_8(struct drm_device *VAR_36)
{
 drm_radeon_private_t *VAR_37 = VAR_36->dev_private;

 u32 VAR_38, VAR_39;
 u32 VAR_40;
 u32 VAR_41, VAR_42;

 FUNC_6(VAR_23, VAR_37->gart_vm_start >> 12);
 FUNC_6(VAR_22, (VAR_37->gart_vm_start + VAR_37->gart_size - 1) >> 12);
 FUNC_6(VAR_21, 0);


 VAR_40 = VAR_2 | VAR_0 | VAR_11 |
  VAR_12 | FUNC_1(5) |
  FUNC_0(5) | VAR_13;

 FUNC_6(VAR_3, VAR_40);
 FUNC_6(VAR_4, VAR_40);

 FUNC_6(VAR_14, VAR_40);
 FUNC_6(VAR_15, VAR_40);

 FUNC_6(VAR_5, VAR_40);
 FUNC_6(VAR_16, VAR_40);

 FUNC_6(VAR_9, VAR_40);
 FUNC_6(VAR_20, VAR_40);

 FUNC_6(VAR_6, VAR_40 | VAR_1);
 FUNC_6(VAR_17, VAR_40 );

 FUNC_6(VAR_7, VAR_40);
 FUNC_6(VAR_18, VAR_40);

 FUNC_6(VAR_8, VAR_40 | VAR_10);
 FUNC_6(VAR_19, VAR_40);

 VAR_41 = VAR_30 | VAR_34 | VAR_29;
 VAR_41 |= FUNC_5(7);
 FUNC_6(VAR_31, VAR_41);

 FUNC_6(VAR_32, 0);
 VAR_42 = (FUNC_2(0) |
         FUNC_3(1) |
         FUNC_4(2));
 FUNC_6(VAR_33, VAR_42);

 VAR_38 = VAR_28 | VAR_35;

 FUNC_6(VAR_24, VAR_38);

 VAR_38 &= ~VAR_28;


 for (VAR_39 = 1; VAR_39 < 8; VAR_39++)
  FUNC_6(VAR_24 + (VAR_39 * 4), VAR_38);

 FUNC_6(VAR_25, VAR_37->gart_info.bus_addr >> 12);
 FUNC_6(VAR_27, VAR_37->gart_vm_start >> 12);
 FUNC_6(VAR_26, (VAR_37->gart_vm_start + VAR_37->gart_size - 1) >> 12);

 FUNC_7(VAR_36);
}

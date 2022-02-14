
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int bus_addr; } ;
struct TYPE_6__ {int gart_vm_start; int gart_size; TYPE_1__ gart_info; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int FUNC_0 (char*,int,long,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_7(drm_radeon_private_t *VAR_20, int VAR_21)
{
 u32 VAR_22;
 int VAR_23;

 if (VAR_21) {
  FUNC_0("programming igp gart %08X %08lX %08X\n",
    VAR_20->gart_vm_start,
    (long)VAR_20->gart_info.bus_addr,
    VAR_20->gart_size);

  FUNC_2(VAR_9, (FUNC_5(6) |
          FUNC_6(6)));

  for (VAR_23 = 0; VAR_23 < 19; VAR_23++)
   FUNC_2(VAR_8 + VAR_23,
     (VAR_4 |
      VAR_18 |
      VAR_19 |
      FUNC_3(3) |
      VAR_0 |
      FUNC_4(3)));

  FUNC_2(VAR_10, (VAR_1 |
            VAR_17));


  for (VAR_23 = 1; VAR_23 < 8; VAR_23++)
   FUNC_2(VAR_10 + VAR_23, 0);


  FUNC_2(VAR_12,
    VAR_20->gart_info.bus_addr);
  FUNC_2(VAR_14,
    VAR_20->gart_vm_start);
  FUNC_2(VAR_13,
    (VAR_20->gart_vm_start + VAR_20->gart_size - 1));
  FUNC_2(VAR_11, 0);


  FUNC_2(VAR_16,
    VAR_20->gart_vm_start);
  FUNC_2(VAR_15,
    (VAR_20->gart_vm_start + VAR_20->gart_size - 1));


  VAR_22 = FUNC_1(VAR_20, VAR_9);
  FUNC_2(VAR_9, (VAR_22 | VAR_3));

  VAR_22 = FUNC_1(VAR_20, VAR_7);
  FUNC_2(VAR_7, (VAR_22 | VAR_2));


  VAR_22 = FUNC_1(VAR_20, VAR_9);

  VAR_22 &= ~(VAR_5 | VAR_6);
  FUNC_2(VAR_9, VAR_22);
  VAR_22 = FUNC_1(VAR_20, VAR_9);

  VAR_22 |= VAR_5 | VAR_6;
  FUNC_2(VAR_9, VAR_22);
  VAR_22 = FUNC_1(VAR_20, VAR_9);

  VAR_22 &= ~(VAR_5 | VAR_6);
  FUNC_2(VAR_9, VAR_22);
  VAR_22 = FUNC_1(VAR_20, VAR_9);

 } else {
  FUNC_2(VAR_9, 0);
  VAR_22 = FUNC_1(VAR_20, VAR_7);
  VAR_22 &= ~VAR_2;
  FUNC_2(VAR_7, VAR_22);
 }
}

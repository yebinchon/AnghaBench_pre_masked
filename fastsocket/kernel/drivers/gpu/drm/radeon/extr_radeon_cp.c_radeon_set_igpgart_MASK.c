
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int bus_addr; } ;
struct TYPE_8__ {int gart_vm_start; int gart_size; int flags; TYPE_1__ gart_info; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(drm_radeon_private_t * VAR_20, int VAR_21)
{
 u32 VAR_22;

 if (VAR_21) {
  FUNC_0("programming igp gart %08X %08lX %08X\n",
     VAR_20->gart_vm_start,
     (long)VAR_20->gart_info.bus_addr,
     VAR_20->gart_size);

  VAR_22 = FUNC_2(VAR_20, VAR_14);
  if (((VAR_20->flags & VAR_2) == VAR_0) ||
      ((VAR_20->flags & VAR_2) == VAR_1))
   FUNC_3(VAR_14, (VAR_11 |
            VAR_19));
  else
   FUNC_3(VAR_14, VAR_11);

  FUNC_3(VAR_4, (VAR_9 |
              VAR_18));

  VAR_22 = FUNC_2(VAR_20, VAR_10);
  FUNC_3(VAR_10, (VAR_13 |
       VAR_17 |
       VAR_12 |
       VAR_3));

  VAR_22 = VAR_20->gart_info.bus_addr & 0xfffff000;
  VAR_22 |= (FUNC_6(VAR_20->gart_info.bus_addr) & 0xff) << 4;
  FUNC_3(VAR_6, VAR_22);

  VAR_22 = FUNC_2(VAR_20, VAR_5);
  FUNC_3(VAR_5, ((1 << VAR_16) |
            VAR_15));

  FUNC_4(VAR_20, VAR_20->gart_vm_start);

  VAR_20->gart_size = 32*1024*1024;
  VAR_22 = (((VAR_20->gart_vm_start - 1 + VAR_20->gart_size) &
    0xffff0000) | (VAR_20->gart_vm_start >> 16));

  FUNC_5(VAR_20, VAR_22);

  VAR_22 = FUNC_2(VAR_20, VAR_4);
  FUNC_3(VAR_4, (VAR_9 |
              VAR_18));

  do {
   VAR_22 = FUNC_2(VAR_20, VAR_7);
   if ((VAR_22 & VAR_8) == 0)
    break;
   FUNC_1(1);
  } while (1);

  FUNC_3(VAR_7,
    VAR_8);

  do {
   VAR_22 = FUNC_2(VAR_20, VAR_7);
   if ((VAR_22 & VAR_8) == 0)
    break;
   FUNC_1(1);
  } while (1);

  FUNC_3(VAR_7, 0);
 } else {
  FUNC_3(VAR_4, 0);
 }
}

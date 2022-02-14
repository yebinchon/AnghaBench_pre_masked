
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int bus_addr; } ;
struct TYPE_7__ {int gart_vm_start; int gart_size; TYPE_1__ gart_info; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int FUNC_0 (char*,int,long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4(drm_radeon_private_t * VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_6, VAR_2);
 if (VAR_7) {

  FUNC_0("programming pcie %08X %08lX %08X\n",
     VAR_6->gart_vm_start,
     (long)VAR_6->gart_info.bus_addr,
     VAR_6->gart_size);
  FUNC_2(VAR_0,
      VAR_6->gart_vm_start);
  FUNC_2(VAR_1,
      VAR_6->gart_info.bus_addr);
  FUNC_2(VAR_5,
      VAR_6->gart_vm_start);
  FUNC_2(VAR_4,
      VAR_6->gart_vm_start +
      VAR_6->gart_size - 1);

  FUNC_3(VAR_6, 0xffffffc0);

  FUNC_2(VAR_2,
      VAR_3);
 } else {
  FUNC_2(VAR_2,
      VAR_8 & ~VAR_3);
 }
}

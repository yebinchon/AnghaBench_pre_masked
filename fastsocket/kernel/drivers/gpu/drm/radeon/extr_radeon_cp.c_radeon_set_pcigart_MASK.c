
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int bus_addr; } ;
struct TYPE_9__ {int flags; int gart_vm_start; int gart_size; TYPE_1__ gart_info; } ;
typedef TYPE_2__ drm_radeon_private_t ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(drm_radeon_private_t * VAR_12, int VAR_13)
{
 u32 VAR_14;

 if (((VAR_12->flags & VAR_8) == VAR_1) ||
     ((VAR_12->flags & VAR_8) == VAR_2) ||
     (VAR_12->flags & VAR_9)) {
  FUNC_2(VAR_12, VAR_13);
  return;
 }

 if ((VAR_12->flags & VAR_8) == VAR_0) {
  FUNC_5(VAR_12, VAR_13);
  return;
 }

 if (VAR_12->flags & VAR_10) {
  FUNC_3(VAR_12, VAR_13);
  return;
 }

 VAR_14 = FUNC_0(VAR_4);

 if (VAR_13) {
  FUNC_1(VAR_4,
        VAR_14 | VAR_11);



  FUNC_1(VAR_7, VAR_12->gart_info.bus_addr);



  FUNC_1(VAR_6, VAR_12->gart_vm_start);
  FUNC_1(VAR_5, VAR_12->gart_vm_start
        + VAR_12->gart_size - 1);



  FUNC_4(VAR_12, 0xffffffc0);
  FUNC_1(VAR_3, 0);
 } else {
  FUNC_1(VAR_4,
        VAR_14 & ~VAR_11);
 }
}

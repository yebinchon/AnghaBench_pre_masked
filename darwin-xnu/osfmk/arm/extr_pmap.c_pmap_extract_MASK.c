
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ pmap_paddr_t ;
struct TYPE_2__ {int map; } ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;

vm_offset_t
FUNC_5(
 pmap_t VAR_1,
 vm_map_address_t VAR_2)
{
 pmap_paddr_t VAR_3=0;

 if (VAR_1 == VAR_0)
  VAR_3 = FUNC_1(VAR_2);
 else if (VAR_1 == FUNC_4(FUNC_0()->map))
  VAR_3 = FUNC_2(VAR_2);

 if (VAR_3) return VAR_3;

 return FUNC_3(VAR_1, VAR_2);
}

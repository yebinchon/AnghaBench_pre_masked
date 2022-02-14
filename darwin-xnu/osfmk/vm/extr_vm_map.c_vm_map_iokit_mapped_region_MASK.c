
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_map_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_5__ {int phys_footprint; int iokit_mapped; } ;
struct TYPE_4__ {int ledger; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;

void
FUNC_2(vm_map_t VAR_1, vm_size_t VAR_2)
{
 pmap_t VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3->ledger, VAR_0.iokit_mapped, VAR_2);
 FUNC_0(VAR_3->ledger, VAR_0.phys_footprint, VAR_2);
}

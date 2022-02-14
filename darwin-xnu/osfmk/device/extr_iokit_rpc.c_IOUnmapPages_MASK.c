
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef int pmap_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int pmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

kern_return_t FUNC_3(vm_map_t VAR_1, mach_vm_address_t VAR_2, mach_vm_size_t VAR_3)
{
    pmap_t VAR_4 = VAR_1->pmap;

    FUNC_0(VAR_4, FUNC_2(VAR_2), FUNC_1(VAR_2 + VAR_3));

    return( VAR_0 );
}

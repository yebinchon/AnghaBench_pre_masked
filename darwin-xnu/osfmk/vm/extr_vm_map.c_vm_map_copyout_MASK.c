
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,TYPE_1__*,int ,int ,int ,int ,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_4,
 vm_map_address_t *VAR_5,
 vm_map_copy_t VAR_6)
{
 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_6 ? VAR_6->size : 0,
                                VAR_0,
                                VAR_3,
                                VAR_2,
                                VAR_1);
}

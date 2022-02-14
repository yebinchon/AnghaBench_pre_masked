
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_object_t ;
typedef int vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef TYPE_1__* vm_map_copy_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int size; int offset; int cpy_object; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;

kern_return_t
FUNC_1(
 vm_object_t VAR_2,
 vm_object_offset_t VAR_3,
 vm_object_size_t VAR_4,
 vm_map_copy_t *VAR_5)
{
 vm_map_copy_t VAR_6;






 VAR_6 = FUNC_0();
 VAR_6->type = VAR_1;
 VAR_6->cpy_object = VAR_2;
 VAR_6->offset = VAR_3;
 VAR_6->size = VAR_4;

 *VAR_5 = VAR_6;
 return(VAR_0);
}

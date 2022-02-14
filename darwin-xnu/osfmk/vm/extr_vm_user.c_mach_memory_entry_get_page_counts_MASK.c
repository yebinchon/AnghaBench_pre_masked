
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_object_t ;
typedef int vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef TYPE_2__* vm_named_entry_t ;
typedef int kern_return_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_11__ {scalar_t__ ip_kobject; } ;
struct TYPE_9__ {scalar_t__ object; } ;
struct TYPE_10__ {int size; int offset; TYPE_1__ backing; scalar_t__ is_copy; scalar_t__ is_sub_map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int ,int ,unsigned int*,unsigned int*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

kern_return_t
FUNC_7(
 ipc_port_t VAR_3,
 unsigned int *VAR_4,
 unsigned int *VAR_5)
{
 kern_return_t VAR_6;
 vm_named_entry_t VAR_7;
 vm_object_t VAR_8;
 vm_object_offset_t VAR_9;
 vm_object_size_t VAR_10;

 if (!FUNC_0(VAR_3) ||
     FUNC_1(VAR_3) != VAR_0) {
  return VAR_1;
 }

 VAR_7 = (vm_named_entry_t) VAR_3->ip_kobject;

 FUNC_2(VAR_7);

 if (VAR_7->is_sub_map ||
     VAR_7->is_copy) {
  FUNC_3(VAR_7);
  return VAR_1;
 }

 VAR_8 = VAR_7->backing.object;
 if (VAR_8 == VAR_2) {
  FUNC_3(VAR_7);
  return VAR_1;
 }

 FUNC_5(VAR_8);

 VAR_9 = VAR_7->offset;
 VAR_10 = VAR_7->size;

 FUNC_3(VAR_7);

 VAR_6 = FUNC_4(VAR_8, VAR_9, VAR_10, VAR_4, VAR_5);

 FUNC_6(VAR_8);

 return VAR_6;
}

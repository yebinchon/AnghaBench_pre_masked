
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef int vm_map_copy_t ;
typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ natural_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef TYPE_1__* mach_vm_read_entry_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int map; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int ) ;

kern_return_t
FUNC_4(
 vm_map_t VAR_5,
 mach_vm_read_entry_t VAR_6,
 natural_t VAR_7)
{
 mach_msg_type_number_t VAR_8;
 kern_return_t VAR_9;
 vm_map_copy_t VAR_10;

 if (VAR_5 == VAR_4 ||
     VAR_7 > VAR_3)
  return(VAR_1);

 VAR_9 = VAR_2;
 for(VAR_8=0; VAR_8<VAR_7; VAR_8++) {
  vm_map_address_t VAR_11;
  vm_map_size_t VAR_12;

  VAR_11 = (vm_map_address_t)(VAR_6[VAR_8].address);
  VAR_12 = (vm_map_size_t)(VAR_6[VAR_8].size);

  if(VAR_12 != 0) {
   VAR_9 = FUNC_2(VAR_5,
     VAR_11,
     VAR_12,
     VAR_0,
     &VAR_10);
   if (VAR_2 == VAR_9) {
    VAR_9 = FUNC_3(
      FUNC_0()->map,
      &VAR_11,
      VAR_10);
    if (VAR_2 == VAR_9) {
     VAR_6[VAR_8].address = VAR_11;
     continue;
    }
    FUNC_1(VAR_10);
   }
  }
  VAR_6[VAR_8].address = (mach_vm_address_t)0;
  VAR_6[VAR_8].size = (mach_vm_size_t)0;
 }
 return(VAR_9);
}

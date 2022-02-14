
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_read_entry_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef int vm_map_copy_t ;
typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ natural_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int map; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ address; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,int ) ;
 int VAR_5 ;

kern_return_t
FUNC_5(
 vm_map_t VAR_6,
 vm_read_entry_t VAR_7,
 natural_t VAR_8)
{
 mach_msg_type_number_t VAR_9;
 kern_return_t VAR_10;
 vm_map_copy_t VAR_11;

 if (VAR_6 == VAR_4 ||
     VAR_8 > VAR_3)
  return(VAR_1);

 VAR_10 = VAR_2;
 for(VAR_9=0; VAR_9<VAR_8; VAR_9++) {
  vm_map_address_t VAR_12;
  vm_map_size_t VAR_13;

  VAR_12 = (vm_map_address_t)(VAR_7[VAR_9].address);
  VAR_13 = (vm_map_size_t)(VAR_7[VAR_9].size);

  if(VAR_13 != 0) {
   VAR_10 = FUNC_3(VAR_6,
     VAR_12,
     VAR_13,
     VAR_0,
     &VAR_11);
   if (VAR_2 == VAR_10) {
    VAR_10 = FUNC_4(FUNC_1()->map,
      &VAR_12,
      VAR_11);
    if (VAR_2 == VAR_10) {
     VAR_7[VAR_9].address =
      FUNC_0(VAR_5, VAR_12);
     continue;
    }
    FUNC_2(VAR_11);
   }
  }
  VAR_7[VAR_9].address = (mach_vm_address_t)0;
  VAR_7[VAR_9].size = (mach_vm_size_t)0;
 }
 return(VAR_10);
}

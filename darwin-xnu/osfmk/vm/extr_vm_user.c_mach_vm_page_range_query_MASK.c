
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_info_t ;
typedef TYPE_1__* vm_page_info_basic_t ;
typedef int vm_page_info_basic_data_t ;
typedef scalar_t__ vm_map_t ;
typedef int vm_map_size_t ;
typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int mach_vm_address_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_2__ {int disposition; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,int,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int,int ,int ,int *) ;

kern_return_t
FUNC_8(
 vm_map_t VAR_8,
 mach_vm_offset_t VAR_9,
 mach_vm_size_t VAR_10,
 mach_vm_address_t VAR_11,
 mach_vm_size_t *VAR_12)
{
 kern_return_t VAR_13 = VAR_2;
 int VAR_14 = 0, VAR_15 = 0;
 mach_vm_size_t VAR_16 = 0, VAR_17 = 0;
 mach_vm_size_t VAR_18 = 0, VAR_19 = 0;
 mach_msg_type_number_t VAR_20 = 0;

 void *VAR_21 = ((void*)0);
 void *VAR_22 = ((void*)0);;
 vm_map_size_t VAR_23 = 0, VAR_24 = 0;
 mach_vm_offset_t VAR_25 = 0, VAR_26 = 0;

 if (VAR_8 == VAR_5 || VAR_12 == ((void*)0)) {
  return VAR_0;
 }

 VAR_18 = ( *VAR_12 * sizeof(int));
 VAR_25 = FUNC_6(VAR_9);
 VAR_26 = FUNC_5(VAR_9 + VAR_10);

 if (VAR_26 < VAR_25) {
  return VAR_0;
 }

 if (VAR_18 == 0 || (VAR_26 == VAR_25)) {
  return VAR_2;
 }






 VAR_16 = FUNC_0(VAR_26 - VAR_25, VAR_3);
 VAR_14 = (int) (VAR_16 >> VAR_4);

 VAR_23 = VAR_14 * sizeof(vm_page_info_basic_data_t);
 VAR_21 = FUNC_3(VAR_23);

 if (VAR_21 == ((void*)0)) {
  return VAR_1;
 }

 VAR_24 = VAR_14 * sizeof(int);
 VAR_22 = FUNC_3(VAR_24);

 if (VAR_22 == ((void*)0)) {

  FUNC_4(VAR_21, VAR_23);
  VAR_21 = ((void*)0);
  return VAR_1;
 }

 while (VAR_10) {

  VAR_20 = VAR_7;
  VAR_13 = FUNC_7(
    VAR_8,
    VAR_25,
    FUNC_5(VAR_25 + VAR_16),
    VAR_6,
    (vm_page_info_t) VAR_21,
    &VAR_20);

  FUNC_1(VAR_13 == VAR_2);

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {

   ((int*)VAR_22)[VAR_15] = ((vm_page_info_basic_t)VAR_21)[VAR_15].disposition;
  }

  VAR_17 = FUNC_0(VAR_18, VAR_14 * sizeof(int) );
  VAR_13 = FUNC_2(VAR_22, (mach_vm_address_t)VAR_11, VAR_17);

  VAR_25 += VAR_16;
  VAR_18 -= VAR_17;
  VAR_19 += VAR_17;

  if (VAR_13 != 0) {
   break;
  }

  if ((VAR_18 == 0) || (VAR_16 >= VAR_10)) {
   VAR_10 = 0;

  } else {

   VAR_11 += VAR_17;

   VAR_10 -= VAR_16;

   VAR_16 = FUNC_0(FUNC_5(VAR_10), VAR_3);
   VAR_14 = (int)(VAR_16 >> VAR_4);
  }
 }

 *VAR_12 = VAR_19 / sizeof(int);

 FUNC_4(VAR_22, VAR_24);
 VAR_22 = ((void*)0);

 FUNC_4(VAR_21, VAR_23);
 VAR_21 = ((void*)0);

 return VAR_13;
}

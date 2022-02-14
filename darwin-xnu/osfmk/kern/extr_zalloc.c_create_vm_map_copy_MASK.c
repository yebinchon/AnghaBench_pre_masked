
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_size_t ;
typedef int vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;

vm_map_copy_t
FUNC_5(
 vm_offset_t VAR_4,
 vm_size_t VAR_5,
 vm_size_t VAR_6)
{
 kern_return_t VAR_7;
 vm_offset_t VAR_8;
 vm_size_t VAR_9;
 vm_map_copy_t VAR_10;

 if (VAR_6 != VAR_5) {
  VAR_8 = VAR_4 + VAR_6;
  VAR_9 = VAR_5 - (FUNC_3(VAR_8) - VAR_4);

  if (VAR_9 >= VAR_1) {
   FUNC_2(VAR_3,
     FUNC_3(VAR_8), VAR_9);
  }
  FUNC_1((char *) VAR_8, FUNC_3(VAR_8) - VAR_8);
 }

 VAR_7 = FUNC_4(VAR_3, (vm_map_address_t)VAR_4,
      (vm_map_size_t)VAR_6, VAR_2, &VAR_10);
 FUNC_0(VAR_7 == VAR_0);

 return VAR_10;
}

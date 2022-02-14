
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef TYPE_1__* processor_t ;
typedef scalar_t__ processor_info_t ;
typedef scalar_t__ processor_info_array_t ;
typedef int processor_flavor_t ;
typedef unsigned int natural_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ host_t ;
struct TYPE_4__ {struct TYPE_4__* processor_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int*,int,int ) ;
 int FUNC_4 (int ,int,int) ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,scalar_t__*,scalar_t__,unsigned int*) ;
 scalar_t__ FUNC_6 (int ,unsigned int*) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int,int ) ;

kern_return_t
FUNC_13(host_t VAR_11,
                    processor_flavor_t VAR_12,
                    natural_t * VAR_13,
                    processor_info_array_t * VAR_14,
                    mach_msg_type_number_t * VAR_15)
{
 kern_return_t VAR_16;
 processor_t VAR_17;
 host_t VAR_18;
 processor_info_t VAR_19;
 unsigned int VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23;
 vm_offset_t VAR_24;
 vm_size_t VAR_25, VAR_26;
 vm_map_copy_t VAR_27;

 if (VAR_11 == VAR_1)
  return (VAR_2);

 VAR_16 = FUNC_6(VAR_12, &VAR_20);
 if (VAR_16 != VAR_4)
  return (VAR_16);

 VAR_22 = VAR_8;
 FUNC_1(VAR_22 != 0);

 VAR_26 = VAR_22 * VAR_20 * sizeof(natural_t);
 VAR_25 = FUNC_10(VAR_26, FUNC_0(VAR_7));
 VAR_16 = FUNC_3(VAR_7, &VAR_24, VAR_25, VAR_6);
 if (VAR_16 != VAR_4)
  return (VAR_3);

 VAR_19 = (processor_info_t)VAR_24;
 VAR_17 = VAR_9;
 VAR_21 = VAR_20;

 VAR_16 = FUNC_5(VAR_17, VAR_12, &VAR_18, VAR_19, &VAR_21);
 if (VAR_16 != VAR_4) {
  FUNC_4(VAR_7, VAR_24, VAR_25);
  return (VAR_16);
 }

 if (VAR_22 > 1) {
  for (VAR_23 = 1; VAR_23 < VAR_22; VAR_23++) {
   FUNC_7(&VAR_10);
   VAR_17 = VAR_17->processor_list;
   FUNC_8(&VAR_10);

   VAR_19 += VAR_20;
   VAR_21 = VAR_20;
   VAR_16 = FUNC_5(VAR_17, VAR_12, &VAR_18, VAR_19, &VAR_21);
   if (VAR_16 != VAR_4) {
    FUNC_4(VAR_7, VAR_24, VAR_25);
    return (VAR_16);
   }
  }
 }

 if (VAR_25 != VAR_26)
  FUNC_2((char *)VAR_24 + VAR_26, VAR_25 - VAR_26);

 VAR_16 = FUNC_12(VAR_7, FUNC_11(VAR_24, FUNC_0(VAR_7)),
                        FUNC_10(VAR_24 + VAR_25, FUNC_0(VAR_7)), VAR_0);
 FUNC_1(VAR_16 == VAR_4);
 VAR_16 = FUNC_9(VAR_7, (vm_map_address_t)VAR_24, (vm_map_size_t)VAR_26, VAR_5, &VAR_27);
 FUNC_1(VAR_16 == VAR_4);

 *VAR_13 = VAR_22;
 *VAR_14 = (processor_info_array_t)VAR_27;
 *VAR_15 = VAR_22 * VAR_20;

 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_copy_t ;
typedef scalar_t__ vm_map_address_t ;
typedef int vm_address_t ;
typedef size_t uint_t ;
typedef TYPE_1__* task_t ;
typedef int mach_port_type_t ;
typedef int mach_port_name_t ;
typedef size_t mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {int itk_space; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int (*) (mach_port_name_t,struct fileglob*,void*),void*,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int **,size_t*,int **,size_t*) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,int ) ;

kern_return_t
FUNC_5(task_t VAR_2,
 int (*VAR_3)(mach_port_name_t, struct fileglob *, void *VAR_4),
 void *VAR_5)
{
 mach_port_name_t *VAR_6;
 mach_msg_type_number_t VAR_7, VAR_8;
 vm_map_copy_t VAR_9, VAR_10;
 vm_map_address_t VAR_11;
 kern_return_t VAR_12;
 uint_t VAR_13;
 int VAR_14;







 VAR_12 = FUNC_1(VAR_2->itk_space,
     (mach_port_name_t **)&VAR_9, &VAR_7,
     (mach_port_type_t **)&VAR_10, &VAR_8);
 if (VAR_12 != VAR_0)
  return (VAR_12);

 FUNC_3(VAR_10);

 VAR_12 = FUNC_4(VAR_1, &VAR_11, VAR_9);
 if (VAR_12 != VAR_0) {
  FUNC_3(VAR_9);
  return (VAR_12);
 }
 VAR_6 = (mach_port_name_t *)(uintptr_t)VAR_11;

 for (VAR_14 = 0, VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  if (FUNC_0(VAR_2, VAR_6[VAR_13], VAR_3, VAR_5,
      &VAR_14) == VAR_0 && -1 == VAR_14)
   break;

 FUNC_2(VAR_1,
     (vm_address_t)VAR_6, VAR_7 * sizeof (*VAR_6));
 return (VAR_0);
}

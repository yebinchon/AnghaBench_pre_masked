
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_offset_t ;
typedef int mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_7__ {int map; int corpse_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int ,int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

kern_return_t
FUNC_5(
 task_t VAR_6,
 task_t VAR_7,
 mach_vm_address_t *VAR_8,
 mach_vm_size_t *VAR_9)
{
 kern_return_t VAR_10;
 mach_vm_offset_t VAR_11 = 0;
 mach_vm_size_t VAR_12 = VAR_0;
 void *VAR_13 = ((void*)0);

 if (VAR_6 == VAR_3 || FUNC_4(VAR_6)) {
  return VAR_1;
 }

 if (VAR_7 == VAR_3 || !FUNC_3(VAR_7) ||
     FUNC_1(VAR_7->corpse_info) == ((void*)0)) {
  return VAR_1;
 }
 VAR_13 = FUNC_1(VAR_7->corpse_info);
 VAR_10 = FUNC_2(VAR_6->map, &VAR_11, VAR_12,
   VAR_4, VAR_5);
 if (VAR_10 != VAR_2) {
  return VAR_10;
 }
 FUNC_0(VAR_13, VAR_11, VAR_12);
 *VAR_8 = VAR_11;
 *VAR_9 = VAR_12;

 return VAR_2;
}

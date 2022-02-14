
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_address_t ;
typedef int thread_t ;
typedef int mach_exception_data_type_t ;
typedef int arm_saved_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(thread_t VAR_2, vm_map_address_t VAR_3)
{
 mach_exception_data_type_t VAR_4[2];
 arm_saved_state_t *VAR_5 = FUNC_1(VAR_2);

 FUNC_2(VAR_5, VAR_3);

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_3;

 FUNC_0(VAR_0, VAR_4, 2);
}

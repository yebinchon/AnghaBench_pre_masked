
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_type_t ;
typedef int exception_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_2(vm_offset_t VAR_2)
{
 exception_type_t VAR_3 = VAR_1;
 mach_exception_data_type_t VAR_4[2] = {VAR_0};
 mach_msg_type_number_t VAR_5 = 2;

 VAR_4[1] = VAR_2;
 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_0(0);
}

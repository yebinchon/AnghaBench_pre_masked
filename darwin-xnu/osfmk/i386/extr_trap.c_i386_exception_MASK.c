
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_exception_subcode_t ;
typedef int mach_exception_data_type_t ;
typedef int mach_exception_code_t ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int *,int) ;

void
FUNC_2(
 int VAR_1,
 mach_exception_code_t VAR_2,
 mach_exception_subcode_t VAR_3)
{
 mach_exception_data_type_t VAR_4[VAR_0];

 FUNC_0("i386_exception: exc=%d code=0x%llx subcode=0x%llx\n",
         VAR_1, VAR_2, VAR_3);
 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_3;
 FUNC_1(VAR_1, VAR_4, 2);

}

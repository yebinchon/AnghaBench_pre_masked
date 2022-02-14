
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_interrupt_t ;
typedef int mach_exception_data_type_t ;
typedef int kern_return_t ;
typedef int exception_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;

kern_return_t FUNC_2(exception_type_t VAR_3,
 mach_exception_data_type_t VAR_4, mach_exception_data_type_t VAR_5)
{
 mach_exception_data_type_t VAR_6[VAR_0];
 wait_interrupt_t VAR_7;
 kern_return_t VAR_8 = VAR_1;

 VAR_6[0] = VAR_4;
 VAR_6[1] = VAR_5;

 VAR_7 = FUNC_1(VAR_2);
 VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_0);
 (void) FUNC_1(VAR_7);
 return VAR_8;
}

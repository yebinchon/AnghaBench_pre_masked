
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

kern_return_t
FUNC_3(mach_port_t VAR_1, boolean_t* VAR_2)
{
 kern_return_t VAR_3;
 boolean_t VAR_4 = VAR_0;

 VAR_3 = FUNC_0(FUNC_2(), VAR_1, &VAR_4);






 *VAR_2 = !VAR_4;

 FUNC_1(FUNC_2(), VAR_1);

 return VAR_3;
}

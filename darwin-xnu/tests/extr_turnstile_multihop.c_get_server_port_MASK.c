
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static mach_port_t
FUNC_2(void)
{
 mach_port_t VAR_3;
 kern_return_t VAR_4 = FUNC_1(VAR_2,
   VAR_0, &VAR_3);
 VAR_1; FUNC_0(VAR_4, "server bootstrap_check_in");
 return VAR_3;
}

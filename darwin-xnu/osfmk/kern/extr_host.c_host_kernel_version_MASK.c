
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kernel_version_t ;
typedef int kern_return_t ;
typedef scalar_t__ host_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;

kern_return_t
FUNC_1(host_t VAR_4, kernel_version_t VAR_5)
{
 if (VAR_4 == VAR_0)
  return (VAR_1);

 (void)FUNC_0(VAR_5, VAR_3, sizeof(kernel_version_t));

 return (VAR_2);
}

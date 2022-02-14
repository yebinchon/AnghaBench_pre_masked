
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ctl {int dummy; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 void* FUNC_0 () ;

__attribute__((used)) static errno_t
FUNC_1(kern_ctl_ref VAR_1, struct sockaddr_ctl *VAR_2, void **VAR_3)
{
#pragma unused(kctlref, sac)
 *VAR_3 = FUNC_0();
 if (*VAR_3 == ((void*)0)) {

  return (VAR_0);
 }

 return (0);
}

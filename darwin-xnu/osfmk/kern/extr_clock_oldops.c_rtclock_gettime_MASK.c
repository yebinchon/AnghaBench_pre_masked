
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int tv_sec; int tv_nsec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef int kern_return_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *) ;

kern_return_t
FUNC_1(
 mach_timespec_t *VAR_1)
{
 clock_sec_t VAR_2;
 clock_nsec_t VAR_3;

 FUNC_0(&VAR_2, &VAR_3);
 VAR_1->tv_sec = (unsigned int)VAR_2;
 VAR_1->tv_nsec = VAR_3;

 return (VAR_0);
}

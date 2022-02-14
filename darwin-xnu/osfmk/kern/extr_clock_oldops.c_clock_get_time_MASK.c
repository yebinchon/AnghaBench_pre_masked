
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_timespec_t ;
typedef int kern_return_t ;
typedef TYPE_2__* clock_t ;
struct TYPE_6__ {TYPE_1__* cl_ops; } ;
struct TYPE_5__ {int (* c_gettime ) (int *) ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

kern_return_t
FUNC_1(
 clock_t VAR_2,
 mach_timespec_t *VAR_3)
{
 if (VAR_2 == VAR_0)
  return (VAR_1);
 return ((*VAR_2->cl_ops->c_gettime)(VAR_3));
}

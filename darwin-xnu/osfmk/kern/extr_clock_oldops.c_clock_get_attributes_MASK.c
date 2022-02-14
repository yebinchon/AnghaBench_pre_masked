
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef TYPE_2__* clock_t ;
typedef int clock_flavor_t ;
typedef int clock_attr_t ;
struct TYPE_6__ {TYPE_1__* cl_ops; } ;
struct TYPE_5__ {int (* c_getattr ) (int ,int ,int *) ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;

kern_return_t
FUNC_1(
 clock_t VAR_3,
 clock_flavor_t VAR_4,
 clock_attr_t VAR_5,
 mach_msg_type_number_t *VAR_6)
{
 if (VAR_3 == VAR_0)
  return (VAR_2);
 if (VAR_3->cl_ops->c_getattr)
  return (VAR_3->cl_ops->c_getattr(VAR_4, VAR_5, VAR_6));
 return (VAR_1);
}

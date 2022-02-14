
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kern_return_t ;
typedef scalar_t__ host_priv_t ;
typedef TYPE_1__* clock_t ;
typedef size_t clock_id_t ;
struct TYPE_5__ {scalar_t__ cl_ops; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;

kern_return_t
FUNC_0(
 host_priv_t VAR_7,
 clock_id_t VAR_8,
 clock_t *VAR_9)
{
 if (VAR_7 == VAR_1 ||
   VAR_8 < 0 || VAR_8 >= VAR_5) {
  *VAR_9 = VAR_0;
  return (VAR_3);
 }

 *VAR_9 = &VAR_6[VAR_8];
 if ((*VAR_9)->cl_ops == 0)
  return (VAR_2);
 return (VAR_4);
}

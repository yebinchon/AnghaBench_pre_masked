
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int wiring_required; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_4,
 boolean_t VAR_5)
{
 if (VAR_4 == VAR_3)
  return(VAR_0);

 FUNC_0(VAR_4);
 VAR_4->wiring_required = (VAR_5 == VAR_2);
 FUNC_1(VAR_4);

 return(VAR_1);
}

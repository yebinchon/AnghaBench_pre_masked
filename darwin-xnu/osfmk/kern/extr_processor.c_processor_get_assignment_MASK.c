
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
typedef int * processor_set_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

kern_return_t
FUNC_0(
 processor_t VAR_7,
 processor_set_t *VAR_8)
{
 int VAR_9;

 if (VAR_7 == VAR_3)
  return(VAR_1);

 VAR_9 = VAR_7->state;
 if (VAR_9 == VAR_5 || VAR_9 == VAR_4)
  return(VAR_0);

 *VAR_8 = &VAR_6;

 return(VAR_2);
}

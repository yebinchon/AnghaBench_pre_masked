
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int kern_return_t ;
struct TYPE_5__ {scalar_t__ bsd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

kern_return_t
FUNC_1(
 task_t VAR_3)
{
 if (VAR_3 == VAR_2)
  return (VAR_1);

 if (VAR_3->bsd_info)
  return (VAR_0);

 return (FUNC_0(VAR_3));
}

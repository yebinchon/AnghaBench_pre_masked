
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_7__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(thread_t VAR_3)
{
 kern_return_t VAR_4;

 if (VAR_3 == VAR_2)
  return (VAR_0);

 FUNC_1(VAR_3);

 if (VAR_3->active)
  VAR_4 = FUNC_0(VAR_3);
 else
  VAR_4 = VAR_1;

 FUNC_2(VAR_3);

 return (VAR_4);
}

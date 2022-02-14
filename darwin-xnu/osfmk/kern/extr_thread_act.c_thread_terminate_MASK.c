
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_8__ {scalar_t__ task; scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

kern_return_t
FUNC_6(
 thread_t VAR_6)
{
 if (VAR_6 == VAR_4)
  return (VAR_3);


 if (VAR_6->task == VAR_5 && VAR_6 != FUNC_1())
  return (VAR_2);

 kern_return_t VAR_7 = FUNC_5(VAR_6);






 if (VAR_6->task == VAR_5) {
  FUNC_0(VAR_6->active == VAR_1);
  FUNC_4(VAR_6, VAR_0);
  FUNC_3(VAR_6);

  FUNC_2("thread_terminate");

 }

 return (VAR_7);
}

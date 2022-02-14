
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_9__ {scalar_t__ task; int user_stop_count; scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

kern_return_t
FUNC_5(thread_t VAR_6)
{
 kern_return_t VAR_7 = VAR_2;

 if (VAR_6 == VAR_4 || VAR_6->task == VAR_5)
  return (VAR_1);

 FUNC_2(VAR_6);

 if (VAR_6->active) {
  if (VAR_6->user_stop_count++ == 0)
   FUNC_1(VAR_6);
 } else {
  VAR_7 = VAR_3;
 }

 FUNC_3(VAR_6);

 if (VAR_6 != FUNC_0() && VAR_7 == VAR_2)
  FUNC_4(VAR_6, VAR_0);

 return (VAR_7);
}

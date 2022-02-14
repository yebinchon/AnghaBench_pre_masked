
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_7__ {scalar_t__ task; scalar_t__ user_stop_count; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(thread_t VAR_6)
{
 kern_return_t VAR_7 = VAR_2;

 if (VAR_6 == VAR_4 || VAR_6->task == VAR_5)
  return (VAR_1);

 FUNC_0(VAR_6);

 if (VAR_6->active) {
  if (VAR_6->user_stop_count > 0) {
   if (--VAR_6->user_stop_count == 0)
    FUNC_2(VAR_6);
  } else {
   VAR_7 = VAR_0;
  }
 } else {
  VAR_7 = VAR_3;
 }

 FUNC_1(VAR_6);

 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_6__ {scalar_t__ suspend_count; scalar_t__ suspend_parked; int started; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*) ;

void
FUNC_3(thread_t VAR_1)
{
 FUNC_0(VAR_1->suspend_count > 0, "thread %p over-resumed", VAR_1);


 if (VAR_1->suspend_count == 0)
  return;

 if (--VAR_1->suspend_count == 0) {
  if (!VAR_1->started) {
   FUNC_1(VAR_1);
  } else if (VAR_1->suspend_parked) {
   VAR_1->suspend_parked = VAR_0;
   FUNC_2(&VAR_1->suspend_count, VAR_1);
  }
 }
}

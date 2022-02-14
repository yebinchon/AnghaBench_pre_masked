
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_4__ {scalar_t__ suspend_parked; int suspend_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(thread_t VAR_1)
{
 if (VAR_1->suspend_count++ == 0) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->suspend_parked == VAR_0);
 }
}

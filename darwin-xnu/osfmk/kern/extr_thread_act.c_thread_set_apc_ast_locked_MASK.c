
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_10__ {scalar_t__ state; TYPE_1__* active_thread; } ;
struct TYPE_9__ {TYPE_2__* last_processor; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(thread_t VAR_3)
{
 FUNC_3(VAR_3, VAR_0);

 if (VAR_3 == FUNC_2()) {
  FUNC_0(VAR_3);
 } else {
  processor_t VAR_4 = VAR_3->last_processor;

  if (VAR_4 != VAR_1 &&
      VAR_4->state == VAR_2 &&
      VAR_4->active_thread == VAR_3) {
   FUNC_1(VAR_4);
  }
 }
}

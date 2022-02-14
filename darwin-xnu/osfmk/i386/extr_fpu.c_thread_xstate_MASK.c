
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xstate_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_6__ {scalar_t__ xstate; } ;
struct TYPE_5__ {int task; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static xstate_t
FUNC_2(thread_t VAR_1)
{
 xstate_t VAR_2 = FUNC_0(VAR_1)->xstate;
 if (VAR_2 == VAR_0)
  return FUNC_1(VAR_1->task);
 else
  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
typedef TYPE_2__* task_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {scalar_t__ suspend_count; } ;
struct TYPE_12__ {int user_stop_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int ,int *,int ,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_5(
 task_t VAR_6,
 thread_t *VAR_7,
 boolean_t VAR_8,
 thread_continue_t VAR_9)
{
 kern_return_t VAR_10;
 thread_t VAR_11;

 if (VAR_6 == VAR_2 || VAR_6 == VAR_4)
  return (VAR_0);

 VAR_10 = FUNC_3(VAR_6, -1, VAR_9, ((void*)0), VAR_3, &VAR_11);
 if (VAR_10 != VAR_1)
  return (VAR_10);

 VAR_11->user_stop_count = 1;
 FUNC_4(VAR_11);
 if (VAR_6->suspend_count > 0)
  FUNC_4(VAR_11);

 if (VAR_8)
  FUNC_0(VAR_6);

 FUNC_2(VAR_6);
 FUNC_1(&VAR_5);

 *VAR_7 = VAR_11;

 return (VAR_1);
}

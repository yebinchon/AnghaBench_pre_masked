
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* semaphore_t ;
typedef int queue_entry_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_11__ {int count; TYPE_1__* owner; int active; int ref_count; int port; int waitq; } ;
struct TYPE_10__ {int semaphores_owned; int semaphore_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;

kern_return_t
FUNC_7(
 task_t VAR_11,
 semaphore_t *VAR_12,
 int VAR_13,
 int VAR_14)
{
 semaphore_t VAR_15 = VAR_4;
 kern_return_t VAR_16;


 *VAR_12 = VAR_4;
 if (VAR_11 == VAR_7 || VAR_14 < 0 || VAR_13 > VAR_6)
  return VAR_1;

 VAR_15 = (semaphore_t) FUNC_5 (VAR_10);

 if (VAR_15 == VAR_4)
  return VAR_2;

 VAR_16 = FUNC_4(&VAR_15->waitq, VAR_13 | VAR_5);
 if (VAR_16 != VAR_3) {
  FUNC_6(VAR_10, VAR_15);
  return VAR_16;
 }




 VAR_15->port = VAR_0;
 FUNC_1(&VAR_15->ref_count, &VAR_9);
 VAR_15->count = VAR_14;
 VAR_15->active = VAR_8;
 VAR_15->owner = VAR_11;





 FUNC_2(VAR_11);
 FUNC_0(&VAR_11->semaphore_list, (queue_entry_t) VAR_15);
 VAR_11->semaphores_owned++;
 FUNC_3(VAR_11);

 *VAR_12 = VAR_15;

 return VAR_3;
}

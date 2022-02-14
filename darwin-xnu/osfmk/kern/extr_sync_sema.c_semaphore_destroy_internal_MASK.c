
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* semaphore_t ;
typedef int queue_entry_t ;
struct TYPE_8__ {int active; int count; int waitq; TYPE_1__* owner; } ;
struct TYPE_7__ {int semaphores_owned; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(
 task_t VAR_6,
 semaphore_t VAR_7)
{
 int VAR_8;


 FUNC_0(VAR_7->owner == VAR_6);
 FUNC_1((queue_entry_t) VAR_7);
 VAR_7->owner = VAR_2;
 VAR_6->semaphores_owned--;




 FUNC_0(VAR_7->active);
 VAR_7->active = VAR_0;




 VAR_8 = VAR_7->count;
 VAR_7->count = 0;

 if (VAR_8 < 0) {
  FUNC_3(&VAR_7->waitq,
       VAR_1,
       VAR_3, ((void*)0),
       VAR_4,
       VAR_5);

 } else {
  FUNC_2(VAR_7);
 }
}

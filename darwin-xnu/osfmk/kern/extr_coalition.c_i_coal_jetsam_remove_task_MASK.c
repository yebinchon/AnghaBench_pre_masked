
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
typedef int kern_return_t ;
typedef TYPE_3__* coalition_t ;
struct TYPE_7__ {TYPE_2__* leader; } ;
struct TYPE_9__ {size_t type; TYPE_1__ j; int id; } ;
struct TYPE_8__ {int * task_coalition; TYPE_3__** coalition; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static kern_return_t
FUNC_6(coalition_t VAR_3, task_t VAR_4)
{
 FUNC_0(VAR_3 && VAR_3->type == VAR_0);
 FUNC_0(VAR_4->coalition[VAR_0] == VAR_3);

 FUNC_1("removing PID:%d from coalition id:%lld",
   FUNC_5(VAR_4), VAR_3->id);

 if (VAR_4 == VAR_3->j.leader) {
  VAR_3->j.leader = ((void*)0);
  FUNC_1("    PID:%d was the leader!", FUNC_5(VAR_4));
 } else {
  FUNC_0(!FUNC_3(&VAR_4->task_coalition[VAR_0]));
 }


 FUNC_4(&VAR_4->task_coalition[VAR_0]);
 FUNC_2(VAR_4->task_coalition[VAR_1]);

 return VAR_2;
}

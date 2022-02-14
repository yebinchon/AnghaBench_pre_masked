
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct i_jetsam_coalition {int other; } ;
typedef int kern_return_t ;
typedef TYPE_2__* coalition_t ;
struct TYPE_7__ {size_t type; int id; struct i_jetsam_coalition j; } ;
struct TYPE_6__ {int * task_coalition; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_5(coalition_t VAR_2, task_t VAR_3)
{
 struct i_jetsam_coalition *VAR_4;
 FUNC_0(VAR_2 && VAR_2->type == VAR_0);

 VAR_4 = &VAR_2->j;

 FUNC_0(FUNC_3(&VAR_3->task_coalition[VAR_0]));


 FUNC_2(&VAR_4->other, &VAR_3->task_coalition[VAR_0]);
 FUNC_1("coalition %lld adopted PID:%d as UNDEF",
   VAR_2->id, FUNC_4(VAR_3));

 return VAR_1;
}

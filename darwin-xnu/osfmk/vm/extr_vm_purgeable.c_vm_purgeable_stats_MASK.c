
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_purgeable_info_t ;
typedef int task_t ;
typedef int * purgeable_q_t ;
struct TYPE_3__ {int obsolete_data; int * lifo_data; int * fifo_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int,int ) ;

void
FUNC_3(vm_purgeable_info_t VAR_6, task_t VAR_7)
{
 purgeable_q_t VAR_8;
 int VAR_9;

 FUNC_0(&VAR_5);


 VAR_8 = &VAR_4[VAR_1];
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_2(&(VAR_6->fifo_data[VAR_9]), VAR_8, VAR_9, VAR_7);


 VAR_8 = &VAR_4[VAR_2];
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_2(&(VAR_6->lifo_data[VAR_9]), VAR_8, VAR_9, VAR_7);


 VAR_8 = &VAR_4[VAR_3];
 FUNC_2(&(VAR_6->obsolete_data), VAR_8, 0, VAR_7);

 FUNC_1(&VAR_5);
 return;
}

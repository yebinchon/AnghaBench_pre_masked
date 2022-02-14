
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptocop_prio_job {int node; } ;
struct cryptocop_operation {int cb; } ;
typedef size_t cryptocop_queue_priority ;
struct TYPE_2__ {int jobs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct cryptocop_prio_job**,struct cryptocop_operation*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(cryptocop_queue_priority VAR_3, struct cryptocop_operation *VAR_4)
{
 int VAR_5;
 struct cryptocop_prio_job *VAR_6 = ((void*)0);
 unsigned long int VAR_7;

 FUNC_0(FUNC_6("cryptocop_job_queue_insert(%d, 0x%p)\n", VAR_3, VAR_4));

 if (!VAR_4 || !VAR_4->cb){
  FUNC_1(FUNC_6("cryptocop_job_queue_insert oper=0x%p, NULL operation or callback\n", VAR_4));
  return -VAR_0;
 }

 if ((VAR_5 = FUNC_3(&VAR_6, VAR_4)) != 0){
  FUNC_1(FUNC_6("cryptocop_job_queue_insert: job setup failed\n"));
  return VAR_5;
 }
 FUNC_2(VAR_6 != ((void*)0));

 FUNC_7(&VAR_1, VAR_7);
 FUNC_5(&VAR_6->node, &VAR_2[VAR_3].jobs);
 FUNC_8(&VAR_1, VAR_7);


 FUNC_4();
 return 0;
}

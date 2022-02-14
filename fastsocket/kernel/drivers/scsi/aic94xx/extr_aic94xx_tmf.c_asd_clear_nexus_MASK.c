
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int task_state_flags; int task_state_lock; struct asd_ascb* lldd_task; } ;
struct asd_ascb {int * completion; scalar_t__ tag_valid; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sas_task*) ;
 int FUNC_3 (struct sas_task*) ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct sas_task *VAR_5)
{
 int VAR_6 = VAR_3;
 int VAR_7;
 struct asd_ascb *VAR_8 = VAR_5->lldd_task;
 FUNC_1(VAR_4);
 unsigned long VAR_9;

 VAR_8->completion = &VAR_4;

 FUNC_0("task not done, clearing nexus\n");
 if (VAR_8->tag_valid)
  VAR_6 = FUNC_3(VAR_5);
 else
  VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_6(&VAR_4,
            VAR_0);
 VAR_8->completion = ((void*)0);
 FUNC_0("came back from clear nexus\n");
 FUNC_4(&VAR_5->task_state_lock, VAR_9);
 if (VAR_7 < 1)
  VAR_6 = VAR_3;
 if (VAR_5->task_state_flags & VAR_1)
  VAR_6 = VAR_2;
 FUNC_5(&VAR_5->task_state_lock, VAR_9);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_queued_cmd {struct scsi_cmnd* a_cmnd; scalar_t__ in_use; int cmnd_timer; } ;
struct scsi_cmnd {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sdebug_queued_cmd* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 struct sdebug_queued_cmd *VAR_6;

 FUNC_1(&VAR_1, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_6 = &VAR_0[VAR_5];
  if (VAR_6->in_use && (VAR_3 == VAR_6->a_cmnd)) {
   FUNC_0(&VAR_6->cmnd_timer);
   VAR_6->in_use = 0;
   VAR_6->a_cmnd = ((void*)0);
   break;
  }
 }
 FUNC_2(&VAR_1, VAR_4);
 return (VAR_5 < VAR_2) ? 1 : 0;
}

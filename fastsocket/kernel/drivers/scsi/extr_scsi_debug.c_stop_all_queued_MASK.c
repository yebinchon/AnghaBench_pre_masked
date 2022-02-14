
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_queued_cmd {int * a_cmnd; scalar_t__ in_use; int cmnd_timer; } ;


 int FUNC_0 (int *) ;
 struct sdebug_queued_cmd* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_3;
 int VAR_4;
 struct sdebug_queued_cmd *VAR_5;

 FUNC_1(&VAR_1, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  VAR_5 = &VAR_0[VAR_4];
  if (VAR_5->in_use && VAR_5->a_cmnd) {
   FUNC_0(&VAR_5->cmnd_timer);
   VAR_5->in_use = 0;
   VAR_5->a_cmnd = ((void*)0);
  }
 }
 FUNC_2(&VAR_1, VAR_3);
}

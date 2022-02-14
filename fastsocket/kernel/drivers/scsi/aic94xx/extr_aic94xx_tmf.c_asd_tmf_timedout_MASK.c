
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_completion_status {int tmf_state; } ;
struct asd_ascb {int completion; struct tasklet_completion_status* uldd_task; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct asd_ascb *VAR_2 = (void *) VAR_1;
 struct tasklet_completion_status *VAR_3 = VAR_2->uldd_task;

 FUNC_0("tmf timed out\n");
 VAR_3->tmf_state = VAR_0;
 FUNC_1(VAR_2->completion);
}

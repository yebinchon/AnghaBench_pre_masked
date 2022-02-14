
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int task_t ;
struct uthread {scalar_t__ uu_workq_stackaddr; int uu_workq_thport; int uu_workq_pri; int uu_workq_flags; } ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct uthread* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct uthread*) ;

event_t
FUNC_8(task_t VAR_5, thread_t VAR_6)
{
 struct uthread *VAR_7 = FUNC_2(VAR_6);

 VAR_7->uu_workq_flags = VAR_4;
 VAR_7->uu_workq_pri = FUNC_0(VAR_1);
 VAR_7->uu_workq_thport = VAR_0;
 VAR_7->uu_workq_stackaddr = 0;

 FUNC_5(VAR_6, VAR_2 | VAR_3);
 FUNC_4(VAR_6, VAR_1);

 FUNC_6(FUNC_3(FUNC_1(VAR_5)));
 return FUNC_7(VAR_7);
}

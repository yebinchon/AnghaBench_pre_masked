
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct rusage_info_child {int ri_child_elapsed_abstime; int ri_child_pageins; int ri_child_interrupt_wkups; int ri_child_pkg_idle_wkups; int ri_child_system_time; int ri_child_user_time; } ;
struct TYPE_16__ {int ri_proc_start_abstime; int ri_uuid; int ri_child_elapsed_abstime; int ri_child_pageins; int ri_child_interrupt_wkups; int ri_child_pkg_idle_wkups; int ri_child_system_time; int ri_child_user_time; int ri_interval_max_phys_footprint; int ri_lifetime_max_phys_footprint; int ri_logical_writes; } ;
typedef TYPE_2__ rusage_info_current ;
typedef TYPE_3__* proc_t ;
struct TYPE_17__ {TYPE_1__* p_stats; int task; } ;
struct TYPE_15__ {int ps_start; struct rusage_info_child ri_child; } ;


 int VAR_0 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_3__*,unsigned char*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

void
FUNC_13(proc_t VAR_1, rusage_info_current *VAR_2, int VAR_3)
{
 struct rusage_info_child *VAR_4;

 FUNC_0(VAR_1->p_stats != ((void*)0));
 FUNC_9(VAR_2, 0, sizeof(*VAR_2));
 switch(VAR_3) {
 case 128:
  VAR_2->ri_logical_writes = FUNC_6(VAR_1->task);
  VAR_2->ri_lifetime_max_phys_footprint = FUNC_8(VAR_1->task);



  FUNC_3(VAR_1->task, VAR_2);


 case 129:
  FUNC_4(VAR_1->task, VAR_2);
  FUNC_1(VAR_1->task, VAR_2);


 case 130:
  FUNC_2(VAR_1->task, VAR_2);


 case 131:



  FUNC_11(VAR_1);

  VAR_4 = &(VAR_1->p_stats->ri_child);
  VAR_2->ri_child_user_time = VAR_4->ri_child_user_time;
  VAR_2->ri_child_system_time = VAR_4->ri_child_system_time;
  VAR_2->ri_child_pkg_idle_wkups = VAR_4->ri_child_pkg_idle_wkups;
  VAR_2->ri_child_interrupt_wkups = VAR_4->ri_child_interrupt_wkups;
  VAR_2->ri_child_pageins = VAR_4->ri_child_pageins;
  VAR_2->ri_child_elapsed_abstime = VAR_4->ri_child_elapsed_abstime;

  FUNC_12(VAR_1);


 case 132:
  FUNC_10(VAR_1, (unsigned char *)&VAR_2->ri_uuid, sizeof (VAR_2->ri_uuid));
  FUNC_5(VAR_1->task, VAR_2);
  VAR_2->ri_proc_start_abstime = VAR_1->p_stats->ps_start;
 }
}

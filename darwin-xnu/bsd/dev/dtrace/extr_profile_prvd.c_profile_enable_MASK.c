
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ prof_interval; scalar_t__ prof_kind; scalar_t__ prof_cyclic; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int dtrace_id_t ;
typedef scalar_t__ cyclic_id_t ;
struct TYPE_9__ {scalar_t__ cyt_interval; scalar_t__ cyt_when; } ;
typedef TYPE_2__ cyc_time_t ;
struct TYPE_10__ {TYPE_1__* cyo_arg; int cyo_offline; int cyo_online; } ;
typedef TYPE_3__ cyc_omni_handler_t ;
struct TYPE_11__ {int cyh_level; TYPE_1__* cyh_arg; int cyh_func; } ;
typedef TYPE_4__ cyc_handler_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(void *VAR_7, dtrace_id_t VAR_8, void *VAR_9)
{
#pragma unused(arg,id)
 profile_probe_t *VAR_10 = VAR_9;
 cyc_omni_handler_t VAR_11;
 cyc_handler_t VAR_12;
 cyc_time_t VAR_13;

 FUNC_0(VAR_10->prof_interval != 0);
 FUNC_0(FUNC_1(&VAR_3));

 if (VAR_10->prof_kind == VAR_2) {
  VAR_12.cyh_func = VAR_6;
  VAR_12.cyh_arg = VAR_10;
  VAR_12.cyh_level = VAR_0;

  VAR_13.cyt_interval = VAR_10->prof_interval;

  VAR_13.cyt_when = FUNC_4() + VAR_13.cyt_interval;



 } else {
  FUNC_0(VAR_10->prof_kind == VAR_1);
  VAR_11.cyo_online = VAR_5;
  VAR_11.cyo_offline = VAR_4;
  VAR_11.cyo_arg = VAR_10;
 }

 if (VAR_10->prof_kind == VAR_2) {
  VAR_10->prof_cyclic = FUNC_3(&VAR_12, &VAR_13);
 } else {
  VAR_10->prof_cyclic = (cyclic_id_t)FUNC_2(&VAR_11);
 }

 return(0);
}

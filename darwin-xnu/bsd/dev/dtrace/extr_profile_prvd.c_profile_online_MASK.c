
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ prof_interval; } ;
typedef TYPE_1__ profile_probe_t ;
struct TYPE_8__ {scalar_t__ profc_interval; scalar_t__ profc_expected; TYPE_1__* profc_probe; } ;
typedef TYPE_2__ profile_probe_percpu_t ;
typedef int dtrace_cpu_t ;
struct TYPE_9__ {scalar_t__ cyt_interval; scalar_t__ cyt_when; } ;
typedef TYPE_3__ cyc_time_t ;
struct TYPE_10__ {int cyh_level; TYPE_2__* cyh_arg; int cyh_func; } ;
typedef TYPE_4__ cyc_handler_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, dtrace_cpu_t *VAR_3, cyc_handler_t *VAR_4, cyc_time_t *VAR_5)
{
#pragma unused(cpu)
 profile_probe_t *VAR_6 = VAR_2;
 profile_probe_percpu_t *VAR_7;

 VAR_7 = ((profile_probe_percpu_t *)(&(VAR_6[1]))) + FUNC_0();
 VAR_7->profc_probe = VAR_6;

 VAR_4->cyh_func = VAR_1;
 VAR_4->cyh_arg = VAR_7;
 VAR_4->cyh_level = VAR_0;

 VAR_5->cyt_interval = VAR_6->prof_interval;
 VAR_5->cyt_when = FUNC_1() + VAR_5->cyt_interval;

 VAR_7->profc_expected = VAR_5->cyt_when;
 VAR_7->profc_interval = VAR_5->cyt_interval;
}

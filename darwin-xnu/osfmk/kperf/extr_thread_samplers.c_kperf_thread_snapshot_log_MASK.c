
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kperf_thread_snapshot {int kpthsn_flags; int kpthsn_io_tier; int kpthsn_last_made_runnable_time; scalar_t__ kpthsn_suspend_count; } ;


 int FUNC_0 (int ,int,int ,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct kperf_thread_snapshot *VAR_2)
{
 FUNC_3(VAR_2 != ((void*)0));

 FUNC_0(VAR_0, VAR_2->kpthsn_flags | ((uint32_t)(VAR_2->kpthsn_suspend_count) << 8)
                                               | (VAR_2->kpthsn_io_tier << 24),
                            VAR_2->kpthsn_last_made_runnable_time);






}

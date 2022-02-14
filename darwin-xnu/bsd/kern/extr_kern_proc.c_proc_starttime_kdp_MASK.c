
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unaligned_u64 ;
typedef TYPE_3__* proc_t ;
struct TYPE_5__ {int tv_usec; int tv_sec; } ;
struct TYPE_7__ {TYPE_2__* p_stats; TYPE_1__ p_start; } ;
struct TYPE_6__ {int ps_start; } ;


 TYPE_3__* VAR_0 ;

void
FUNC_0(void *VAR_1, unaligned_u64 *VAR_2, unaligned_u64 *VAR_3, unaligned_u64 *VAR_4)
{
 proc_t VAR_5 = (proc_t)VAR_1;
 if (VAR_5 != VAR_0) {
  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_5->p_start.tv_sec;
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_5->p_start.tv_usec;
  if (VAR_4 != ((void*)0)) {
   if (VAR_5->p_stats != ((void*)0))
    *VAR_4 = VAR_5->p_stats->ps_start;
   else
    *VAR_4 = 0;
  }
 }
}

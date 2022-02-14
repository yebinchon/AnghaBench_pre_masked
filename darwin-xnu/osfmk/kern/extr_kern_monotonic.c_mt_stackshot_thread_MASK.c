
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_4__ {scalar_t__* mth_counts; } ;
struct TYPE_5__ {TYPE_1__ t_monotonic; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

void
FUNC_1(thread_t VAR_3, uint64_t *VAR_4, uint64_t *VAR_5)
{
 FUNC_0(VAR_2);




 *VAR_4 = 0;


 *VAR_5 = VAR_3->t_monotonic.mth_counts[VAR_0];
}

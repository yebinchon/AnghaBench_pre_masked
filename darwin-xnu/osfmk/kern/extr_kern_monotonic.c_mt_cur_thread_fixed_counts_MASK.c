
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_5__ {scalar_t__* mth_counts; } ;
struct TYPE_6__ {TYPE_1__ t_monotonic; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(uint64_t *VAR_3)
{
 if (!VAR_2) {
  for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   VAR_3[VAR_4] = 0;
  }
  return;
 }

 thread_t VAR_5 = FUNC_0();
 int VAR_6 = FUNC_1(VAR_0);
 (void)FUNC_2(VAR_5);
 for (int VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_3[VAR_7] = VAR_5->t_monotonic.mth_counts[VAR_7];
 }
 FUNC_1(VAR_6);
}

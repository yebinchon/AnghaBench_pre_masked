
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* thread_t ;
typedef int boolean_t ;
struct TYPE_5__ {int * mth_counts; } ;
struct TYPE_6__ {TYPE_1__ t_monotonic; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;

uint64_t
FUNC_3(void)
{
 thread_t VAR_3 = FUNC_0();
 boolean_t VAR_4;
 uint64_t VAR_5;

 if (!VAR_2) {
  return 0;
 }

 VAR_4 = FUNC_1(VAR_0);
 (void)FUNC_2(VAR_3);
 VAR_5 = VAR_3->t_monotonic.mth_counts[VAR_1];
 FUNC_1(VAR_4);

 return VAR_5;
}

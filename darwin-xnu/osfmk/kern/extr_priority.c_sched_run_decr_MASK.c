
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_3__ {int state; int th_sched_bucket; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int * VAR_3 ;

uint32_t
FUNC_3(thread_t VAR_4)
{
 FUNC_0((VAR_4->state & (VAR_2|VAR_1)) != VAR_2);

 FUNC_2(VAR_4->th_sched_bucket);

 uint32_t VAR_5 = FUNC_1(&VAR_3[VAR_0], 1);

 return VAR_5;
}

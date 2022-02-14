
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct fast_timer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fast_timer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (struct fast_timer*,int ,unsigned long,unsigned long,char*) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;

void FUNC_6(unsigned long VAR_1)
{
  struct fast_timer VAR_2;
  wait_queue_head_t VAR_3;
  FUNC_2(&VAR_3);

  FUNC_0(FUNC_3("schedule_usleep(%d)\n", VAR_1));
  FUNC_4(&VAR_2, VAR_0, (unsigned long)&VAR_3, VAR_1,
                       "usleep");


 FUNC_5(VAR_3, !FUNC_1(&VAR_2));

  FUNC_0(FUNC_3("done schedule_usleep(%d)\n", VAR_1));
}

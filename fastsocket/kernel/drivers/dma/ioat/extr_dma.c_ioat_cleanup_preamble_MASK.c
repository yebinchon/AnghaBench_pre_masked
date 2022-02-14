
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_chan_common {unsigned long last_completion; int timer; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 unsigned long FUNC_1 (struct ioat_chan_common*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;

bool FUNC_3(struct ioat_chan_common *VAR_3,
      unsigned long *VAR_4)
{
 *VAR_4 = FUNC_1(VAR_3);
 if (*VAR_4 == VAR_3->last_completion)
  return 0;
 FUNC_0(VAR_1, &VAR_3->state);
 FUNC_2(&VAR_3->timer, VAR_2 + VAR_0);

 return 1;
}

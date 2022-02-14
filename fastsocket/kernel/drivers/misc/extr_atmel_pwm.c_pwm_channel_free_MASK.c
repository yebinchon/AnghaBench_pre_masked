
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_channel {int dummy; } ;
struct TYPE_3__ {int lock; int clk; int ** handler; int ** channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct pwm_channel*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct pwm_channel *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2->lock, VAR_4);
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 >= 0) {
  VAR_2->channel[VAR_5] = ((void*)0);
  VAR_2->handler[VAR_5] = ((void*)0);


  FUNC_1(VAR_2, VAR_0, 1 << VAR_5);
  FUNC_1(VAR_2, VAR_1, 1 << VAR_5);

  FUNC_0(VAR_2->clk);
  VAR_5 = 0;
 }
 FUNC_4(&VAR_2->lock, VAR_4);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pwm_channel {int index; int mck; int regs; } ;
struct TYPE_4__ {int mask; int lock; int ** handler; struct pwm_channel** channel; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pwm_channel*,int ,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(int VAR_7, struct pwm_channel *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10 = 0;


 if (!VAR_6 || !(VAR_6->mask & 1 << VAR_7))
  return -VAR_2;

 if (VAR_7 < 0 || VAR_7 >= VAR_5 || !VAR_8)
  return -VAR_1;
 FUNC_2(VAR_8, 0, sizeof *VAR_8);

 FUNC_5(&VAR_6->lock, VAR_9);
 if (VAR_6->channel[VAR_7])
  VAR_10 = -VAR_0;
 else {
  FUNC_0(VAR_6->clk);

  VAR_8->regs = FUNC_4(VAR_6, VAR_7);
  VAR_8->index = VAR_7;


  VAR_8->mck = FUNC_1(VAR_6->clk);

  VAR_6->channel[VAR_7] = VAR_8;
  VAR_6->handler[VAR_7] = ((void*)0);


  FUNC_3(VAR_6, VAR_3, 1 << VAR_7);
  FUNC_3(VAR_6, VAR_4, 1 << VAR_7);
 }
 FUNC_6(&VAR_6->lock, VAR_9);
 return VAR_10;
}

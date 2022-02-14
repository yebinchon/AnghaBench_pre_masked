
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_channel {int index; } ;
struct TYPE_2__ {struct pwm_channel** channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_0(struct pwm_channel *VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return -VAR_1;
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = VAR_4->index;
 if (VAR_5 < 0 || VAR_5 >= VAR_2 || VAR_3->channel[VAR_5] != VAR_4)
  return -VAR_0;

 return VAR_5;
}

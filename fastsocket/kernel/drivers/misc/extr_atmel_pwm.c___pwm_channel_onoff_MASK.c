
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_channel {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct pwm_channel*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct pwm_channel*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct pwm_channel *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;



 FUNC_3(&VAR_2->lock, VAR_5);
 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 >= 0) {
  FUNC_1(VAR_2, VAR_4 ? VAR_1 : VAR_0, 1 << VAR_6);
  VAR_6 = 0;
  FUNC_0(VAR_3, VAR_4 ? "enable" : "disable");
 }
 FUNC_4(&VAR_2->lock, VAR_5);

 return VAR_6;
}

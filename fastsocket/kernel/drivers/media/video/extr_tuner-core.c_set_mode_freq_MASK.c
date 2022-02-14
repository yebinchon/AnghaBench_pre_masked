
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct analog_demod_ops {int (* standby ) (TYPE_2__*) ;} ;
struct TYPE_3__ {struct analog_demod_ops analog_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {int mode; int standby; unsigned int radio_freq; unsigned int tv_freq; TYPE_2__ fe; } ;
struct i2c_client {int dummy; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tuner*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned int) ;
 int FUNC_2 (struct i2c_client*,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2, struct tuner *VAR_3,
    enum v4l2_tuner_type VAR_4, unsigned int VAR_5)
{
 struct analog_demod_ops *VAR_6 = &VAR_3->fe.ops.analog_ops;

 if (VAR_4 != VAR_3->mode) {
  if (FUNC_0(VAR_3, VAR_4) == -VAR_0) {
   FUNC_4("Tuner doesn't support mode %d. "
      "Putting tuner to sleep\n", VAR_4);
   VAR_3->standby = 1;
   if (VAR_6->standby)
    VAR_6->standby(&VAR_3->fe);
   return -VAR_0;
  }
  VAR_3->mode = VAR_4;
  FUNC_4("Changing to mode %d\n", VAR_4);
 }
 if (VAR_3->mode == VAR_1) {
  if (VAR_5)
   VAR_3->radio_freq = VAR_5;
  FUNC_1(VAR_2, VAR_3->radio_freq);
 } else {
  if (VAR_5)
   VAR_3->tv_freq = VAR_5;
  FUNC_2(VAR_2, VAR_3->tv_freq);
 }

 return 0;
}

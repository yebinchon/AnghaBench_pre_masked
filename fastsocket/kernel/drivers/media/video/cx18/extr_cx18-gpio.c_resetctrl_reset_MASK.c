
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_gpio_i2c_slave_reset {int active_lo_mask; int msecs_asserted; int msecs_recovery; int ir_reset_mask; int active_hi_mask; } ;
struct cx18 {TYPE_2__* card; } ;
struct TYPE_4__ {int xceive_pin; TYPE_1__* tuners; struct cx18_gpio_i2c_slave_reset gpio_i2c_slave_reset; } ;
struct TYPE_3__ {int tuner; } ;





 int VAR_0 ;
 int FUNC_0 (struct cx18*,int,int ,int,int) ;
 struct cx18* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 struct cx18 *VAR_3 = FUNC_1(VAR_1);
 const struct cx18_gpio_i2c_slave_reset *VAR_4;

 VAR_4 = &VAR_3->card->gpio_i2c_slave_reset;
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_3, VAR_4->active_lo_mask, VAR_4->active_hi_mask,
          VAR_4->msecs_asserted, VAR_4->msecs_recovery);
  break;
 case 128:
  FUNC_0(VAR_3, VAR_4->ir_reset_mask, 0,
          VAR_4->msecs_asserted, VAR_4->msecs_recovery);
  break;
 case 129:
  if (VAR_3->card->tuners[0].tuner == VAR_0)
   FUNC_0(VAR_3, (1 << VAR_3->card->xceive_pin), 0,
           1, 1);
  break;
 }
 return 0;
}

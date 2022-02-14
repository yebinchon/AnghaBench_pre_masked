
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cx25840_ir_fifo_rec {int dummy; } cx25840_ir_fifo_rec ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct v4l2_subdev_ir_parameters {scalar_t__ mode; int bytes_per_data_element; int enable; scalar_t__ interrupt_enable; int invert_level; int invert_carrier_sense; int resolution; scalar_t__ max_pulse_width; int duty_cycle; int carrier_freq; int modulation; scalar_t__ shutdown; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_ir_state {int tx_params_lock; int txclk_divider; struct v4l2_subdev_ir_parameters tx_params; struct i2c_client* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 struct cx25840_ir_state* FUNC_12 (struct v4l2_subdev*) ;
 int FUNC_13 (struct i2c_client*,int ,int *) ;
 scalar_t__ FUNC_14 (struct i2c_client*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_15(struct v4l2_subdev *VAR_6,
          struct v4l2_subdev_ir_parameters *VAR_7)
{
 struct cx25840_ir_state *VAR_8 = FUNC_12(VAR_6);
 struct i2c_client *VAR_9;
 struct v4l2_subdev_ir_parameters *VAR_10;
 u16 VAR_11;

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (VAR_7->shutdown)
  return FUNC_7(VAR_6);

 if (VAR_7->mode != VAR_5)
  return -VAR_1;

 VAR_9 = VAR_8->c;
 VAR_10 = &VAR_8->tx_params;
 FUNC_9(&VAR_8->tx_params_lock);

 VAR_10->shutdown = VAR_7->shutdown;

 VAR_7->mode = VAR_5;
 VAR_10->mode = VAR_7->mode;

 VAR_7->bytes_per_data_element = sizeof(union cx25840_ir_fifo_rec);
 VAR_10->bytes_per_data_element = VAR_7->bytes_per_data_element;


 FUNC_8(VAR_6, 0);
 FUNC_3(VAR_9, 0);

 FUNC_5(VAR_9, VAR_7->modulation);
 VAR_10->modulation = VAR_7->modulation;

 if (VAR_7->modulation) {
  VAR_7->carrier_freq = FUNC_13(VAR_9, VAR_7->carrier_freq,
           &VAR_11);
  VAR_10->carrier_freq = VAR_7->carrier_freq;

  VAR_7->duty_cycle = FUNC_1(VAR_9, VAR_7->duty_cycle);
  VAR_10->duty_cycle = VAR_7->duty_cycle;

  VAR_7->max_pulse_width =
   (u32) FUNC_11(VAR_2, VAR_11);
 } else {
  VAR_7->max_pulse_width =
       FUNC_14(VAR_9, VAR_7->max_pulse_width,
             &VAR_11);
 }
 VAR_10->max_pulse_width = VAR_7->max_pulse_width;
 FUNC_0(&VAR_8->txclk_divider, VAR_11);

 VAR_7->resolution = FUNC_2(VAR_11);
 VAR_10->resolution = VAR_7->resolution;


 FUNC_4(VAR_9, VAR_4);

 FUNC_6(VAR_9, VAR_7->invert_carrier_sense);
 VAR_10->invert_carrier_sense = VAR_7->invert_carrier_sense;







 VAR_10->invert_level = VAR_7->invert_level;

 VAR_10->interrupt_enable = VAR_7->interrupt_enable;
 VAR_10->enable = VAR_7->enable;
 if (VAR_7->enable) {

  if (VAR_7->interrupt_enable)
   FUNC_8(VAR_6, VAR_3);
  FUNC_3(VAR_9, VAR_7->enable);
 }

 FUNC_10(&VAR_8->tx_params_lock);
 return 0;
}

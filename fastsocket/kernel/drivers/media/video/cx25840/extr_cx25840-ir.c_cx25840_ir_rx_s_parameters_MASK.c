
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cx25840_ir_fifo_rec {int dummy; } cx25840_ir_fifo_rec ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct v4l2_subdev_ir_parameters {scalar_t__ mode; int bytes_per_data_element; int duty_cycle; int enable; scalar_t__ interrupt_enable; int invert_level; int resolution; int noise_filter_min_width; scalar_t__ max_pulse_width; int carrier_range_upper; int carrier_range_lower; int carrier_freq; int modulation; scalar_t__ shutdown; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_ir_state {int rx_params_lock; int rx_kfifo; int rx_invert; int rxclk_divider; struct v4l2_subdev_ir_parameters rx_params; struct i2c_client* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int *,int *) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct v4l2_subdev*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (struct i2c_client*,int ,int *) ;
 scalar_t__ FUNC_15 (struct i2c_client*,scalar_t__,int *) ;
 struct cx25840_ir_state* FUNC_16 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_17(struct v4l2_subdev *VAR_9,
          struct v4l2_subdev_ir_parameters *VAR_10)
{
 struct cx25840_ir_state *VAR_11 = FUNC_16(VAR_9);
 struct i2c_client *VAR_12;
 struct v4l2_subdev_ir_parameters *VAR_13;
 u16 VAR_14;

 if (VAR_11 == ((void*)0))
  return -VAR_1;

 if (VAR_10->shutdown)
  return FUNC_7(VAR_9);

 if (VAR_10->mode != VAR_8)
  return -VAR_2;

 VAR_12 = VAR_11->c;
 VAR_13 = &VAR_11->rx_params;

 FUNC_11(&VAR_11->rx_params_lock);

 VAR_13->shutdown = VAR_10->shutdown;

 VAR_10->mode = VAR_8;
 VAR_13->mode = VAR_10->mode;

 VAR_10->bytes_per_data_element = sizeof(union cx25840_ir_fifo_rec);
 VAR_13->bytes_per_data_element = VAR_10->bytes_per_data_element;


 FUNC_9(VAR_9, 0);
 FUNC_3(VAR_12, 0);

 FUNC_2(VAR_12, VAR_10->modulation);
 VAR_13->modulation = VAR_10->modulation;

 if (VAR_10->modulation) {
  VAR_10->carrier_freq = FUNC_14(VAR_12, VAR_10->carrier_freq,
           &VAR_14);

  VAR_13->carrier_freq = VAR_10->carrier_freq;

  VAR_10->duty_cycle = 50;
  VAR_13->duty_cycle = VAR_10->duty_cycle;

  FUNC_5(VAR_12, VAR_10->carrier_freq,
         &VAR_10->carrier_range_lower,
         &VAR_10->carrier_range_upper);
  VAR_13->carrier_range_lower = VAR_10->carrier_range_lower;
  VAR_13->carrier_range_upper = VAR_10->carrier_range_upper;

  VAR_10->max_pulse_width =
   (u32) FUNC_13(VAR_3, VAR_14);
 } else {
  VAR_10->max_pulse_width =
       FUNC_15(VAR_12, VAR_10->max_pulse_width,
             &VAR_14);
 }
 VAR_13->max_pulse_width = VAR_10->max_pulse_width;
 FUNC_0(&VAR_11->rxclk_divider, VAR_14);

 VAR_10->noise_filter_min_width =
       FUNC_8(VAR_12, VAR_10->noise_filter_min_width);
 VAR_13->noise_filter_min_width = VAR_10->noise_filter_min_width;

 VAR_10->resolution = FUNC_1(VAR_14);
 VAR_13->resolution = VAR_10->resolution;


 FUNC_4(VAR_12, VAR_7);

 FUNC_6(VAR_12, VAR_0);

 VAR_13->invert_level = VAR_10->invert_level;
 FUNC_0(&VAR_11->rx_invert, VAR_10->invert_level);

 VAR_13->interrupt_enable = VAR_10->interrupt_enable;
 VAR_13->enable = VAR_10->enable;
 if (VAR_10->enable) {
  FUNC_10(VAR_11->rx_kfifo);
  if (VAR_10->interrupt_enable)
   FUNC_9(VAR_9, VAR_5 | VAR_6 | VAR_4);
  FUNC_3(VAR_12, VAR_10->enable);
 }

 FUNC_12(&VAR_11->rx_params_lock);
 return 0;
}

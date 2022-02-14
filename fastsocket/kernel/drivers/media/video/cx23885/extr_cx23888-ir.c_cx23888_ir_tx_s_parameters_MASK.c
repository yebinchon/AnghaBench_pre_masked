
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cx23888_ir_fifo_rec {int dummy; } cx23888_ir_fifo_rec ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct v4l2_subdev_ir_parameters {scalar_t__ mode; int bytes_per_data_element; int enable; scalar_t__ interrupt_enable; int invert_level; int invert_carrier_sense; int resolution; scalar_t__ max_pulse_width; int duty_cycle; int carrier_freq; int modulation; scalar_t__ shutdown; } ;
struct v4l2_subdev {int dummy; } ;
struct cx23888_ir_state {int tx_params_lock; int txclk_divider; struct v4l2_subdev_ir_parameters tx_params; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cx23885_dev*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cx23885_dev*,int) ;
 int FUNC_4 (struct cx23885_dev*,int ) ;
 int FUNC_5 (struct cx23885_dev*,int ) ;
 int FUNC_6 (struct cx23885_dev*,int ) ;
 int FUNC_7 (struct cx23885_dev*,int ) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct cx23885_dev*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 struct cx23888_ir_state* FUNC_13 (struct v4l2_subdev*) ;
 int FUNC_14 (struct cx23885_dev*,int ,int *) ;
 scalar_t__ FUNC_15 (struct cx23885_dev*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_16(struct v4l2_subdev *VAR_5,
          struct v4l2_subdev_ir_parameters *VAR_6)
{
 struct cx23888_ir_state *VAR_7 = FUNC_13(VAR_5);
 struct cx23885_dev *VAR_8 = VAR_7->dev;
 struct v4l2_subdev_ir_parameters *VAR_9 = &VAR_7->tx_params;
 u16 VAR_10;

 if (VAR_6->shutdown)
  return FUNC_8(VAR_5);

 if (VAR_6->mode != VAR_4)
  return -VAR_0;

 FUNC_10(&VAR_7->tx_params_lock);

 VAR_9->shutdown = VAR_6->shutdown;

 VAR_9->mode = VAR_6->mode = VAR_4;

 VAR_9->bytes_per_data_element = VAR_6->bytes_per_data_element
      = sizeof(union cx23888_ir_fifo_rec);


 FUNC_9(VAR_8, 0);
 FUNC_3(VAR_8, 0);

 FUNC_6(VAR_8, VAR_6->modulation);
 VAR_9->modulation = VAR_6->modulation;

 if (VAR_6->modulation) {
  VAR_6->carrier_freq = FUNC_14(VAR_8, VAR_6->carrier_freq,
           &VAR_10);
  VAR_9->carrier_freq = VAR_6->carrier_freq;

  VAR_6->duty_cycle = FUNC_1(VAR_8, VAR_6->duty_cycle);
  VAR_9->duty_cycle = VAR_6->duty_cycle;

  VAR_6->max_pulse_width =
   (u32) FUNC_12(VAR_1, VAR_10);
 } else {
  VAR_6->max_pulse_width =
       FUNC_15(VAR_8, VAR_6->max_pulse_width,
             &VAR_10);
 }
 VAR_9->max_pulse_width = VAR_6->max_pulse_width;
 FUNC_0(&VAR_7->txclk_divider, VAR_10);

 VAR_6->resolution = FUNC_2(VAR_10);
 VAR_9->resolution = VAR_6->resolution;


 FUNC_4(VAR_8, VAR_3);

 FUNC_7(VAR_8, VAR_6->invert_carrier_sense);
 VAR_9->invert_carrier_sense = VAR_6->invert_carrier_sense;

 FUNC_5(VAR_8, VAR_6->invert_level);
 VAR_9->invert_level = VAR_6->invert_level;

 VAR_9->interrupt_enable = VAR_6->interrupt_enable;
 VAR_9->enable = VAR_6->enable;
 if (VAR_6->enable) {
  if (VAR_6->interrupt_enable)
   FUNC_9(VAR_8, VAR_2);
  FUNC_3(VAR_8, VAR_6->enable);
 }

 FUNC_11(&VAR_7->tx_params_lock);
 return 0;
}

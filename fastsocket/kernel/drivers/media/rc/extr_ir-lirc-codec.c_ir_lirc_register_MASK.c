
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_dev {char* driver_name; TYPE_2__* raw; int dev; scalar_t__ max_timeout; scalar_t__ s_carrier_report; scalar_t__ s_learning_mode; scalar_t__ s_rx_carrier_range; scalar_t__ s_tx_duty_cycle; scalar_t__ s_tx_carrier; scalar_t__ s_tx_mask; scalar_t__ tx_ir; } ;
struct lirc_driver {int minor; unsigned long features; int code_length; int owner; int * dev; int * fops; int * set_use_dec; int * set_use_inc; struct lirc_driver* rbuf; TYPE_1__* data; int name; } ;
struct lirc_buffer {int minor; unsigned long features; int code_length; int owner; int * dev; int * fops; int * set_use_dec; int * set_use_inc; struct lirc_buffer* rbuf; TYPE_1__* data; int name; } ;
struct ir_raw_event {int dummy; } ;
struct TYPE_3__ {struct rc_dev* dev; struct lirc_driver* drv; } ;
struct TYPE_4__ {TYPE_1__ lirc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct lirc_driver*) ;
 struct lirc_driver* FUNC_1 (int,int ) ;
 int FUNC_2 (struct lirc_driver*,int,int ) ;
 int VAR_17 ;
 int FUNC_3 (struct lirc_driver*) ;
 int FUNC_4 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_18)
{
 struct lirc_driver *VAR_19;
 struct lirc_buffer *VAR_20;
 int VAR_21 = -VAR_1;
 unsigned long VAR_22;

 VAR_19 = FUNC_1(sizeof(struct lirc_driver), VAR_2);
 if (!VAR_19)
  return VAR_21;

 VAR_20 = FUNC_1(sizeof(struct lirc_buffer), VAR_2);
 if (!VAR_20)
  goto rbuf_alloc_failed;

 VAR_21 = FUNC_2(VAR_20, sizeof(int), VAR_3);
 if (VAR_21)
  goto rbuf_init_failed;

 VAR_22 = VAR_5;
 if (VAR_18->tx_ir) {
  VAR_22 |= VAR_6;
  if (VAR_18->s_tx_mask)
   VAR_22 |= VAR_12;
  if (VAR_18->s_tx_carrier)
   VAR_22 |= VAR_10;
  if (VAR_18->s_tx_duty_cycle)
   VAR_22 |= VAR_11;
 }

 if (VAR_18->s_rx_carrier_range)
  VAR_22 |= VAR_7 |
   VAR_8;

 if (VAR_18->s_learning_mode)
  VAR_22 |= VAR_13;

 if (VAR_18->s_carrier_report)
  VAR_22 |= VAR_4;

 if (VAR_18->max_timeout)
  VAR_22 |= VAR_9;

 FUNC_4(VAR_19->name, sizeof(VAR_19->name), "ir-lirc-codec (%s)",
   VAR_18->driver_name);
 VAR_19->minor = -1;
 VAR_19->features = VAR_22;
 VAR_19->data = &VAR_18->raw->lirc;
 VAR_19->rbuf = VAR_20;
 VAR_19->set_use_inc = &VAR_16;
 VAR_19->set_use_dec = &VAR_15;
 VAR_19->code_length = sizeof(struct ir_raw_event) * 8;
 VAR_19->fops = &VAR_17;
 VAR_19->dev = &VAR_18->dev;
 VAR_19->owner = VAR_14;

 VAR_19->minor = FUNC_3(VAR_19);
 if (VAR_19->minor < 0) {
  VAR_21 = -VAR_0;
  goto lirc_register_failed;
 }

 VAR_18->raw->lirc.drv = VAR_19;
 VAR_18->raw->lirc.dev = VAR_18;
 return 0;

lirc_register_failed:
rbuf_init_failed:
 FUNC_0(VAR_20);
rbuf_alloc_failed:
 FUNC_0(VAR_19);

 return VAR_21;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbduxsub {int ai_cmd_running; int* dux_commands; int ai_interval; int ai_timer; int ai_counter; int ai_continous; int sem; scalar_t__ ai_sample_count; TYPE_1__* interface; scalar_t__ high_speed; int probed; } ;
struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
struct comedi_cmd {int chanlist_len; int scan_begin_arg; scalar_t__ stop_src; scalar_t__ start_src; scalar_t__ stop_arg; int * chanlist; } ;
struct TYPE_4__ {int * inttrig; scalar_t__ cur_chan; struct comedi_cmd cmd; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *,char*,int ,...) ;
 int FUNC_4 (int *,char*,int ,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usbduxsub*,int ) ;
 int FUNC_7 (int *) ;
 int * VAR_8 ;
 int FUNC_8 (struct usbduxsub*) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_9, struct comedi_subdevice *VAR_10)
{
 struct comedi_cmd *VAR_11 = &VAR_10->async->cmd;
 unsigned int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 struct usbduxsub *VAR_16 = VAR_9->private;
 int VAR_17;

 if (!VAR_16)
  return -VAR_1;

 FUNC_3(&VAR_16->interface->dev,
  "comedi%d: usbdux_ai_cmd\n", VAR_9->minor);


 FUNC_5(&VAR_16->sem);

 if (!(VAR_16->probed)) {
  FUNC_7(&VAR_16->sem);
  return -VAR_3;
 }
 if (VAR_16->ai_cmd_running) {
  FUNC_4(&VAR_16->interface->dev, "comedi%d: "
   "ai_cmd not possible. Another ai_cmd is running.\n",
   VAR_9->minor);
  FUNC_7(&VAR_16->sem);
  return -VAR_0;
 }

 VAR_10->async->cur_chan = 0;

 VAR_16->dux_commands[1] = VAR_11->chanlist_len;
 for (VAR_14 = 0; VAR_14 < VAR_11->chanlist_len; ++VAR_14) {
  VAR_12 = FUNC_0(VAR_11->chanlist[VAR_14]);
  VAR_13 = FUNC_1(VAR_11->chanlist[VAR_14]);
  if (VAR_14 >= VAR_4) {
   FUNC_4(&VAR_16->interface->dev,
    "comedi%d: channel list too long\n",
    VAR_9->minor);
   break;
  }
  VAR_16->dux_commands[VAR_14 + 2] =
      FUNC_2(VAR_12, VAR_13);
 }

 FUNC_3(&VAR_16->interface->dev,
  "comedi %d: sending commands to the usb device: size=%u\n",
  VAR_9->minor, VAR_4);

 VAR_17 = FUNC_6(VAR_16, VAR_5);
 if (VAR_17 < 0) {
  FUNC_7(&VAR_16->sem);
  return VAR_17;
 }

 if (VAR_16->high_speed) {





  VAR_16->ai_interval = 1;

  while ((VAR_16->ai_interval) < (VAR_11->chanlist_len)) {
   VAR_16->ai_interval =
       (VAR_16->ai_interval) * 2;
  }
  VAR_16->ai_timer = VAR_11->scan_begin_arg / (125000 *
          (VAR_16->
           ai_interval));
 } else {

  VAR_16->ai_interval = 1;
  VAR_16->ai_timer = VAR_11->scan_begin_arg / 1000000;
 }
 if (VAR_16->ai_timer < 1) {
  FUNC_4(&VAR_16->interface->dev, "comedi%d: ai_cmd: "
   "timer=%d, scan_begin_arg=%d. "
   "Not properly tested by cmdtest?\n", VAR_9->minor,
   VAR_16->ai_timer, VAR_11->scan_begin_arg);
  FUNC_7(&VAR_16->sem);
  return -VAR_2;
 }
 VAR_16->ai_counter = VAR_16->ai_timer;

 if (VAR_11->stop_src == VAR_6) {

  VAR_16->ai_sample_count = VAR_11->stop_arg;
  VAR_16->ai_continous = 0;
 } else {

  VAR_16->ai_continous = 1;
  VAR_16->ai_sample_count = 0;
 }

 if (VAR_11->start_src == VAR_7) {

  VAR_16->ai_cmd_running = 1;
  VAR_15 = FUNC_8(VAR_16);
  if (VAR_15 < 0) {
   VAR_16->ai_cmd_running = 0;

   FUNC_7(&VAR_16->sem);
   return VAR_15;
  }
  VAR_10->async->inttrig = ((void*)0);
 } else {



  VAR_10->async->inttrig = VAR_8;
 }
 FUNC_7(&VAR_16->sem);
 return 0;
}

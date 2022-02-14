
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {int flags; scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_4__ {scalar_t__ layout; } ;
struct TYPE_3__ {scalar_t__ ai_count; scalar_t__ ai_cmd_running; scalar_t__ plx9080_iobase; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,char*) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*) ;
 TYPE_1__* FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int,scalar_t__) ;

void FUNC_11(struct comedi_device *VAR_14, unsigned short VAR_15,
    unsigned int VAR_16)
{
 struct comedi_subdevice *VAR_17 = VAR_14->read_subdev;
 struct comedi_async *VAR_18 = VAR_17->async;
 struct comedi_cmd *VAR_19 = &VAR_18->cmd;
 uint8_t VAR_20;
 unsigned long VAR_21;


 if (VAR_15 & VAR_2) {
  FUNC_3(VAR_14, "fifo overrun");
  VAR_18->events |= VAR_4 | VAR_5;
 }

 FUNC_8(&VAR_14->spinlock, VAR_21);
 VAR_20 = FUNC_7(FUNC_6(VAR_14)->plx9080_iobase + VAR_9);
 if (VAR_16 & VAR_6) {
  FUNC_10((VAR_20 & VAR_10) | VAR_8,
         FUNC_6(VAR_14)->plx9080_iobase + VAR_9);
  FUNC_0("dma1 status 0x%x\n", VAR_20);

  if (VAR_20 & VAR_10) {
   FUNC_4(VAR_14, 1);
  }
  FUNC_0(" cleared dma ch1 interrupt\n");
 }
 FUNC_9(&VAR_14->spinlock, VAR_21);

 if (VAR_15 & VAR_0)
  FUNC_0("adc done interrupt\n");


 if ((VAR_15 & VAR_0) ||
     ((VAR_19->flags & VAR_13) &&
      (VAR_15 & VAR_1) &&
      (FUNC_1(VAR_14)->layout != VAR_7))) {
  FUNC_0("pio fifo drain\n");
  FUNC_8(&VAR_14->spinlock, VAR_21);
  if (FUNC_6(VAR_14)->ai_cmd_running) {
   FUNC_9(&VAR_14->spinlock, VAR_21);
   FUNC_5(VAR_14);
  } else
   FUNC_9(&VAR_14->spinlock, VAR_21);
 }

 if ((VAR_19->stop_src == VAR_11 && FUNC_6(VAR_14)->ai_count <= 0) ||
     (VAR_19->stop_src == VAR_12 && (VAR_15 & VAR_3))) {
  VAR_18->events |= VAR_4;
 }

 FUNC_2(VAR_14, VAR_17);
}

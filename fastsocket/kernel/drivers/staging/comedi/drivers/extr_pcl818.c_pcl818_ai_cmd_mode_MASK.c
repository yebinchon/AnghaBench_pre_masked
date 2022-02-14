
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int irq; scalar_t__ iobase; } ;
struct comedi_cmd {int convert_arg; } ;
struct TYPE_4__ {scalar_t__ dma_rtc; int irq_blocked; int ai_act_scan; int ai_scans; int neverending_ai; int dma; int ai_mode; int usefifo; int i8253_osc_base; scalar_t__ dma_runs_to_end; scalar_t__ act_chanlist_pos; scalar_t__ irq_was_now_closed; scalar_t__ ai_act_chan; int ai_n_chan; int ai_chanlist; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 (int ,int*,int*,int *,int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (int,struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,int ,int ,unsigned int) ;
 int FUNC_9 (struct comedi_device*,int,int,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(int VAR_11, struct comedi_device *VAR_12,
         struct comedi_subdevice *VAR_13)
{
 struct comedi_cmd *VAR_14 = &VAR_13->async->cmd;
 int VAR_15, VAR_16;
 unsigned int VAR_17;

 FUNC_6("pcl818_ai_cmd_mode()\n");
 if ((!VAR_12->irq) && (!VAR_10->dma_rtc)) {
  FUNC_1(VAR_12, "IRQ not defined!");
  return -VAR_1;
 }

 if (VAR_10->irq_blocked)
  return -VAR_0;

 FUNC_9(VAR_12, -1, 0, 0);

 VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_10->ai_chanlist,
        VAR_10->ai_n_chan);
 if (VAR_17 < 1)
  return -VAR_1;
 FUNC_8(VAR_12, VAR_13, VAR_10->ai_chanlist,
      VAR_10->ai_n_chan, VAR_17);

 FUNC_10(1);

 VAR_10->ai_act_scan = VAR_10->ai_scans;
 VAR_10->ai_act_chan = 0;
 VAR_10->irq_blocked = 1;
 VAR_10->irq_was_now_closed = 0;
 VAR_10->neverending_ai = 0;
 VAR_10->act_chanlist_pos = 0;
 VAR_10->dma_runs_to_end = 0;

 if ((VAR_10->ai_scans == 0) || (VAR_10->ai_scans == -1))
  VAR_10->neverending_ai = 1;

 if (VAR_11 == 1) {
  FUNC_2(VAR_10->i8253_osc_base, &VAR_15,
       &VAR_16, &VAR_14->convert_arg,
       VAR_9);
  if (VAR_15 == 1) {
   VAR_15 = 2;
   VAR_16 /= 2;
  }
  if (VAR_16 == 1) {
   VAR_16 = 2;
   VAR_15 /= 2;
  }
 }

 FUNC_3(0, VAR_12->iobase + VAR_6);

 switch (VAR_10->dma) {
 case 1:
 case 3:
  if (VAR_10->dma_rtc == 0) {
   FUNC_4(VAR_11, VAR_12, VAR_13);
  }





  else {
   return -VAR_1;
  }

  break;
 case 0:
  if (!VAR_10->usefifo) {


   if (VAR_11 == 1) {
    VAR_10->ai_mode = VAR_3;

    FUNC_3(0x83 | (VAR_12->irq << 4),
         VAR_12->iobase + VAR_7);
   } else {
    VAR_10->ai_mode = VAR_5;

    FUNC_3(0x82 | (VAR_12->irq << 4),
         VAR_12->iobase + VAR_7);
   }
  } else {


   FUNC_3(1, VAR_12->iobase + VAR_8);
   if (VAR_11 == 1) {
    VAR_10->ai_mode = VAR_2;

    FUNC_3(0x03, VAR_12->iobase + VAR_7);
   } else {
    VAR_10->ai_mode = VAR_4;
    FUNC_3(0x02, VAR_12->iobase + VAR_7);
   }
  }
 }

 FUNC_9(VAR_12, VAR_11, VAR_15, VAR_16);
 FUNC_6("pcl818_ai_cmd_mode() end\n");
 return 0;
}

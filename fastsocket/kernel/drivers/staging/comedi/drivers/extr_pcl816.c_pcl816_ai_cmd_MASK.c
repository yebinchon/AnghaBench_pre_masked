
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int irq; scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ scan_begin_src; scalar_t__ scan_end_src; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; int convert_src; scalar_t__ convert_arg; int flags; scalar_t__ stop_src; scalar_t__ stop_arg; int chanlist; } ;
struct TYPE_6__ {int irq_blocked; int ai_neverending; int dma; unsigned int* hwdmasize; unsigned int dma_runs_to_end; unsigned int last_dma_run; int int816_mode; int * hwdmaptr; scalar_t__ next_dma_buf; scalar_t__ ai_scans; scalar_t__ irq_was_now_closed; scalar_t__ ai_poll_ptr; scalar_t__ ai_act_scan; } ;
struct TYPE_5__ {scalar_t__ ai_ns_min; int i8254_osc_base; } ;
struct TYPE_4__ {struct comedi_cmd cmd; scalar_t__ cur_chan; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,scalar_t__) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_3__* VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,unsigned int*,unsigned int*,scalar_t__*,int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct comedi_device*,int,unsigned int,unsigned int) ;
 TYPE_2__* VAR_13 ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct comedi_device *VAR_14, struct comedi_subdevice *VAR_15)
{
 unsigned int VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19, VAR_20;
 struct comedi_cmd *VAR_21 = &VAR_15->async->cmd;

 if (VAR_21->start_src != VAR_9)
  return -VAR_2;
 if (VAR_21->scan_begin_src != VAR_8)
  return -VAR_2;
 if (VAR_21->scan_end_src != VAR_7)
  return -VAR_2;
 if (VAR_21->scan_end_arg != VAR_21->chanlist_len)
  return -VAR_2;

 if (VAR_12->irq_blocked)
  return -VAR_1;

 if (VAR_21->convert_src == 128) {
  if (VAR_21->convert_arg < VAR_13->ai_ns_min)
   VAR_21->convert_arg = VAR_13->ai_ns_min;

  FUNC_5(VAR_13->i8254_osc_base, &VAR_16,
       &VAR_17, &VAR_21->convert_arg,
       VAR_21->flags & VAR_10);
  if (VAR_16 == 1) {
   VAR_16 = 2;
   VAR_17 /= 2;
  }
  if (VAR_17 == 1) {
   VAR_17 = 2;
   VAR_16 /= 2;
  }
 }

 FUNC_12(VAR_14, -1, 0, 0);

 if (!FUNC_1(VAR_14, VAR_15, VAR_21->chanlist,
       VAR_21->chanlist_len))
  return -VAR_2;
 FUNC_13(1);

 VAR_12->ai_act_scan = 0;
 VAR_15->async->cur_chan = 0;
 VAR_12->irq_blocked = 1;
 VAR_12->ai_poll_ptr = 0;
 VAR_12->irq_was_now_closed = 0;

 if (VAR_21->stop_src == VAR_7) {
  VAR_12->ai_scans = VAR_21->stop_arg;
  VAR_12->ai_neverending = 0;
 } else {
  VAR_12->ai_scans = 0;
  VAR_12->ai_neverending = 1;
 }

 if ((VAR_21->flags & VAR_11)) {
  FUNC_7("pl816: You wankt WAKE_EOS but I dont want handle it");



 }

 if (VAR_12->dma) {
  VAR_19 = VAR_12->hwdmasize[0];
  if (!VAR_12->ai_neverending) {
   VAR_19 = VAR_15->async->cmd.chanlist_len * VAR_15->async->cmd.chanlist_len * sizeof(short);
   VAR_12->dma_runs_to_end = VAR_19 / VAR_12->hwdmasize[0];
   VAR_12->last_dma_run = VAR_19 % VAR_12->hwdmasize[0];
   VAR_12->dma_runs_to_end--;
   if (VAR_12->dma_runs_to_end >= 0)
    VAR_19 = VAR_12->hwdmasize[0];
  } else
   VAR_12->dma_runs_to_end = -1;

  VAR_12->next_dma_buf = 0;
  FUNC_11(VAR_12->dma, VAR_0);
  VAR_18 = FUNC_2();
  FUNC_3(VAR_12->dma);
  FUNC_9(VAR_12->dma, VAR_12->hwdmaptr[0]);
  FUNC_10(VAR_12->dma, VAR_19);
  FUNC_8(VAR_18);
  FUNC_4(VAR_12->dma);
 }

 FUNC_12(VAR_14, 1, VAR_16, VAR_17);
 VAR_20 = ((VAR_12->dma & 0x3) << 4) | (VAR_14->irq & 0x7);

 switch (VAR_21->convert_src) {
 case 128:
  VAR_12->int816_mode = VAR_3;
  FUNC_6(0x32, VAR_14->iobase + VAR_5);
  FUNC_6(VAR_20, VAR_14->iobase + VAR_6);
  break;

 default:
  VAR_12->int816_mode = VAR_4;
  FUNC_6(0x34, VAR_14->iobase + VAR_5);
  FUNC_6(VAR_20, VAR_14->iobase + VAR_6);
  break;
 }

 FUNC_0("pcl816 END: pcl812_ai_cmd()\n");
 return 0;
}

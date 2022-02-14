
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ scan_begin_src; int convert_src; scalar_t__ scan_end_src; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; scalar_t__ convert_arg; int flags; scalar_t__ stop_src; int stop_arg; int chanlist; } ;
struct TYPE_6__ {unsigned int ai_n_chan; scalar_t__* ai_chanlist; int ai_dma; int ai_flags; int ai_data_len; int ai_scans; int ai_neverending; int ai_eos; int* dmabytestomove; int dma_runs_to_end; int* hwdmasize; unsigned int last_dma_run; int mode_reg_int; int * hwdmaptr; scalar_t__ dma; scalar_t__ next_dma_buf; scalar_t__ ai_poll_ptr; scalar_t__ ai_act_scan; int ai_data; scalar_t__ use_ext_trg; } ;
struct TYPE_5__ {scalar_t__ ai_ns_min; int i8254_osc_base; } ;
struct TYPE_4__ {int prealloc_bufsz; scalar_t__ cur_chan; int prealloc_buf; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned int*,unsigned int*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,unsigned int) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct comedi_device*,struct comedi_subdevice*,scalar_t__,int) ;
 int FUNC_12 (struct comedi_device*,int,unsigned int,unsigned int) ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static int FUNC_13(struct comedi_device *VAR_12, struct comedi_subdevice *VAR_13)
{
 unsigned int VAR_14 = 0, VAR_15 = 0, VAR_16, VAR_17, VAR_18;
 struct comedi_cmd *VAR_19 = &VAR_13->async->cmd;





 if (VAR_19->start_src != VAR_7)
  return -VAR_1;
 if (VAR_19->scan_begin_src != VAR_6)
  return -VAR_1;
 if (VAR_10->use_ext_trg) {
  if (VAR_19->convert_src != VAR_5)
   return -VAR_1;
 } else {
  if (VAR_19->convert_src != 128)
   return -VAR_1;
 }
 if (VAR_19->scan_end_src != VAR_4)
  return -VAR_1;
 if (VAR_19->scan_end_arg != VAR_19->chanlist_len)
  return -VAR_1;
 if (VAR_19->chanlist_len > VAR_2)
  return -VAR_1;

 if (VAR_19->convert_src == 128) {
  if (VAR_19->convert_arg < VAR_11->ai_ns_min)
   VAR_19->convert_arg = VAR_11->ai_ns_min;
  FUNC_3(VAR_11->i8254_osc_base,
       &VAR_14, &VAR_15,
       &VAR_19->convert_arg,
       VAR_19->flags & VAR_8);
 }

 FUNC_12(VAR_12, -1, 0, 0);

 VAR_10->ai_n_chan = VAR_19->chanlist_len;
 FUNC_4(VAR_10->ai_chanlist, VAR_19->chanlist,
        sizeof(unsigned int) * VAR_19->scan_end_arg);
 FUNC_11(VAR_12, VAR_13, VAR_10->ai_chanlist[0], 1);

 if (VAR_10->dma) {
  VAR_10->ai_dma = 1;
  for (VAR_16 = 1; VAR_16 < VAR_10->ai_n_chan; VAR_16++)
   if (VAR_10->ai_chanlist[0] != VAR_10->ai_chanlist[VAR_16]) {
    VAR_10->ai_dma = 0;
    break;
   }
 } else
  VAR_10->ai_dma = 0;

 VAR_10->ai_flags = VAR_19->flags;
 VAR_10->ai_data_len = VAR_13->async->prealloc_bufsz;
 VAR_10->ai_data = VAR_13->async->prealloc_buf;
 if (VAR_19->stop_src == VAR_4) {
  VAR_10->ai_scans = VAR_19->stop_arg;
  VAR_10->ai_neverending = 0;
 } else {
  VAR_10->ai_scans = 0;
  VAR_10->ai_neverending = 1;
 }

 VAR_10->ai_act_scan = 0;
 VAR_10->ai_poll_ptr = 0;
 VAR_13->async->cur_chan = 0;

 if ((VAR_10->ai_flags & VAR_9)) {
  VAR_10->ai_eos = 1;
  if (VAR_10->ai_n_chan == 1)
   VAR_10->ai_dma = 0;
 }

 if (VAR_10->ai_dma) {
  if (VAR_10->ai_eos) {
   VAR_10->dmabytestomove[0] =
       VAR_10->ai_n_chan * sizeof(short);
   VAR_10->dmabytestomove[1] =
       VAR_10->ai_n_chan * sizeof(short);
   VAR_10->dma_runs_to_end = 1;
  } else {
   VAR_10->dmabytestomove[0] = VAR_10->hwdmasize[0];
   VAR_10->dmabytestomove[1] = VAR_10->hwdmasize[1];
   if (VAR_10->ai_data_len < VAR_10->hwdmasize[0])
    VAR_10->dmabytestomove[0] =
        VAR_10->ai_data_len;
   if (VAR_10->ai_data_len < VAR_10->hwdmasize[1])
    VAR_10->dmabytestomove[1] =
        VAR_10->ai_data_len;
   if (VAR_10->ai_neverending) {
    VAR_10->dma_runs_to_end = 1;
   } else {
    VAR_18 = VAR_10->ai_n_chan * VAR_10->ai_scans * sizeof(short);
    VAR_10->dma_runs_to_end = VAR_18 / VAR_10->dmabytestomove[0];
    VAR_10->last_dma_run = VAR_18 % VAR_10->dmabytestomove[0];
    if (VAR_10->dma_runs_to_end == 0)
     VAR_10->dmabytestomove[0] =
         VAR_10->last_dma_run;
    VAR_10->dma_runs_to_end--;
   }
  }
  if (VAR_10->dmabytestomove[0] > VAR_10->hwdmasize[0]) {
   VAR_10->dmabytestomove[0] = VAR_10->hwdmasize[0];
   VAR_10->ai_eos = 0;
  }
  if (VAR_10->dmabytestomove[1] > VAR_10->hwdmasize[1]) {
   VAR_10->dmabytestomove[1] = VAR_10->hwdmasize[1];
   VAR_10->ai_eos = 0;
  }
  VAR_10->next_dma_buf = 0;
  FUNC_10(VAR_10->dma, VAR_0);
  VAR_17 = FUNC_0();
  FUNC_1(VAR_10->dma);
  FUNC_8(VAR_10->dma, VAR_10->hwdmaptr[0]);
  FUNC_9(VAR_10->dma, VAR_10->dmabytestomove[0]);
  FUNC_7(VAR_17);
  FUNC_2(VAR_10->dma);







 }

 switch (VAR_19->convert_src) {
 case 128:
  FUNC_12(VAR_12, 1, VAR_14, VAR_15);
  break;
 }

 if (VAR_10->ai_dma) {
  FUNC_5(VAR_10->mode_reg_int | 2, VAR_12->iobase + VAR_3);
 } else {
  FUNC_5(VAR_10->mode_reg_int | 6, VAR_12->iobase + VAR_3);
 }





 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int minor; } ;
struct comedi_cmd {int flags; int chanlist_len; int scan_end_arg; scalar_t__ start_src; scalar_t__ stop_src; scalar_t__ convert_src; scalar_t__ scan_begin_src; unsigned int convert_arg; scalar_t__ scan_begin_arg; scalar_t__ stop_arg; int start_arg; int chanlist; } ;
struct TYPE_6__ {int ai_flags; int ai_n_chan; int ai_n_scanlen; int ai_timer2; int ai_add_front; int ai_add_back; int ai_maskerr; int ai_neverending; int usessh; int usedma; unsigned int softsshdelay; int ai_n_realscanlen; int ai_do; int AdControlReg; int AdFunctionReg; scalar_t__ ai_buf_ptr; scalar_t__ ai_act_dmapos; scalar_t__ ai_act_scan; scalar_t__ ai_timer1; int ai_divisor2; int ai_divisor1; scalar_t__ useeoshandle; int ai_chanlist; scalar_t__ master; int ai12_startstop; scalar_t__ ai_scans; int ai_inttrig_start; int ai_data_len; int ai_data; } ;
struct TYPE_5__ {unsigned int ai_ns_min; } ;
struct TYPE_4__ {scalar_t__ cur_chan; int inttrig; int prealloc_bufsz; int prealloc_buf; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int,int ,int,int) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_3__* VAR_21 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_22 ;
 int FUNC_7 (int,struct comedi_device*,struct comedi_subdevice*,scalar_t__*,int*,int,int,int *,int *,int,int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,int,int ,int ,int,int,int,scalar_t__) ;
 int FUNC_9 (struct comedi_device*,int,int ,int ) ;
 TYPE_2__* VAR_23 ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_24, struct comedi_subdevice *VAR_25)
{
 struct comedi_cmd *VAR_26 = &VAR_25->async->cmd;
 unsigned int VAR_27 = 0;
 int VAR_28 = 0;

 FUNC_0("adl_pci9118 EDBG: BGN: pci9118_ai_cmd(%d,)\n", VAR_24->minor);
 VAR_21->ai12_startstop = 0;
 VAR_21->ai_flags = VAR_26->flags;
 VAR_21->ai_n_chan = VAR_26->chanlist_len;
 VAR_21->ai_n_scanlen = VAR_26->scan_end_arg;
 VAR_21->ai_chanlist = VAR_26->chanlist;
 VAR_21->ai_data = VAR_25->async->prealloc_buf;
 VAR_21->ai_data_len = VAR_25->async->prealloc_bufsz;
 VAR_21->ai_timer1 = 0;
 VAR_21->ai_timer2 = 0;
 VAR_21->ai_add_front = 0;
 VAR_21->ai_add_back = 0;
 VAR_21->ai_maskerr = 0x10e;


 if (VAR_26->start_src == VAR_14)
  VAR_21->ai12_startstop |= VAR_9;
 if (VAR_26->stop_src == VAR_14) {
  VAR_21->ai_neverending = 1;
  VAR_21->ai12_startstop |= VAR_11;
 }
 if (VAR_26->start_src == VAR_16) {
  VAR_21->ai12_startstop |= VAR_10;
  VAR_21->ai_inttrig_start = VAR_26->start_arg;
  VAR_25->async->inttrig = VAR_22;
 }






 if (VAR_26->stop_src == VAR_17)
  VAR_21->ai_neverending = 1;
 if (VAR_26->stop_src == VAR_13) {
  VAR_21->ai_scans = VAR_26->stop_arg;
  VAR_21->ai_neverending = 0;
 } else {
  VAR_21->ai_scans = 0;
 }


 if (VAR_26->convert_src == VAR_18) {
  VAR_21->usessh = 1;
 }
 else {
  VAR_21->usessh = 0;
 }

 FUNC_0("1 neverending=%d scans=%u usessh=%d ai_startstop=0x%2x\n",
  VAR_21->ai_neverending, VAR_21->ai_scans, VAR_21->usessh,
  VAR_21->ai12_startstop);


 VAR_21->ai_add_front = 0;
 VAR_21->ai_add_back = 0;
 VAR_21->useeoshandle = 0;
 if (VAR_21->master) {
  VAR_21->usedma = 1;
  if ((VAR_26->flags & VAR_20) &&
      (VAR_21->ai_n_scanlen == 1)) {
   if (VAR_26->convert_src == VAR_18) {
    VAR_21->ai_add_back = 1;
   }
   if (VAR_26->convert_src == VAR_19) {
    VAR_21->usedma = 0;
   }
  }
  if ((VAR_26->flags & VAR_20) &&
      (VAR_21->ai_n_scanlen & 1) &&
      (VAR_21->ai_n_scanlen > 1)) {
   if (VAR_26->scan_begin_src == VAR_15) {

    VAR_21->usedma = 0;
   } else {
    VAR_21->ai_add_back = 1;
   }
  }
 } else {
  VAR_21->usedma = 0;
 }


 if (VAR_21->usessh && VAR_21->softsshdelay) {
  VAR_21->ai_add_front = 2;
  if ((VAR_21->usedma == 1) && (VAR_21->ai_add_back == 1)) {
   VAR_21->ai_add_front++;
   VAR_21->ai_add_back = 0;
  }
  if (VAR_26->convert_arg < VAR_23->ai_ns_min)
   VAR_26->convert_arg = VAR_23->ai_ns_min;
  VAR_27 = VAR_21->softsshdelay / VAR_26->convert_arg;
  if (VAR_21->softsshdelay % VAR_26->convert_arg)
   VAR_27++;
  if (VAR_27 > (VAR_21->ai_add_front - 1)) {
   VAR_21->ai_add_front = VAR_27 + 1;
   if (VAR_21->usedma == 1)
    if ((VAR_21->ai_add_front +
         VAR_21->ai_n_chan +
         VAR_21->ai_add_back) & 1)
     VAR_21->ai_add_front++;
  }
 }

 VAR_21->ai_n_realscanlen =
     (VAR_21->ai_add_front + VAR_21->ai_n_chan +
      VAR_21->ai_add_back) * (VAR_21->ai_n_scanlen /
          VAR_21->ai_n_chan);

 FUNC_0("2 usedma=%d realscan=%d af=%u n_chan=%d ab=%d n_scanlen=%d\n",
  VAR_21->usedma,
  VAR_21->ai_n_realscanlen, VAR_21->ai_add_front,
  VAR_21->ai_n_chan, VAR_21->ai_add_back,
  VAR_21->ai_n_scanlen);


 if (!FUNC_1(VAR_24, VAR_25, VAR_21->ai_n_chan,
    VAR_21->ai_chanlist, VAR_21->ai_add_front,
    VAR_21->ai_add_back))
  return -VAR_2;
 if (!FUNC_8(VAR_24, VAR_25, VAR_21->ai_n_chan,
    VAR_21->ai_chanlist, 0, VAR_21->ai_add_front,
    VAR_21->ai_add_back, VAR_21->usedma,
    VAR_21->useeoshandle))
  return -VAR_2;



 if (((VAR_26->scan_begin_src == VAR_15) || (VAR_26->scan_begin_src == VAR_14) || (VAR_26->scan_begin_src == VAR_16)) && (VAR_26->convert_src == VAR_19)) {
  if (VAR_26->scan_begin_src == VAR_14) {
   VAR_21->ai_do = 4;
  } else {
   VAR_21->ai_do = 1;
  }
  FUNC_7(VAR_21->ai_do, VAR_24, VAR_25,
          &VAR_26->scan_begin_arg, &VAR_26->convert_arg,
          VAR_21->ai_flags,
          VAR_21->ai_n_realscanlen,
          &VAR_21->ai_divisor1,
          &VAR_21->ai_divisor2, VAR_21->usessh,
          VAR_21->ai_add_front);
  VAR_21->ai_timer2 = VAR_26->convert_arg;
 }

 if ((VAR_26->scan_begin_src == VAR_19) && ((VAR_26->convert_src == VAR_19) || (VAR_26->convert_src == VAR_18))) {
  if (!VAR_21->usedma) {
   FUNC_2(VAR_24,
         "cmd->scan_begin_src=TRIG_TIMER works only with bus mastering!");
   return -VAR_3;
  }

  VAR_21->ai_do = 2;
  FUNC_7(VAR_21->ai_do, VAR_24, VAR_25,
          &VAR_26->scan_begin_arg, &VAR_26->convert_arg,
          VAR_21->ai_flags,
          VAR_21->ai_n_realscanlen,
          &VAR_21->ai_divisor1,
          &VAR_21->ai_divisor2, VAR_21->usessh,
          VAR_21->ai_add_front);
  VAR_21->ai_timer1 = VAR_26->scan_begin_arg;
  VAR_21->ai_timer2 = VAR_26->convert_arg;
 }

 if ((VAR_26->scan_begin_src == VAR_15)
     && (VAR_26->convert_src == VAR_14)) {
  VAR_21->ai_do = 3;
 }

 FUNC_9(VAR_24, -1, 0, 0);

 VAR_21->AdControlReg = 0;
 FUNC_4(VAR_21->AdControlReg, VAR_24->iobase + VAR_4);
 VAR_21->AdFunctionReg = VAR_0 | VAR_1;
 FUNC_4(VAR_21->AdFunctionReg, VAR_24->iobase + VAR_5);
 FUNC_10(1);
 FUNC_4(0, VAR_24->iobase + VAR_7);
 FUNC_3(VAR_24->iobase + VAR_6);
 FUNC_3(VAR_24->iobase + VAR_8);

 VAR_21->ai_act_scan = 0;
 VAR_21->ai_act_dmapos = 0;
 VAR_25->async->cur_chan = 0;
 VAR_21->ai_buf_ptr = 0;

 if (VAR_21->usedma)
  VAR_28 = FUNC_5(VAR_24, VAR_25);
 else
  VAR_28 = FUNC_6(VAR_24, VAR_25);

 FUNC_0("adl_pci9118 EDBG: END: pci9118_ai_cmd()\n");
 return VAR_28;
}

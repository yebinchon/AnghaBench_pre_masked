
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_6__ {int ai_do; int neverending_ai; int CntrlReg; int ai_flags; int ai_eos; int ai_scans; int ai_et_CntrlReg; int ai_et; unsigned int ai_et_div1; unsigned int ai_et_div2; int ai_timer1; int i8254_osc_base; scalar_t__ ai_buf_ptr; scalar_t__ ai_act_scan; int ai_n_chan; int ai_chanlist; } ;
struct TYPE_5__ {int ai_ns_min; } ;
struct TYPE_4__ {scalar_t__ cur_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 TYPE_3__* VAR_12 ;
 int FUNC_2 (int ,unsigned int*,unsigned int*,int *,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int ,int ,unsigned int) ;
 int FUNC_6 (struct comedi_device*,int,unsigned int,unsigned int) ;
 TYPE_2__* VAR_13 ;

__attribute__((used)) static int FUNC_7(int VAR_14, struct comedi_device *VAR_15,
         struct comedi_subdevice *VAR_16)
{
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19;

 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_ai_docmd_and_mode(%d,...)\n",
  VAR_14);
 FUNC_6(VAR_15, -1, 0, 0);

 VAR_19 = FUNC_1(VAR_15, VAR_16, VAR_12->ai_chanlist,
        VAR_12->ai_n_chan);
 if (VAR_19 < 1)
  return -VAR_6;
 FUNC_5(VAR_15, VAR_16, VAR_12->ai_chanlist,
      VAR_12->ai_n_chan, VAR_19);

 FUNC_3(0, VAR_15->iobase + VAR_7);
 FUNC_3(0, VAR_15->iobase + VAR_8);

 VAR_12->ai_do = VAR_14;

 VAR_12->ai_act_scan = 0;
 VAR_16->async->cur_chan = 0;
 VAR_12->ai_buf_ptr = 0;
 VAR_12->neverending_ai = 0;

 VAR_12->CntrlReg &= VAR_0;
 if ((VAR_12->ai_flags & VAR_11)) {
  VAR_12->ai_eos = 1;
 } else {
  VAR_12->CntrlReg |= VAR_4;
  VAR_12->ai_eos = 0;
 }

 if ((VAR_12->ai_scans == 0) || (VAR_12->ai_scans == -1)) {
  VAR_12->neverending_ai = 1;
 }
 else {
  VAR_12->neverending_ai = 0;
 }
 switch (VAR_14) {
 case 1:
 case 2:
  if (VAR_12->ai_timer1 < VAR_13->ai_ns_min)
   VAR_12->ai_timer1 = VAR_13->ai_ns_min;
  VAR_12->CntrlReg |= VAR_5 | VAR_3;
  if (VAR_14 == 2) {
   VAR_12->ai_et_CntrlReg = VAR_12->CntrlReg;
   VAR_12->CntrlReg &=
       ~(VAR_5 | VAR_4 | VAR_2);
   VAR_12->CntrlReg |= VAR_1;
   VAR_12->ai_et = 1;
  } else {
   VAR_12->ai_et = 0;
  }
  FUNC_2(VAR_12->i8254_osc_base, &VAR_17,
       &VAR_18, &VAR_12->ai_timer1,
       VAR_12->ai_flags & VAR_10);
  FUNC_0
      ("adv_pci1710 EDBG: OSC base=%u div1=%u div2=%u timer=%u\n",
       VAR_12->i8254_osc_base, VAR_17, VAR_18,
       VAR_12->ai_timer1);
  FUNC_4(VAR_12->CntrlReg, VAR_15->iobase + VAR_9);
  if (VAR_14 != 2) {

   FUNC_6(VAR_15, VAR_14, VAR_17, VAR_18);
  } else {
   VAR_12->ai_et_div1 = VAR_17;
   VAR_12->ai_et_div2 = VAR_18;
  }
  break;
 case 3:
  VAR_12->CntrlReg |= VAR_1 | VAR_3;
  FUNC_4(VAR_12->CntrlReg, VAR_15->iobase + VAR_9);
  break;
 }

 FUNC_0("adv_pci1710 EDBG: END: pci171x_ai_docmd_and_mode(...)\n");
 return 0;
}

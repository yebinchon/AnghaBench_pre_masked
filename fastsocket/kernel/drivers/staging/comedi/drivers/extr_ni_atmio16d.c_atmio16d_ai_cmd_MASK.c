
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int chanlist_len; int scan_end_arg; int convert_arg; unsigned int stop_arg; int scan_begin_arg; int * chanlist; } ;
struct TYPE_4__ {int com_reg_1_state; int com_reg_2_state; } ;
struct TYPE_3__ {scalar_t__ cur_chan; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_2__* VAR_19 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_20,
      struct comedi_subdevice *VAR_21)
{
 struct comedi_cmd *VAR_22 = &VAR_21->async->cmd;
 unsigned int VAR_23, VAR_24;
 unsigned int VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;






 FUNC_4(VAR_20);
 VAR_21->async->cur_chan = 0;


 if (VAR_22->chanlist_len < 2) {
  VAR_19->com_reg_1_state &= ~VAR_10;
  FUNC_2(VAR_19->com_reg_1_state, VAR_20->iobase + VAR_13);
 } else {
  VAR_19->com_reg_1_state |= VAR_10;
  VAR_19->com_reg_2_state |= VAR_12;
  FUNC_2(VAR_19->com_reg_1_state, VAR_20->iobase + VAR_13);
  FUNC_2(VAR_19->com_reg_2_state, VAR_20->iobase + VAR_14);
 }


 for (VAR_29 = 0; VAR_29 < VAR_22->chanlist_len; ++VAR_29) {
  VAR_27 = FUNC_0(VAR_22->chanlist[VAR_29]);
  VAR_28 = FUNC_1(VAR_22->chanlist[VAR_29]);
  FUNC_2(VAR_29, VAR_20->iobase + VAR_16);
  VAR_26 = VAR_27 | (VAR_28 << 6);
  if (VAR_29 == VAR_22->scan_end_arg - 1)
   VAR_26 |= 0x0010;
  FUNC_2(VAR_26, VAR_20->iobase + VAR_17);
 }




 if (VAR_22->convert_arg < 65536000) {
  VAR_24 = VAR_6;
  VAR_23 = VAR_22->convert_arg / 1000;
 } else if (VAR_22->convert_arg < 655360000) {
  VAR_24 = VAR_3;
  VAR_23 = VAR_22->convert_arg / 10000;
 } else if (VAR_22->convert_arg <= 0xffffffff ) {
  VAR_24 = VAR_4;
  VAR_23 = VAR_22->convert_arg / 100000;
 } else if (VAR_22->convert_arg <= 0xffffffff ) {
  VAR_24 = VAR_5;
  VAR_23 = VAR_22->convert_arg / 1000000;
 }
 FUNC_2(0xFF03, VAR_20->iobase + VAR_1);
 FUNC_2(VAR_24, VAR_20->iobase + VAR_2);
 FUNC_2(0xFF0B, VAR_20->iobase + VAR_1);
 FUNC_2(0x2, VAR_20->iobase + VAR_2);
 FUNC_2(0xFF44, VAR_20->iobase + VAR_1);
 FUNC_2(0xFFF3, VAR_20->iobase + VAR_1);
 FUNC_2(VAR_23, VAR_20->iobase + VAR_2);
 FUNC_2(0xFF24, VAR_20->iobase + VAR_1);



 VAR_25 = VAR_22->stop_arg * VAR_22->scan_end_arg;
 FUNC_2(0xFF04, VAR_20->iobase + VAR_1);
 FUNC_2(0x1025, VAR_20->iobase + VAR_2);
 FUNC_2(0xFF0C, VAR_20->iobase + VAR_1);
 if (VAR_25 < 65536) {

  FUNC_2(VAR_25, VAR_20->iobase + VAR_2);
  FUNC_2(0xFF48, VAR_20->iobase + VAR_1);
  FUNC_2(0xFFF4, VAR_20->iobase + VAR_1);
  FUNC_2(0xFF28, VAR_20->iobase + VAR_1);
  VAR_19->com_reg_1_state &= ~VAR_7;
  FUNC_2(VAR_19->com_reg_1_state, VAR_20->iobase + VAR_13);
 } else {


  VAR_26 = VAR_25 & 0xFFFF;
  if (VAR_26)
   FUNC_2(VAR_26 - 1, VAR_20->iobase + VAR_2);
  else
   FUNC_2(0xFFFF, VAR_20->iobase + VAR_2);

  FUNC_2(0xFF48, VAR_20->iobase + VAR_1);
  FUNC_2(0, VAR_20->iobase + VAR_2);
  FUNC_2(0xFF28, VAR_20->iobase + VAR_1);
  FUNC_2(0xFF05, VAR_20->iobase + VAR_1);
  FUNC_2(0x25, VAR_20->iobase + VAR_2);
  FUNC_2(0xFF0D, VAR_20->iobase + VAR_1);
  VAR_26 = VAR_25 & 0xFFFF;
  if ((VAR_26 == 0) || (VAR_26 == 1)) {
   FUNC_2((VAR_25 >> 16) & 0xFFFF,
        VAR_20->iobase + VAR_2);
  } else {
   FUNC_2(((VAR_25 >> 16) & 0xFFFF) + 1,
        VAR_20->iobase + VAR_2);
  }
  FUNC_2(0xFF70, VAR_20->iobase + VAR_1);
  VAR_19->com_reg_1_state |= VAR_7;
  FUNC_2(VAR_19->com_reg_1_state, VAR_20->iobase + VAR_13);
 }




 if (VAR_22->chanlist_len > 1) {
  if (VAR_22->scan_begin_arg < 65536000) {
   VAR_24 = VAR_6;
   VAR_23 = VAR_22->scan_begin_arg / 1000;
  } else if (VAR_22->scan_begin_arg < 655360000) {
   VAR_24 = VAR_3;
   VAR_23 = VAR_22->scan_begin_arg / 10000;
  } else if (VAR_22->scan_begin_arg < 0xffffffff ) {
   VAR_24 = VAR_4;
   VAR_23 = VAR_22->scan_begin_arg / 100000;
  } else if (VAR_22->scan_begin_arg < 0xffffffff ) {
   VAR_24 = VAR_5;
   VAR_23 = VAR_22->scan_begin_arg / 1000000;
  }
  FUNC_2(0xFF02, VAR_20->iobase + VAR_1);
  FUNC_2(VAR_24, VAR_20->iobase + VAR_2);
  FUNC_2(0xFF0A, VAR_20->iobase + VAR_1);
  FUNC_2(0x2, VAR_20->iobase + VAR_2);
  FUNC_2(0xFF42, VAR_20->iobase + VAR_1);
  FUNC_2(0xFFF2, VAR_20->iobase + VAR_1);
  FUNC_2(VAR_23, VAR_20->iobase + VAR_2);
  FUNC_2(0xFF22, VAR_20->iobase + VAR_1);
 }


 FUNC_2(0, VAR_20->iobase + VAR_0);
 FUNC_2(0, VAR_20->iobase + VAR_16);
 FUNC_2(0, VAR_20->iobase + VAR_15);

 VAR_19->com_reg_1_state |= VAR_9;
 FUNC_2(VAR_19->com_reg_1_state, VAR_20->iobase + VAR_13);

 VAR_19->com_reg_1_state |= VAR_8;
 VAR_19->com_reg_2_state |= VAR_11;
 FUNC_2(VAR_19->com_reg_1_state, VAR_20->iobase + VAR_13);
 FUNC_2(VAR_19->com_reg_2_state, VAR_20->iobase + VAR_14);

 FUNC_2(0, VAR_20->iobase + VAR_18);

 return 0;
}

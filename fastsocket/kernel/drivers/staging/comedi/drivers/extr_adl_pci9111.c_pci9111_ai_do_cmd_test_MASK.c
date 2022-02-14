
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9111_board {int ai_channel_nbr; scalar_t__ ai_acquisition_period_min_ns; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ board_ptr; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ scan_begin_src; scalar_t__ convert_src; scalar_t__ scan_end_src; scalar_t__ stop_src; int chanlist_len; scalar_t__ start_arg; scalar_t__ convert_arg; scalar_t__ scan_begin_arg; int scan_end_arg; int stop_arg; int flags; int * chanlist; } ;
struct TYPE_2__ {int timer_divisor_2; int timer_divisor_1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (int ,int *,int *,int*,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct comedi_device *VAR_9,
         struct comedi_subdevice *VAR_10, struct comedi_cmd *VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14, VAR_15;
 int VAR_16;
 struct pci9111_board *VAR_17 = (struct pci9111_board *)VAR_9->board_ptr;



 FUNC_5(VAR_11->start_src, VAR_5);
 FUNC_5(VAR_11->scan_begin_src,
      VAR_7 | VAR_3 | VAR_2);
 FUNC_5(VAR_11->convert_src, VAR_7 | VAR_2);
 FUNC_5(VAR_11->scan_end_src, VAR_1);
 FUNC_5(VAR_11->stop_src, VAR_1 | VAR_4);

 if (VAR_13)
  return 1;



 if (VAR_11->start_src != VAR_5)
  VAR_13++;

 if ((VAR_11->scan_begin_src != VAR_7) &&
     (VAR_11->scan_begin_src != VAR_3) &&
     (VAR_11->scan_begin_src != VAR_2))
  VAR_13++;

 if ((VAR_11->convert_src != VAR_7) && (VAR_11->convert_src != VAR_2)) {
  VAR_13++;
 }
 if ((VAR_11->convert_src == VAR_7) &&
     !((VAR_11->scan_begin_src == VAR_7) ||
       (VAR_11->scan_begin_src == VAR_3))) {
  VAR_13++;
 }
 if ((VAR_11->convert_src == VAR_2) &&
     !((VAR_11->scan_begin_src == VAR_2) ||
       (VAR_11->scan_begin_src == VAR_3))) {
  VAR_13++;
 }

 if (VAR_11->scan_end_src != VAR_1)
  VAR_13++;
 if ((VAR_11->stop_src != VAR_1) && (VAR_11->stop_src != VAR_4))
  VAR_13++;

 if (VAR_13)
  return 2;



 if (VAR_11->chanlist_len < 1) {
  VAR_11->chanlist_len = 1;
  VAR_13++;
 }

 if (VAR_11->chanlist_len > VAR_17->ai_channel_nbr) {
  VAR_11->chanlist_len = VAR_17->ai_channel_nbr;
  VAR_13++;
 }

 if ((VAR_11->start_src == VAR_5) && (VAR_11->start_arg != 0)) {
  VAR_11->start_arg = 0;
  VAR_13++;
 }

 if ((VAR_11->convert_src == VAR_7) &&
     (VAR_11->convert_arg < VAR_17->ai_acquisition_period_min_ns)) {
  VAR_11->convert_arg = VAR_17->ai_acquisition_period_min_ns;
  VAR_13++;
 }
 if ((VAR_11->convert_src == VAR_2) && (VAR_11->convert_arg != 0)) {
  VAR_11->convert_arg = 0;
  VAR_13++;
 }

 if ((VAR_11->scan_begin_src == VAR_7) &&
     (VAR_11->scan_begin_arg < VAR_17->ai_acquisition_period_min_ns)) {
  VAR_11->scan_begin_arg = VAR_17->ai_acquisition_period_min_ns;
  VAR_13++;
 }
 if ((VAR_11->scan_begin_src == VAR_3) && (VAR_11->scan_begin_arg != 0)) {
  VAR_11->scan_begin_arg = 0;
  VAR_13++;
 }
 if ((VAR_11->scan_begin_src == VAR_2) && (VAR_11->scan_begin_arg != 0)) {
  VAR_11->scan_begin_arg = 0;
  VAR_13++;
 }

 if ((VAR_11->scan_end_src == VAR_1) &&
     (VAR_11->scan_end_arg != VAR_11->chanlist_len)) {
  VAR_11->scan_end_arg = VAR_11->chanlist_len;
  VAR_13++;
 }

 if ((VAR_11->stop_src == VAR_1) && (VAR_11->stop_arg < 1)) {
  VAR_11->stop_arg = 1;
  VAR_13++;
 }
 if ((VAR_11->stop_src == VAR_4) && (VAR_11->stop_arg != 0)) {
  VAR_11->stop_arg = 0;
  VAR_13++;
 }

 if (VAR_13)
  return 3;



 if (VAR_11->convert_src == VAR_7) {
  VAR_12 = VAR_11->convert_arg;
  FUNC_4(VAR_0,
            &(VAR_8->timer_divisor_1),
            &(VAR_8->timer_divisor_2),
            &(VAR_11->convert_arg),
            VAR_11->flags & VAR_6);
  if (VAR_12 != VAR_11->convert_arg)
   VAR_13++;
 }



 if (VAR_11->scan_begin_src == VAR_7) {

  unsigned int VAR_18;
  unsigned int VAR_19;
  unsigned int VAR_20;

  VAR_18 = VAR_11->chanlist_len * VAR_11->convert_arg;

  if (VAR_11->scan_begin_arg != VAR_18) {
   if (VAR_18 < VAR_11->scan_begin_arg) {
    VAR_20 =
        VAR_11->scan_begin_arg / VAR_18;
    VAR_19 = VAR_20 * VAR_18;
    if (VAR_11->scan_begin_arg != VAR_19) {
     VAR_11->scan_begin_arg = VAR_19;
     VAR_13++;
    }
   } else {
    VAR_11->scan_begin_arg = VAR_18;
    VAR_13++;
   }
  }
 }

 if (VAR_13)
  return 4;



 if (VAR_11->chanlist) {

  VAR_14 = FUNC_2(VAR_11->chanlist[0]);
  VAR_15 = FUNC_0(VAR_11->chanlist[0]);

  if (VAR_11->chanlist_len > 1) {
   for (VAR_16 = 0; VAR_16 < VAR_11->chanlist_len; VAR_16++) {
    if (FUNC_1(VAR_11->chanlist[VAR_16]) != VAR_16) {
     FUNC_3(VAR_9,
           "entries in chanlist must be consecutive "
           "channels,counting upwards from 0\n");
     VAR_13++;
    }
    if (FUNC_2(VAR_11->chanlist[VAR_16]) != VAR_14) {
     FUNC_3(VAR_9,
           "entries in chanlist must all have the same gain\n");
     VAR_13++;
    }
    if (FUNC_0(VAR_11->chanlist[VAR_16]) != VAR_15) {
     FUNC_3(VAR_9,
           "entries in chanlist must all have the same reference\n");
     VAR_13++;
    }
   }
  } else {
   if ((FUNC_1(VAR_11->chanlist[0]) >
        (VAR_17->ai_channel_nbr - 1))
       || (FUNC_1(VAR_11->chanlist[0]) < 0)) {
    FUNC_3(VAR_9,
          "channel number is out of limits\n");
    VAR_13++;
   }
  }
 }

 if (VAR_13)
  return 5;

 return 0;

}

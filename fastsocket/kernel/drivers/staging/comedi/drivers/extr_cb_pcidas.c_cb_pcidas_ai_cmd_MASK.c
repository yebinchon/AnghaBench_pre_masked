
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ convert_src; scalar_t__ scan_begin_src; int flags; scalar_t__ stop_src; int stop_arg; scalar_t__ start_src; int scan_begin_arg; int convert_arg; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {int count; unsigned int adc_fifo_bits; scalar_t__ control_status; scalar_t__ adc_fifo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_5 (int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int FUNC_6 (struct comedi_device*,int *,int) ;
 int FUNC_7 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_30 ;
 int FUNC_8 (unsigned int,scalar_t__) ;
 int FUNC_9 (char*,unsigned int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_31,
       struct comedi_subdevice *VAR_32)
{
 struct comedi_async *VAR_33 = VAR_32->async;
 struct comedi_cmd *VAR_34 = &VAR_33->cmd;
 unsigned int VAR_35;
 unsigned long VAR_36;


 FUNC_8(0, VAR_30->control_status + VAR_4);

 FUNC_8(0, VAR_30->control_status + VAR_21);

 FUNC_8(0, VAR_30->adc_fifo + VAR_0);


 VAR_35 = FUNC_0(FUNC_2(VAR_34->chanlist[0])) |
     FUNC_4(FUNC_2(VAR_34->chanlist[VAR_34->chanlist_len - 1])) |
     FUNC_5(FUNC_3(VAR_34->chanlist[0]));

 if (FUNC_3(VAR_34->chanlist[0]) & VAR_14)
  VAR_35 |= VAR_28;

 if (FUNC_1(VAR_34->chanlist[0]) != VAR_2)
  VAR_35 |= VAR_18;

 if (VAR_34->convert_src == VAR_23 || VAR_34->scan_begin_src == VAR_23)
  VAR_35 |= VAR_16;
 else
  VAR_35 |= VAR_17;
 FUNC_8(VAR_35, VAR_30->control_status + VAR_1);






 if (VAR_34->convert_src == VAR_26)
  FUNC_6(VAR_31, &VAR_34->convert_arg,
     VAR_34->flags & VAR_25);
 else if (VAR_34->scan_begin_src == VAR_26)
  FUNC_6(VAR_31, &VAR_34->scan_begin_arg,
     VAR_34->flags & VAR_25);


 if (VAR_34->stop_src == VAR_22) {
  VAR_30->count = VAR_34->chanlist_len * VAR_34->stop_arg;
 }

 FUNC_10(&VAR_31->spinlock, VAR_36);
 VAR_30->adc_fifo_bits |= VAR_8;
 VAR_30->adc_fifo_bits &= ~VAR_13;
 if (VAR_34->flags & VAR_27) {
  if (VAR_34->convert_src == VAR_24 && VAR_34->chanlist_len > 1)
   VAR_30->adc_fifo_bits |= VAR_10;
  else
   VAR_30->adc_fifo_bits |= VAR_12;
 } else {
  VAR_30->adc_fifo_bits |= VAR_11;
 }




 FUNC_8(VAR_30->adc_fifo_bits | VAR_5 | VAR_7 | VAR_15,
      VAR_30->control_status + VAR_9);
 FUNC_11(&VAR_31->spinlock, VAR_36);


 VAR_35 = 0;
 if (VAR_34->start_src == VAR_24)
  VAR_35 |= VAR_19;
 else if (VAR_34->start_src == VAR_23)
  VAR_35 |= VAR_6 | VAR_20 | VAR_29;
 else {
  FUNC_7(VAR_31, "bug!");
  return -1;
 }
 if (VAR_34->convert_src == VAR_24 && VAR_34->chanlist_len > 1)
  VAR_35 |= VAR_3;
 FUNC_8(VAR_35, VAR_30->control_status + VAR_21);




 return 0;
}

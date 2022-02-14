
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ irq; scalar_t__ iobase; } ;
struct comedi_cmd {unsigned int chanlist_len; int flags; scalar_t__ start_src; scalar_t__ convert_src; int convert_arg; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {int control_state; int initial_hw_count; scalar_t__ adc_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (struct comedi_device*,char*) ;
 int FUNC_5 (struct comedi_device*,int ,int) ;
 TYPE_1__* VAR_14 ;
 int FUNC_6 (scalar_t__,int ,int,int ,int) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_15,
       struct comedi_subdevice *VAR_16)
{
 struct comedi_async *VAR_17 = VAR_16->async;
 struct comedi_cmd *VAR_18 = &VAR_17->cmd;
 unsigned int VAR_19, VAR_20;

 if (VAR_15->irq == 0) {
  FUNC_4(VAR_15, "irq required to execute comedi_cmd");
  return -1;
 }


 VAR_14->control_state &= ~VAR_8 & ~VAR_10;
 FUNC_8(VAR_14->control_state, VAR_15->iobase + VAR_3);


 VAR_14->adc_count = 0;



 FUNC_6(VAR_15->iobase + VAR_0, 0, 1, 0, 2);


 VAR_14->initial_hw_count =
     FUNC_7(VAR_15->iobase + VAR_0, 0, 1);

 for (VAR_20 = 0; VAR_20 < VAR_18->chanlist_len; VAR_20++) {
  FUNC_8(VAR_20, VAR_15->iobase + VAR_4);
  VAR_19 =
      FUNC_2(FUNC_0(VAR_18->chanlist[VAR_20])) |
      FUNC_3(FUNC_1(VAR_18->chanlist[VAR_20]));
  FUNC_8(VAR_19, VAR_15->iobase + VAR_5);
 }


 VAR_18->convert_arg =
     FUNC_5(VAR_15, VAR_18->convert_arg,
         VAR_18->flags & VAR_12);


 VAR_19 = 0;


 if (VAR_18->start_src == VAR_11 && VAR_18->convert_src != VAR_11) {
  VAR_19 |= VAR_7;
 }
 FUNC_8(VAR_19, VAR_15->iobase + VAR_2);

 FUNC_8(0, VAR_15->iobase + VAR_1);


 VAR_14->control_state &= ~VAR_10;
 if (VAR_18->convert_src == VAR_13) {
  VAR_14->control_state |= VAR_9;
 } else {
  VAR_14->control_state |= VAR_6;
 }
 VAR_14->control_state |= VAR_8;
 FUNC_8(VAR_14->control_state, VAR_15->iobase + VAR_3);

 return 0;
}

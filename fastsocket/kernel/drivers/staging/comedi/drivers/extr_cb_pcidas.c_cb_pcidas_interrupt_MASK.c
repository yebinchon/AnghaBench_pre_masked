
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ attached; int spinlock; struct comedi_subdevice* read_subdev; } ;
struct TYPE_4__ {scalar_t__ stop_src; } ;
struct comedi_async {int events; TYPE_1__ cmd; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int s5933_intcsr_bits; unsigned int count; int adc_fifo_bits; scalar_t__ control_status; scalar_t__ adc_fifo; int ai_buffer; scalar_t__ s5933_config; } ;
struct TYPE_5__ {int fifo_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdevice*,int ,unsigned int) ;
 int FUNC_2 (struct comedi_subdevice*,int) ;
 int FUNC_3 (struct comedi_device*,char*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_3__* VAR_21 ;
 int FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,unsigned int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 TYPE_2__* VAR_22 ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_23, void *VAR_24)
{
 struct comedi_device *VAR_25 = (struct comedi_device *)VAR_24;
 struct comedi_subdevice *VAR_26 = VAR_25->read_subdev;
 struct comedi_async *VAR_27;
 int VAR_28, VAR_29;
 int VAR_30 = VAR_22->fifo_size / 2;
 unsigned int VAR_31, VAR_32;
 static const int VAR_33 = 10000;
 unsigned long VAR_34;

 if (VAR_25->attached == 0) {
  return VAR_18;
 }

 VAR_27 = VAR_26->async;
 VAR_27->events = 0;

 VAR_29 = FUNC_6(VAR_21->s5933_config + VAR_5);





 if ((VAR_15 & VAR_29) == 0)
  return VAR_18;


 FUNC_7(VAR_21->s5933_config + VAR_4);

 FUNC_10(VAR_21->s5933_intcsr_bits | VAR_14,
      VAR_21->s5933_config + VAR_5);

 VAR_28 = FUNC_9(VAR_21->control_status + VAR_16);







 if (VAR_28 & (VAR_10 | VAR_9)) {
  FUNC_5(VAR_25, VAR_28);
 }


 if (VAR_28 & VAR_1) {

  VAR_31 = VAR_30;
  if (VAR_27->cmd.stop_src == VAR_20 &&
      VAR_31 > VAR_21->count) {
   VAR_31 = VAR_21->count;
  }
  FUNC_8(VAR_21->adc_fifo + VAR_0, VAR_21->ai_buffer,
       VAR_31);
  FUNC_1(VAR_26, VAR_21->ai_buffer,
       VAR_31 * sizeof(short));
  VAR_21->count -= VAR_31;
  if (VAR_27->cmd.stop_src == VAR_20 && VAR_21->count == 0) {
   VAR_27->events |= VAR_7;
   FUNC_0(VAR_25, VAR_26);
  }

  FUNC_13(&VAR_25->spinlock, VAR_34);
  FUNC_11(VAR_21->adc_fifo_bits | VAR_13,
       VAR_21->control_status + VAR_16);
  FUNC_14(&VAR_25->spinlock, VAR_34);

 } else if (VAR_28 & (VAR_3 | VAR_12)) {
  for (VAR_32 = 0; VAR_32 < VAR_33; VAR_32++) {

   if ((VAR_2 & FUNC_9(VAR_21->control_status +
     VAR_16)) == 0)
    break;
   FUNC_2(VAR_26, FUNC_9(VAR_21->adc_fifo));
   if (VAR_27->cmd.stop_src == VAR_20 && --VAR_21->count == 0) {
    FUNC_0(VAR_25, VAR_26);
    VAR_27->events |= VAR_7;
    break;
   }
  }

  FUNC_13(&VAR_25->spinlock, VAR_34);
  FUNC_11(VAR_21->adc_fifo_bits | VAR_13,
       VAR_21->control_status + VAR_16);
  FUNC_14(&VAR_25->spinlock, VAR_34);
 } else if (VAR_28 & VAR_11) {
  FUNC_3(VAR_25,
        "bug! encountered end of aquisition interrupt?");

  FUNC_13(&VAR_25->spinlock, VAR_34);
  FUNC_11(VAR_21->adc_fifo_bits | VAR_11,
       VAR_21->control_status + VAR_16);
  FUNC_14(&VAR_25->spinlock, VAR_34);
 }

 if (VAR_28 & VAR_19) {
  FUNC_3(VAR_25, "fifo overflow");

  FUNC_13(&VAR_25->spinlock, VAR_34);
  FUNC_11(VAR_21->adc_fifo_bits | VAR_19,
       VAR_21->control_status + VAR_16);
  FUNC_14(&VAR_25->spinlock, VAR_34);
  FUNC_0(VAR_25, VAR_26);
  VAR_27->events |= VAR_7 | VAR_8;
 }

 FUNC_4(VAR_25, VAR_26);

 return VAR_17;
}

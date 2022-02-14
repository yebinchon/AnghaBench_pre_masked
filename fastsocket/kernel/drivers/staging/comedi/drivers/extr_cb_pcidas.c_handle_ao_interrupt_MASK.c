
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct comedi_subdevice* write_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {struct comedi_cmd cmd; int events; } ;
struct TYPE_4__ {unsigned int adc_fifo_bits; unsigned int ao_count; scalar_t__ control_status; int ao_buffer; scalar_t__ ao_registers; } ;
struct TYPE_3__ {int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int ,unsigned int) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,unsigned int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_12, unsigned int VAR_13)
{
 struct comedi_subdevice *VAR_14 = VAR_12->write_subdev;
 struct comedi_async *VAR_15 = VAR_14->async;
 struct comedi_cmd *VAR_16 = &VAR_15->cmd;
 unsigned int VAR_17 = VAR_11->fifo_size / 2;
 unsigned int VAR_18;
 unsigned long VAR_19;

 VAR_15->events = 0;

 if (VAR_13 & VAR_5) {

  FUNC_7(&VAR_12->spinlock, VAR_19);
  FUNC_6(VAR_10->adc_fifo_bits | VAR_5,
       VAR_10->control_status + VAR_7);
  FUNC_8(&VAR_12->spinlock, VAR_19);
  if (FUNC_4(VAR_10->ao_registers + VAR_3) & VAR_4) {
   if (VAR_16->stop_src == VAR_9 ||
       (VAR_16->stop_src == VAR_8
        && VAR_10->ao_count)) {
    FUNC_2(VAR_12, "dac fifo underflow");
    FUNC_0(VAR_12, VAR_14);
    VAR_15->events |= VAR_1;
   }
   VAR_15->events |= VAR_0;
  }
 } else if (VAR_13 & VAR_6) {
  unsigned int VAR_20;


  VAR_18 = VAR_17;
  if (VAR_16->stop_src == VAR_8 &&
      VAR_10->ao_count < VAR_18)
   VAR_18 = VAR_10->ao_count;
  VAR_20 =
      FUNC_1(VAR_14, VAR_10->ao_buffer,
            VAR_18 * sizeof(short));
  VAR_18 = VAR_20 / sizeof(short);

  if (VAR_15->cmd.stop_src == VAR_8) {
   VAR_10->ao_count -= VAR_18;
  }

  FUNC_5(VAR_10->ao_registers + VAR_2, VAR_10->ao_buffer,
        VAR_18);

  FUNC_7(&VAR_12->spinlock, VAR_19);
  FUNC_6(VAR_10->adc_fifo_bits | VAR_6,
       VAR_10->control_status + VAR_7);
  FUNC_8(&VAR_12->spinlock, VAR_19);
 }

 FUNC_3(VAR_12, VAR_14);
}

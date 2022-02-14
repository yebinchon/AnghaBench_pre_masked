
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int * inttrig; struct comedi_cmd cmd; } ;
struct TYPE_4__ {unsigned int ao_count; int adc_fifo_bits; int ao_control_bits; scalar_t__ control_status; int ao_buffer; scalar_t__ ao_registers; } ;
struct TYPE_3__ {unsigned int fifo_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 TYPE_2__* VAR_12 ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_14,
    struct comedi_subdevice *VAR_15,
    unsigned int VAR_16)
{
 unsigned int VAR_17, VAR_18 = VAR_13->fifo_size;
 struct comedi_async *VAR_19 = VAR_15->async;
 struct comedi_cmd *VAR_20 = &VAR_15->async->cmd;
 unsigned long VAR_21;

 if (VAR_16 != 0)
  return -VAR_9;


 if (VAR_20->stop_src == VAR_11 && VAR_12->ao_count < VAR_18)
  VAR_18 = VAR_12->ao_count;

 VAR_17 = FUNC_0(VAR_15, VAR_12->ao_buffer,
            VAR_18 * sizeof(short));
 VAR_18 = VAR_17 / sizeof(short);

 if (VAR_20->stop_src == VAR_11) {
  VAR_12->ao_count -= VAR_18;
 }

 FUNC_1(VAR_12->ao_registers + VAR_0, VAR_12->ao_buffer, VAR_17);


 FUNC_4(&VAR_14->spinlock, VAR_21);
 VAR_12->adc_fifo_bits |= VAR_6 | VAR_8;




 FUNC_2(VAR_12->adc_fifo_bits | VAR_5 | VAR_7,
      VAR_12->control_status + VAR_10);


 VAR_12->ao_control_bits |= VAR_4 | VAR_1 | VAR_3;
 FUNC_2(VAR_12->ao_control_bits, VAR_12->control_status + VAR_2);



 FUNC_5(&VAR_14->spinlock, VAR_21);

 VAR_19->inttrig = ((void*)0);

 return 0;
}

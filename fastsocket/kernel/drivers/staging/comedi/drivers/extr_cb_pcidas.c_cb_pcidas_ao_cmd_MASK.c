
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; } ;
struct comedi_cmd {unsigned int chanlist_len; int scan_begin_src; scalar_t__ stop_src; int stop_arg; int flags; int scan_begin_arg; int * chanlist; } ;
struct comedi_async {int inttrig; struct comedi_cmd cmd; } ;
struct TYPE_2__ {int ao_count; int ao_control_bits; int ao_divisor2; scalar_t__ pacer_counter_dio; int ao_divisor1; scalar_t__ ao_registers; scalar_t__ control_status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 int VAR_7 ;
 int FUNC_4 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_5 (int ,int *,int *,int *,int ) ;
 int FUNC_6 (scalar_t__,int ,int,int ,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_9,
       struct comedi_subdevice *VAR_10)
{
 struct comedi_async *VAR_11 = VAR_10->async;
 struct comedi_cmd *VAR_12 = &VAR_11->cmd;
 unsigned int VAR_13;
 unsigned long VAR_14;


 FUNC_8(&VAR_9->spinlock, VAR_14);
 for (VAR_13 = 0; VAR_13 < VAR_12->chanlist_len; VAR_13++) {

  VAR_8->ao_control_bits |=
      FUNC_2(FUNC_0(VAR_12->chanlist[VAR_13]));

  VAR_8->ao_control_bits |= FUNC_3(FUNC_0(VAR_12->chanlist[VAR_13]),
            FUNC_1(VAR_12->
              chanlist[VAR_13]));
 }


 FUNC_7(VAR_8->ao_control_bits, VAR_8->control_status + VAR_2);
 FUNC_9(&VAR_9->spinlock, VAR_14);


 FUNC_7(0, VAR_8->ao_registers + VAR_1);


 if (VAR_12->scan_begin_src == 128) {
  FUNC_5(VAR_5,
            &(VAR_8->ao_divisor1),
            &(VAR_8->ao_divisor2),
            &(VAR_12->scan_begin_arg),
            VAR_12->flags);


  FUNC_6(VAR_8->pacer_counter_dio + VAR_0, 0, 1,
      VAR_8->ao_divisor1, 2);
  FUNC_6(VAR_8->pacer_counter_dio + VAR_0, 0, 2,
      VAR_8->ao_divisor2, 2);
 }

 if (VAR_12->stop_src == VAR_6) {
  VAR_8->ao_count = VAR_12->chanlist_len * VAR_12->stop_arg;
 }

 FUNC_8(&VAR_9->spinlock, VAR_14);
 switch (VAR_12->scan_begin_src) {
 case 128:
  VAR_8->ao_control_bits |= VAR_4;
  break;
 case 129:
  VAR_8->ao_control_bits |= VAR_3;
  break;
 default:
  FUNC_9(&VAR_9->spinlock, VAR_14);
  FUNC_4(VAR_9, "error setting dac pacer source");
  return -1;
  break;
 }
 FUNC_9(&VAR_9->spinlock, VAR_14);

 VAR_11->inttrig = VAR_7;

 return 0;
}

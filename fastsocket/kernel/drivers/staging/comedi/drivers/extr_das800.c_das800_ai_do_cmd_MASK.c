
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; int irq; } ;
struct TYPE_4__ {int chanlist_len; int stop_src; int stop_arg; scalar_t__ start_src; int convert_src; int flags; int convert_arg; int * chanlist; } ;
struct comedi_async {scalar_t__ events; TYPE_1__ cmd; } ;
struct TYPE_6__ {int count; int forever; int divisor2; int divisor1; } ;
struct TYPE_5__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;

 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (struct comedi_device*) ;
 TYPE_3__* VAR_12 ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (int ,int *,int *,int *,int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 TYPE_2__* VAR_13 ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_14,
       struct comedi_subdevice *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;
 unsigned long VAR_21;
 struct comedi_async *VAR_22 = VAR_15->async;

 if (!VAR_14->irq) {
  FUNC_2(VAR_14,
        "no irq assigned for das-800, cannot do hardware conversions");
  return -1;
 }

 FUNC_4(VAR_14);


 VAR_16 = FUNC_0(VAR_22->cmd.chanlist[0]);
 VAR_17 = (VAR_16 + VAR_22->cmd.chanlist_len - 1) % 8;
 VAR_18 = (VAR_17 << 3) | VAR_16;

 FUNC_8(&VAR_14->spinlock, VAR_21);
 FUNC_7(VAR_9, VAR_14->iobase + VAR_3);
 FUNC_7(VAR_18, VAR_14->iobase + VAR_4);
 FUNC_9(&VAR_14->spinlock, VAR_21);


 VAR_19 = FUNC_1(VAR_22->cmd.chanlist[0]);
 if (VAR_13->resolution == 12 && VAR_19 > 0)
  VAR_19 += 0x7;
 VAR_19 &= 0xf;
 FUNC_7(VAR_19, VAR_14->iobase + VAR_3);

 switch (VAR_22->cmd.stop_src) {
 case 131:
  VAR_12->count = VAR_22->cmd.stop_arg * VAR_22->cmd.chanlist_len;
  VAR_12->forever = 0;
  break;
 case 129:
  VAR_12->forever = 1;
  VAR_12->count = 0;
  break;
 default:
  break;
 }




 VAR_20 = 0;
 VAR_20 |= VAR_6 | VAR_7;
 if (VAR_22->cmd.start_src == 130)
  VAR_20 |= VAR_5;
 switch (VAR_22->cmd.convert_src) {
 case 128:
  VAR_20 |= VAR_0 | VAR_8;

  FUNC_6(VAR_10, &(VAR_12->divisor1),
            &(VAR_12->divisor2),
            &(VAR_22->cmd.convert_arg),
            VAR_22->cmd.
            flags & VAR_11);
  if (FUNC_3(VAR_14) < 0) {
   FUNC_2(VAR_14, "Error setting up counters");
   return -1;
  }
  break;
 case 130:
  break;
 default:
  break;
 }

 FUNC_8(&VAR_14->spinlock, VAR_21);
 FUNC_7(VAR_1, VAR_14->iobase + VAR_3);
 FUNC_7(VAR_20, VAR_14->iobase + VAR_2);
 FUNC_9(&VAR_14->spinlock, VAR_21);
 VAR_22->events = 0;
 FUNC_5(VAR_14);
 return 0;
}

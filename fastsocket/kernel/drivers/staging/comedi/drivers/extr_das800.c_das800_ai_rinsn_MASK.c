
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int spinlock; } ;
struct TYPE_4__ {int do_bits; } ;
struct TYPE_3__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 TYPE_1__* VAR_9 ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_10,
      struct comedi_subdevice *VAR_11, struct comedi_insn *VAR_12,
      unsigned int *VAR_13)
{
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = 1000;
 unsigned long VAR_21;

 FUNC_3(VAR_10);


 VAR_16 = FUNC_0(VAR_12->chanspec);

 FUNC_7(&VAR_10->spinlock, VAR_21);
 FUNC_5(VAR_1, VAR_10->iobase + VAR_3);
 FUNC_5(VAR_16 | VAR_8->do_bits, VAR_10->iobase + VAR_2);
 FUNC_8(&VAR_10->spinlock, VAR_21);


 VAR_17 = FUNC_1(VAR_12->chanspec);
 if (VAR_9->resolution == 12 && VAR_17)
  VAR_17 += 0x7;
 VAR_17 &= 0xf;
 FUNC_5(VAR_17, VAR_10->iobase + VAR_3);

 FUNC_9(5);

 for (VAR_15 = 0; VAR_15 < VAR_12->n; VAR_15++) {

  FUNC_6(0, VAR_10->iobase + VAR_5);

  for (VAR_14 = 0; VAR_14 < VAR_20; VAR_14++) {
   if (!(FUNC_4(VAR_10->iobase + VAR_6) & VAR_0))
    break;
  }
  if (VAR_14 == VAR_20) {
   FUNC_2(VAR_10, "timeout");
   return -VAR_7;
  }
  VAR_18 = FUNC_4(VAR_10->iobase + VAR_4);
  VAR_19 = FUNC_4(VAR_10->iobase + VAR_5);
  if (VAR_9->resolution == 12) {
   VAR_13[VAR_15] = (VAR_18 >> 4) & 0xff;
   VAR_13[VAR_15] |= (VAR_19 << 4);
  } else {
   VAR_13[VAR_15] = (VAR_19 << 8) | VAR_18;
  }
 }

 return VAR_15;
}

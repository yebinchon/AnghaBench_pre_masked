
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int spinlock; } ;
struct TYPE_4__ {int command2_bits; int command3_bits; int command1_bits; int command6_bits; int command4_bits; int (* read_byte ) (scalar_t__) ;int (* write_byte ) (int,scalar_t__) ;} ;
struct TYPE_3__ {int* ai_range_code; scalar_t__ register_layout; scalar_t__* ai_range_is_unipolar; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 TYPE_1__* VAR_25 ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct comedi_device *VAR_26, struct comedi_subdevice *VAR_27,
     struct comedi_insn *VAR_28, unsigned int *VAR_29)
{
 int VAR_30, VAR_31;
 int VAR_32, VAR_33;
 int VAR_34, VAR_35;
 int VAR_36 = 1000;
 unsigned long VAR_37;


 FUNC_6(&VAR_26->spinlock, VAR_37);
 VAR_23->command2_bits &= ~VAR_22 & ~VAR_18 & ~VAR_20;
 VAR_23->write_byte(VAR_23->command2_bits, VAR_26->iobase + VAR_10);
 FUNC_7(&VAR_26->spinlock, VAR_37);


 VAR_23->command3_bits = 0;
 VAR_23->write_byte(VAR_23->command3_bits, VAR_26->iobase + VAR_11);


 VAR_23->command1_bits = 0;
 VAR_32 = FUNC_2(VAR_28->chanspec);
 VAR_33 = FUNC_3(VAR_28->chanspec);
 VAR_23->command1_bits |= VAR_25->ai_range_code[VAR_33];

 if (FUNC_1(VAR_28->chanspec) == VAR_7)
  VAR_32 *= 2;
 VAR_23->command1_bits |= FUNC_0(VAR_32);
 VAR_23->write_byte(VAR_23->command1_bits, VAR_26->iobase + VAR_9);


 if (VAR_25->register_layout == VAR_24) {

  if (FUNC_1(VAR_28->chanspec) != VAR_8)
   VAR_23->command6_bits |= VAR_1;
  else
   VAR_23->command6_bits &= ~VAR_1;

  if (VAR_25->ai_range_is_unipolar[VAR_33])
   VAR_23->command6_bits |= VAR_6;
  else
   VAR_23->command6_bits &= ~VAR_6;

  VAR_23->command6_bits &= ~VAR_4;

  VAR_23->command6_bits &= ~VAR_0;

  VAR_23->write_byte(VAR_23->command6_bits,
        VAR_26->iobase + VAR_13);
 }

 VAR_23->command4_bits = 0;
 VAR_23->command4_bits |= VAR_17;

 if (FUNC_1(VAR_28->chanspec) == VAR_7)
  VAR_23->command4_bits |= VAR_3;
 VAR_23->write_byte(VAR_23->command4_bits, VAR_26->iobase + VAR_12);


 VAR_23->write_byte(VAR_19, VAR_26->iobase + VAR_14);

 FUNC_5(VAR_26);

 for (VAR_31 = 0; VAR_31 < VAR_28->n; VAR_31++) {

  VAR_23->write_byte(0x1, VAR_26->iobase + VAR_2);

  for (VAR_30 = 0; VAR_30 < VAR_36; VAR_30++) {
   if (VAR_23->read_byte(VAR_26->iobase +
            VAR_21) & VAR_15)
    break;
   FUNC_18(1);
  }
  if (VAR_30 == VAR_36) {
   FUNC_4(VAR_26, "timeout");
   return -VAR_16;
  }
  VAR_34 = VAR_23->read_byte(VAR_26->iobase + VAR_5);
  VAR_35 = VAR_23->read_byte(VAR_26->iobase + VAR_5);
  VAR_29[VAR_31] = (VAR_35 << 8) | VAR_34;
 }

 return VAR_31;
}

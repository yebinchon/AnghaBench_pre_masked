
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {int ctrl_reg; int dir_reg; } ;
struct TYPE_4__ {TYPE_1__ dio_context; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 TYPE_2__* VAR_13 ;
 unsigned long FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_14,
      struct comedi_subdevice *VAR_15,
      struct comedi_insn *VAR_16, unsigned int *VAR_17)
{
 unsigned long VAR_18;
 int VAR_19 = FUNC_1(VAR_16->chanspec);

 FUNC_0("In me4000_dio_insn_config()\n");

 if (VAR_17[0] == VAR_4) {
  VAR_17[1] =
      (VAR_15->io_bits & (1 << VAR_19)) ? VAR_1 : VAR_0;
  return VAR_16->n;
 }
 VAR_18 = FUNC_2(VAR_14, VAR_13->dio_context.ctrl_reg);

 if (VAR_17[0] == VAR_1) {
  if (VAR_19 < 8) {
   VAR_15->io_bits |= 0xFF;
   VAR_18 &= ~(VAR_5 |
     VAR_6);
   VAR_18 |= VAR_5;
  } else if (VAR_19 < 16) {




   if (!FUNC_2(VAR_14, VAR_13->dio_context.dir_reg))
    return -VAR_3;

   VAR_15->io_bits |= 0xFF00;
   VAR_18 &= ~(VAR_7 |
     VAR_8);
   VAR_18 |= VAR_7;
  } else if (VAR_19 < 24) {
   VAR_15->io_bits |= 0xFF0000;
   VAR_18 &= ~(VAR_9 |
     VAR_10);
   VAR_18 |= VAR_9;
  } else if (VAR_19 < 32) {
   VAR_15->io_bits |= 0xFF000000;
   VAR_18 &= ~(VAR_11 |
     VAR_12);
   VAR_18 |= VAR_11;
  } else {
   return -VAR_2;
  }
 } else {
  if (VAR_19 < 8) {




   if (!FUNC_2(VAR_14, VAR_13->dio_context.dir_reg))
    return -VAR_3;

   VAR_15->io_bits &= ~0xFF;
   VAR_18 &= ~(VAR_5 |
     VAR_6);
  } else if (VAR_19 < 16) {
   VAR_15->io_bits &= ~0xFF00;
   VAR_18 &= ~(VAR_7 |
     VAR_8);
  } else if (VAR_19 < 24) {
   VAR_15->io_bits &= ~0xFF0000;
   VAR_18 &= ~(VAR_9 |
     VAR_10);
  } else if (VAR_19 < 32) {
   VAR_15->io_bits &= ~0xFF000000;
   VAR_18 &= ~(VAR_11 |
     VAR_12);
  } else {
   return -VAR_2;
  }
 }

 FUNC_3(VAR_14, VAR_18, VAR_13->dio_context.ctrl_reg);

 return 1;
}

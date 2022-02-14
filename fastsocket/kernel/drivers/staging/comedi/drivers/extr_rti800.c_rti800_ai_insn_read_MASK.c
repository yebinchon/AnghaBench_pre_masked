
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int muxgain_bits; scalar_t__ adc_coding; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 int* VAR_13 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_14,
          struct comedi_subdevice *VAR_15,
          struct comedi_insn *VAR_16, unsigned int *VAR_17)
{
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21 = FUNC_2(VAR_16->chanspec);
 unsigned VAR_22 = FUNC_3(VAR_16->chanspec);
 unsigned VAR_23;

 FUNC_4(VAR_14->iobase + VAR_2);
 FUNC_5(0, VAR_14->iobase + VAR_4);

 VAR_23 = VAR_21 | (VAR_22 << 5);
 if (VAR_23 != VAR_12->muxgain_bits) {
  VAR_12->muxgain_bits = VAR_23;
  FUNC_5(VAR_12->muxgain_bits, VAR_14->iobase + VAR_8);


  if (VAR_16->n > 0) {
   FUNC_1(VAR_22 >= FUNC_0(VAR_13));
   FUNC_7(VAR_13[VAR_22]);
  }
 }

 for (VAR_18 = 0; VAR_18 < VAR_16->n; VAR_18++) {
  FUNC_5(0, VAR_14->iobase + VAR_5);
  for (VAR_19 = VAR_10; VAR_19; VAR_19--) {
   VAR_20 = FUNC_4(VAR_14->iobase + VAR_6);
   if (VAR_20 & VAR_9) {
    FUNC_6("rti800: a/d overrun\n");
    FUNC_5(0, VAR_14->iobase + VAR_4);
    return -VAR_0;
   }
   if (VAR_20 & VAR_7)
    break;
   FUNC_7(1);
  }
  if (VAR_19 == 0) {
   FUNC_6("rti800: timeout\n");
   return -VAR_1;
  }
  VAR_17[VAR_18] = FUNC_4(VAR_14->iobase + VAR_3);
  VAR_17[VAR_18] |= (0xf & FUNC_4(VAR_14->iobase + VAR_2)) << 8;

  if (VAR_12->adc_coding == VAR_11) {
   VAR_17[VAR_18] ^= 0x800;
  }
 }

 return VAR_18;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* range_table; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int spinlock; } ;
struct TYPE_6__ {int * pg_gainlist; int do_mux_bits; } ;
struct TYPE_5__ {int ai_nbits; scalar_t__ ai_encoding; } ;
struct TYPE_4__ {int length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct comedi_device*,char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__* VAR_13 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16,
     struct comedi_insn *VAR_17, unsigned int *VAR_18)
{
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23, VAR_24;

 VAR_21 = FUNC_0(VAR_17->chanspec);
 VAR_22 = FUNC_1(VAR_17->chanspec);


 FUNC_4(VAR_15->iobase + VAR_3);
 FUNC_4(VAR_15->iobase + VAR_4);


 FUNC_8(&VAR_15->spinlock);
 VAR_13->do_mux_bits &= ~VAR_5;
 VAR_13->do_mux_bits |= FUNC_2(VAR_21);
 FUNC_5(VAR_13->do_mux_bits, VAR_15->iobase + VAR_1);
 FUNC_9(&VAR_15->spinlock);

 if (VAR_16->range_table->length > 1) {

  VAR_22 = FUNC_1(VAR_17->chanspec);
  FUNC_5(VAR_13->pg_gainlist[VAR_22],
       VAR_15->iobase + VAR_0);
 }

 for (VAR_20 = 0; VAR_20 < VAR_17->n; VAR_20++) {

  if (VAR_14->ai_nbits == 16)
   if (FUNC_4(VAR_15->iobase + VAR_4) & 0x80)
    FUNC_7("das08: over-range\n");


  FUNC_6(0, VAR_15->iobase + VAR_7);

  for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
   if (!(FUNC_4(VAR_15->iobase + VAR_6) & VAR_2))
    break;
  }
  if (VAR_19 == VAR_9) {
   FUNC_7("das08: timeout\n");
   return -VAR_8;
  }
  VAR_24 = FUNC_4(VAR_15->iobase + VAR_4);
  VAR_23 = FUNC_4(VAR_15->iobase + VAR_3);
  if (VAR_14->ai_encoding == VAR_10) {
   VAR_18[VAR_20] = (VAR_23 >> 4) | (VAR_24 << 4);
  } else if (VAR_14->ai_encoding == VAR_12) {
   VAR_18[VAR_20] = (VAR_24 << 8) + VAR_23;
  } else if (VAR_14->ai_encoding == VAR_11) {

   if (VAR_24 & 0x80)
    VAR_18[VAR_20] = (1 << 15) | VAR_23 | ((VAR_24 & 0x7f) << 8);
   else
    VAR_18[VAR_20] = (1 << 15) - (VAR_23 | (VAR_24 & 0x7f) << 8);
  } else {
   FUNC_3(VAR_15, "bug! unknown ai encoding");
   return -1;
  }
 }

 return VAR_20;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_subdevice {scalar_t__ type; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_9__ {scalar_t__ invert_outputs; } ;
struct TYPE_8__ {unsigned int* output_bits; TYPE_1__* mite; } ;
struct TYPE_7__ {unsigned int const base_port; } ;
struct TYPE_6__ {scalar_t__ daq_io_addr; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int const) ;
 TYPE_4__* FUNC_2 (struct comedi_device*) ;
 unsigned int const VAR_2 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int const FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (struct comedi_device*) ;
 unsigned int FUNC_6 (scalar_t__) ;
 TYPE_2__* FUNC_7 (struct comedi_subdevice*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned VAR_7;
 const unsigned VAR_8 = 5;
 unsigned VAR_9 = 0;
 unsigned VAR_10;
 if (VAR_5->n != 2)
  return -VAR_1;
 VAR_7 = FUNC_0(VAR_5->chanspec);
 for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
  const unsigned VAR_11 = FUNC_3(VAR_7) + VAR_10;
  const unsigned VAR_12 =
      FUNC_7(VAR_4)->base_port + VAR_11;
  unsigned VAR_13;
  unsigned VAR_14, VAR_15, VAR_16;
  int VAR_17;
  if (VAR_12 >= FUNC_4(FUNC_2(VAR_3)))
   break;
  VAR_13 = VAR_11 * VAR_2;
  VAR_14 = VAR_6[0];
  VAR_15 = VAR_6[1];
  VAR_17 = VAR_13 - VAR_7;
  if (VAR_17 >= 32 || VAR_17 <= -32)
   break;
  if (VAR_17 > 0) {
   VAR_14 >>= VAR_17;
   VAR_15 >>= VAR_17;
  } else {
   VAR_14 <<= -VAR_17;
   VAR_15 <<= -VAR_17;
  }
  VAR_14 &= 0xff;
  VAR_15 &= 0xff;
  if (VAR_14) {
   unsigned VAR_18;
   FUNC_5(VAR_3)->output_bits[VAR_12] &= ~VAR_14;
   FUNC_5(VAR_3)->output_bits[VAR_12] |=
       VAR_15 & VAR_14;
   VAR_18 = FUNC_5(VAR_3)->output_bits[VAR_12];
   if (FUNC_2(VAR_3)->invert_outputs)
    VAR_18 = ~VAR_18;
   FUNC_8(VAR_18,
          FUNC_5(VAR_3)->mite->daq_io_addr +
          FUNC_1(VAR_12));

  }
  VAR_16 =
      FUNC_6(FUNC_5(VAR_3)->mite->daq_io_addr + FUNC_1(VAR_12));

  if (VAR_4->type == VAR_0 && FUNC_2(VAR_3)->invert_outputs) {



   VAR_16 ^= 0xFF;
  }
  if (VAR_17 > 0) {
   VAR_16 <<= VAR_17;
  } else {
   VAR_16 >>= -VAR_17;
  }
  VAR_9 |= VAR_16;
 }
 VAR_6[1] = VAR_9;
 return VAR_5->n;
}

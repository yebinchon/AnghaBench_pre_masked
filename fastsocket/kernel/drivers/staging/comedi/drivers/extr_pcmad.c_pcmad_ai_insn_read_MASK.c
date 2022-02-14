
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {scalar_t__ twos_comp; } ;
struct TYPE_3__ {int n_ai_bits; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7,
         struct comedi_subdevice *VAR_8,
         struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_9->chanspec);

 for (VAR_13 = 0; VAR_13 < VAR_9->n; VAR_13++) {
  FUNC_2(VAR_12, VAR_7->iobase + VAR_0);

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if ((FUNC_1(VAR_7->iobase + VAR_3) & 0x3) == 0x3)
    break;
  }
  VAR_10[VAR_13] = FUNC_1(VAR_7->iobase + VAR_1);
  VAR_10[VAR_13] |= (FUNC_1(VAR_7->iobase + VAR_2) << 8);

  if (VAR_5->twos_comp) {
   VAR_10[VAR_13] ^= (1 << (VAR_6->n_ai_bits - 1));
  }
 }

 return VAR_13;
}

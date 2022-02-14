
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {unsigned int* shadow_samples; } ;
struct TYPE_4__ {unsigned int iobase; TYPE_1__ ao; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,unsigned int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 unsigned VAR_6 = VAR_0->iobase, VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  unsigned VAR_8 = FUNC_0(VAR_3->chanspec), VAR_9 =
      FUNC_1(VAR_3->chanspec);
  if (VAR_8 < VAR_2->n_chan) {
   unsigned char VAR_10 = 0, VAR_11 =
       VAR_9 & ((1 << 4) - 1);
   if (VAR_8 >= 4)
    VAR_8 -= 4, VAR_7 += 4;

   FUNC_2(VAR_11, VAR_6 + VAR_7 + 0);
   FUNC_2(0, VAR_6 + VAR_7 + 1);


   VAR_10 = (VAR_8 << 1) | 0x60;
   FUNC_2(VAR_10, VAR_6 + VAR_7 + 2);

   FUNC_3(VAR_6 + VAR_7);

   FUNC_2(VAR_4[VAR_5] & 0xff, VAR_6 + VAR_7 + 0);
   FUNC_2((VAR_4[VAR_5] >> 8) & 0xff, VAR_6 + VAR_7 + 1);
   VAR_10 = 0x70 | (VAR_8 << 1);

   FUNC_2(VAR_10, VAR_6 + VAR_7 + 2);

   FUNC_3(VAR_6 + VAR_7);

   VAR_0->ao.shadow_samples[VAR_8] = VAR_4[VAR_5];
  }
 }
 return VAR_5;
}

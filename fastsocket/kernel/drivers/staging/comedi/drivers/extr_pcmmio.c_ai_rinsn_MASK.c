
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned long iobase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned char,unsigned long) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = VAR_2->iobase;
 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  unsigned VAR_9 = FUNC_1(VAR_5->chanspec), VAR_10 =
      FUNC_2(VAR_5->chanspec), VAR_11 = FUNC_0(VAR_5->chanspec);
  unsigned char VAR_12 = 0;
  unsigned VAR_13 = 0;
  short VAR_14, VAR_15 = 0;

  if (VAR_9 > 7)
   VAR_9 -= 8, VAR_13 = 4;

  if (VAR_11 != VAR_0) {
   VAR_11 = VAR_1;
   VAR_12 |= 1 << 7;
  }
  if (VAR_10 < 2)
   VAR_15 = 0x8000;

  if (VAR_9 % 2) {
   VAR_12 |= 1 << 6;
  }


  VAR_12 |= ((VAR_9 / 2) & 0x3) << 4;


  VAR_12 |= (VAR_10 & 0x3) << 2;


  FUNC_5(VAR_12, VAR_8 + VAR_13 + 2);

  FUNC_3(VAR_8 + VAR_13);

  FUNC_5(VAR_12, VAR_8 + VAR_13 + 2);

  FUNC_3(VAR_8 + VAR_13);

  VAR_14 = FUNC_4(VAR_8 + VAR_13 + 0);
  VAR_14 |= FUNC_4(VAR_8 + VAR_13 + 1) << 8;
  VAR_14 += VAR_15;
  VAR_6[VAR_7] = VAR_14;
 }

 return VAR_7;
}

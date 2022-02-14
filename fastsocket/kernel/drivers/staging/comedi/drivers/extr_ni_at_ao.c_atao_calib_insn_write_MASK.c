
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int cfg2; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10 = FUNC_0(VAR_6->chanspec);

 VAR_8 = ((VAR_10 & 0x7) << 8) | (VAR_7[VAR_6->n - 1] & 0xff);

 for (VAR_9 = 1 << (11 - 1); VAR_9; VAR_9 >>= 1) {
  FUNC_1(VAR_3->cfg2 | ((VAR_9 & VAR_8) ? VAR_2 : 0),
       VAR_4->iobase + VAR_0);
  FUNC_1(VAR_3->cfg2 | VAR_1 | ((VAR_9 & VAR_8) ? VAR_2 : 0),
       VAR_4->iobase + VAR_0);
 }

 FUNC_1(VAR_3->cfg2 | (((VAR_10 >> 3) + 1) << 14),
      VAR_4->iobase + VAR_0);
 FUNC_1(VAR_3->cfg2, VAR_4->iobase + VAR_0);

 return VAR_6->n;
}

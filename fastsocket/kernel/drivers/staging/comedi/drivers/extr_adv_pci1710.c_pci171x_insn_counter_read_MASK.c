
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4,
         unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = 0xD2;
 for (VAR_9 = 0; VAR_9 < VAR_4->n; VAR_9++) {
  FUNC_1(VAR_8, VAR_2->iobase + VAR_1);

  VAR_7 = FUNC_0(VAR_2->iobase + VAR_0) & 0xFF;
  VAR_6 = FUNC_0(VAR_2->iobase + VAR_0) & 0xFF;

  VAR_5[0] = VAR_7 | (VAR_6 << 8);
 }

 return VAR_4->n;
}

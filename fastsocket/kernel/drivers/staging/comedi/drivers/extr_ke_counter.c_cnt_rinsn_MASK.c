
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1, struct comedi_insn *VAR_2,
       unsigned int *VAR_3)
{
 unsigned char VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = FUNC_0(VAR_2->chanspec);
 int VAR_10;

 VAR_4 = FUNC_1(VAR_0->iobase + VAR_9 * 0x20);
 VAR_5 = FUNC_1(VAR_0->iobase + VAR_9 * 0x20 + 0x04);
 VAR_6 = FUNC_1(VAR_0->iobase + VAR_9 * 0x20 + 0x08);
 VAR_7 = FUNC_1(VAR_0->iobase + VAR_9 * 0x20 + 0x0c);
 VAR_8 = FUNC_1(VAR_0->iobase + VAR_9 * 0x20 + 0x10);

 VAR_10 = (VAR_5 + (VAR_6 * 256) + (VAR_7 * 65536));
 if (VAR_8 > 0)
  VAR_10 = VAR_10 - VAR_1->maxdata;

 *VAR_3 = (unsigned int)VAR_10;


 return 1;
}

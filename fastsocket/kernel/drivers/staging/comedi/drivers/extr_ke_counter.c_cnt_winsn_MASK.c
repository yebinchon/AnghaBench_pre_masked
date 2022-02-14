
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1, struct comedi_insn *VAR_2,
       unsigned int *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->chanspec);

 FUNC_1((unsigned char)((VAR_3[0] >> 24) & 0xff),
      VAR_0->iobase + VAR_4 * 0x20 + 0x10);
 FUNC_1((unsigned char)((VAR_3[0] >> 16) & 0xff),
      VAR_0->iobase + VAR_4 * 0x20 + 0x0c);
 FUNC_1((unsigned char)((VAR_3[0] >> 8) & 0xff),
      VAR_0->iobase + VAR_4 * 0x20 + 0x08);
 FUNC_1((unsigned char)((VAR_3[0] >> 0) & 0xff),
      VAR_0->iobase + VAR_4 * 0x20 + 0x04);


 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int status2; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 TYPE_1__* VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6->chanspec);
 int VAR_9;

 if (VAR_8 < 4)
  VAR_9 = 0x0f;
 else
  VAR_9 = 0xf0;

 switch (VAR_7[0]) {
 case 129:
  VAR_5->io_bits |= VAR_9;
  break;
 case 130:
  VAR_5->io_bits &= VAR_9;
  break;
 case 128:
  VAR_7[1] =
      (VAR_5->io_bits & (1 << VAR_8)) ? VAR_1 : VAR_0;
  return VAR_6->n;
  break;
 default:
  return -VAR_2;
  break;
 }

 VAR_3->status2 &= ~0x00c0;
 VAR_3->status2 |= (VAR_5->io_bits & 0xf0) ? 0x0080 : 0;
 VAR_3->status2 |= (VAR_5->io_bits & 0x0f) ? 0x0040 : 0;

 FUNC_1(VAR_3->status2, VAR_4->iobase + 6);

 return VAR_6->n;
}
